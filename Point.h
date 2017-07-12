#ifndef POINT_H
#define POINT_H

#include "defs.h"

class Point{
public:
  Point();
  int* getData();
  int  getSize();
  int  push(int n);
  int  pop();
protected:
  int* data;
  int size;
};

#endif
