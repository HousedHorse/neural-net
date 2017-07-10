#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "defs.h"

class Perceptron{
public:
  Perceptron();
  int process(vector<int>* input);
protected:
  int activation();
  vector<int>* weight;
};

#endif
