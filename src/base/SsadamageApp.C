#include "SsadamageApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template<>
InputParameters validParams<SsadamageApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

SsadamageApp::SsadamageApp(InputParameters parameters) :
    MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  SsadamageApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  SsadamageApp::associateSyntax(_syntax, _action_factory);
}

SsadamageApp::~SsadamageApp()
{
}

// External entry point for dynamic application loading
extern "C" void SsadamageApp__registerApps() { SsadamageApp::registerApps(); }
void
SsadamageApp::registerApps()
{
  registerApp(SsadamageApp);
}

// External entry point for dynamic object registration
extern "C" void SsadamageApp__registerObjects(Factory & factory) { SsadamageApp::registerObjects(factory); }
void
SsadamageApp::registerObjects(Factory & factory)
{
}

// External entry point for dynamic syntax association
extern "C" void SsadamageApp__associateSyntax(Syntax & syntax, ActionFactory & action_factory) { SsadamageApp::associateSyntax(syntax, action_factory); }
void
SsadamageApp::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}
