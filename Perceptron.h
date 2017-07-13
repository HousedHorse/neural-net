#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "defs.h"
#include "Point.h"
#include "DynamicArray.h"

class Perceptron{
public:
  Perceptron();
  Perceptron(int n);
  unsigned long int  getId();
  int process(Point& point);
  int train(DynamicArray<Point> points);
  void processAllPoints(DynamicArray<Point> points);
protected:
  int activation(double n);
  DynamicArray<double> weights;
  static unsigned long int nextId;
  unsigned long int id;
};

#endif
