#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include "defs.h"
#include 

template <class T> class DynamicArray{
public:
  T push();
  T pop();
  T operator[];
private:
  vector<T> data;
};

#endif
