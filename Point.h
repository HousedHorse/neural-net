#ifndef POINT_H
#define POINT_H

#include "defs.h"

class Point{
public:
  Point();
  double* getData();
  int  getSize();
  double  push(double n);
  double  pop();
protected:
  double* data;
  int size;
private:
  void expandData();
  int max;
};

#endif
