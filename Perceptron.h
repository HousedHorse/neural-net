#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "defs.h"

class Perceptron{
public:
  Perceptron();
  int process(int* input);
protected:
  int activation();
  int* weight;
};

#endif
