#include "Point.h"

Point::Point(){
  *data = NULL;
   size = 0;
}

Point::getData(){ return data; }

Point::push(int n){ *data = n; data++; size++; *data = NULL; return n; }

Point::pop(){
  int n = data[--size];
  return n;
}
