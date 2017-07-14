#include "Point.h"

unsigned long int Point::nextId = 1001;

Point::Point() : id(nextId++){
}

//test purposes, modify later
Point::Point(const char* s) : id(nextId++){
  initRandomly();
  //simple training for testing purposes, delete later
  if(data[0] >= 3 * data[1] + 24){
    trainingCategory = 1;
  }else{
    trainingCategory = -1;
  }
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

void Point::initRandomly(){
  for(int i = 0; i < NUM_INPUTS; i++){
    cout << "Pushing " << data.push((rand() % 20000) / 100.0)
      << " as input #" << i << " to point #" << id << endl;
  }
  cout << endl;
}
