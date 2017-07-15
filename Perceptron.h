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
  double process(Point& point);
  void train(DynamicArray<Point> points, int maxGen);
  void processAllPoints(DynamicArray<Point> points);
protected:
  DynamicArray<double> weights;
  double activation(double n);
  static unsigned long int nextId;
  unsigned long int id;
};

#endif
