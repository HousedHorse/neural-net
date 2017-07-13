#ifndef POINT_H
#define POINT_H

#include "defs.h"
#include "DynamicArray.h"

class Point{
public:
  Point();
  //test purposes
  Point(const char*);
  DynamicArray<double> getData();
  int  getSize();
  double  push(double n);
  double  pop();
protected:
  DynamicArray<double> data;
  void initRandomly();
};

#endif
