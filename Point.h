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
  unsigned long int  getId();
  double  push(double n);
  double  pop();
protected:
  static unsigned long int nextId;
  unsigned long int id;
  DynamicArray<double> data;
  void initRandomly();
};

#endif
