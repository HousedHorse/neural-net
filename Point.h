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
  int getTrainingCategory();
  unsigned long int  getId();
  double  push(double n);
  double  pop();
protected:
  void initRandomly();
  DynamicArray<double> data;
  int trainingCategory;
  static unsigned long int nextId;
  unsigned long int id;
};

#endif
