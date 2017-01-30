#ifndef SSADAMAGEAPP_H
#define SSADAMAGEAPP_H

#include "MooseApp.h"

class SsadamageApp;

template<>
InputParameters validParams<SsadamageApp>();

class SsadamageApp : public MooseApp
{
public:
  SsadamageApp(InputParameters parameters);
  virtual ~SsadamageApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* SSADAMAGEAPP_H */
