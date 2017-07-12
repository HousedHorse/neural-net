#include "Perceptron.h"

//constructor
Perceptron::Perceptron(){
  
};

int Perceptron::process(Point* input){
}

int Perceptron::activation(double n){
  if(n >= 0)
    return 1;
  if(n < 0)
    return -1;
}
