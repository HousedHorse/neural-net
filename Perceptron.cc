#include "Perceptron.h"

unsigned long int Perceptron::nextId = 1001;

//constructor
Perceptron::Perceptron() :id(nextId++){
  //set weights
  for(int i = 0; i < NUM_INPUTS + 1; i++){
    weights.push(rand() % 2000000 / 1000000.0 - 1);
  }
};

unsigned long int Perceptron::getId(){ return id; }

int Perceptron::processAllPoints(){
}

int Perceptron::process(Point& point){
  double sum = 0;
  //weighted sum of each data member of the point
  for(int i = 0; i < point.getSize(); i++){
    sum += weights[i] * point.getData()[i];
  }
  //add the bias
  sum += weights[point.getSize()];
  //return output of activation function on the sum
  return activation(sum);
}

int Perceptron::activation(double n){
  if(n >= 0)
    return 1;
  if(n < 0)
    return -1;
}
