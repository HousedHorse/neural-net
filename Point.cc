#include "Point.h"

Point::Point(){
  size = 0;
}

int* Point::getData(){ return data; }

int Point::getSize(){ return size; }

int Point::push(int n){data[size] = n; size++; return n; }

int Point::pop(){
  if(size == 0)
    return NULL;
  size--;
  int n = data[size];
  return n;
}
