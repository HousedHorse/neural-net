#include "Point.h"

Point::Point(){
}

//test purposes
Point::Point(const char* s){
  initRandomly();
}

DynamicArray<double> Point::getData(){ return data; }

int Point::getSize(){ return data.getSize(); }

double Point::push(double n){
  return data.push(n);
}

double Point::pop(){
  return data.pop();
}

void Point::initRandomly(){
  for(int i = 0; i < NUM_INPUTS; i++){
    data.push(rand()%100+1);
  }
}
