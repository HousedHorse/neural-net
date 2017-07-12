#include "Point.h"

Point::Point(){
  size = 0;
  max = 16;
  data = new double[max];
}

double* Point::getData(){ return data; }

int Point::getSize(){ return size; }

double Point::push(double n){
  //check to see if the array needs to be resized
  if(size == max){
    expandData();
  }
  //carry on
  data[size] = n;
  size++;
  return n;
}

double Point::pop(){
  if(size == 0)
    return NULL;
  size--;
  int n = data[size];
  return n;
}

//delete this once we have the dynamicarray class finished
void Point::expandData(){
  max *= 2;
  double* temp = new double[max];
  //copy old data over
  for(int i = 0; i < size; i++)
    temp[i] = data[i];
  //delete old array
  delete[] data;
  data = temp;
}
