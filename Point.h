#ifndef POINT_H
#define POINT_H

#include "defs.h"
#include "DynamicArray.h"

class Point{
public:
  //test purposes
  Point(int, int, bool);
  DynamicArray<double> getData();
  int  getSize();
  int getTrainingCategory();
  unsigned long int  getId();
  double  push(double n);
  double  pop();
protected:
  DynamicArray<double> data;
  int trainingCategory;
  static unsigned long int nextId;
  unsigned long int id;
};

#endif
