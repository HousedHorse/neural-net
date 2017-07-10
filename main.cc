#include "defs.h"
#include "Perceptron.cc"

int main(int argc, char* argv[]){
  Perceptron* p = new Perceptron;
  int* foo;
  foo[0] = 12;
  foo[1] = 22;
  p.process(foo);
}
