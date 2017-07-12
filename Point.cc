#include "Point.h"

Point::Point(){
  size = 0;
}

int* Point::getData(){ return data; }

int Point::getSize(){ return size; }

int Point::push(int n){data[size] = n; size++; return n; }

int Point::pop(){
  size--;
  int n = data[size];
  return n;
}
