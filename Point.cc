#include "Point.h"

unsigned long int Point::nextId = 1001;

Point::Point(int lower, int upper, bool random) : id(nextId++){
  double x;
  double y;
  if(random){
    x = rand() % (upper * 1000 ) / 1000.0 + lower;
    y = rand() % (upper * 1000 ) / 1000.0 + lower;
  }else{
    x = lower;
    y = upper;
  }
  data.push(x);
  data.push(y);
  if(data[0] <= data[1] + 10){
    trainingCategory = 1;
  }else{
    trainingCategory = -1;
  }
  data.push(1);
}

DynamicArray<double> Point::getData(){ return data; }

int Point::getSize(){ return data.getSize(); }

int Point::getTrainingCategory(){ return trainingCategory; }

unsigned long int Point::getId(){ return id; }

double Point::push(double n){
  return data.push(n);
}

double Point::pop(){
  return data.pop();
}
