#include "Point.h"

unsigned long int Point::nextId = 1001;

Point::Point() : id(nextId++){
}

//test purposes
Point::Point(const char* s){
  initRandomly();
}

DynamicArray<double> Point::getData(){ return data; }

int Point::getSize(){ return data.getSize(); }

unsigned long int Point::getId(){ return id; }

double Point::push(double n){
  return data.push(n);
}

double Point::pop(){
  return data.pop();
}

void Point::initRandomly(){
  for(int i = 0; i < NUM_INPUTS; i++){
    cout << "Pushing " << data.push((rand() % 20000) / 100.0) << " as a data point" << endl;
  }
}
