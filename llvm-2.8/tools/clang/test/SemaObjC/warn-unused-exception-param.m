// RUN: %clang_cc1 -fsyntax-only -verify -Wunused-exception-parameter %s
void  f0() {
  @try {} @catch(id a) {} // expected-warning{{unused exception parameter 'a'}}
}
