#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "defs.h"
#include "Point.h"

class Perceptron{
public:
  Perceptron();
  int process(Point* input);
protected:
  int activation();
  int sign(double n);
  double* weight;
};

#endif
