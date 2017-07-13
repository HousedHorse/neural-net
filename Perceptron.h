#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "defs.h"
#include "Point.h"
#include "DynamicArray.h"

class Perceptron{
public:
  Perceptron();
  Perceptron(int n);
  int processAllPoints();
  int process(const Point& point);
protected:
  int activation(double n);
  DynamicArray<double> weights;
};

#endif
