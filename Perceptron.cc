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

void Perceptron::processAllPoints(DynamicArray<Point> points){
  for(int i = 0; i < points.getSize(); i++){
    cout << "Point #" << points[i].getId() << " final guess: " << process(points[i]) << endl;
  }
}

int Perceptron::train(DynamicArray<Point> points){
  //temporary system to judge correctness
  int correct = 1;
  for(int i = 0; i < points.getSize(); i++){
    //defintions
    float tr = TRAINING_RATE;
    int guess = process(points[i]);
    int target = points[i].getTrainingCategory();
    //calculate the error
    int error = target - guess;
    //use error and training rate to calculate change in weighted
    for(int j = 0; j < points[i].getData().getSize(); j++){
      //new weight is old weight + error * input * training rate
      weights[j] += (error * points[i].getData()[j] * tr);
    }
    //temporary system to judge correctness
    if(error){
      correct = 0;
    }
  }
  return correct;
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
