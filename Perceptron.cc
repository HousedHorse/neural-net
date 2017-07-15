#include "Perceptron.h"
#include <math.h>

unsigned long int Perceptron::nextId = 1001;

//constructor
Perceptron::Perceptron() :id(nextId++){
  //set weights
  for(int i = 0; i < NUM_INPUTS + 1; i++){
    // weights.push(rand() % 20000000000 / 10000000000.0 - 1);
    weights.push(0);
  }
};

unsigned long int Perceptron::getId(){ return id; }

double Perceptron::process(Point& point){
  double sum = 0;
  //weighted sum of each data member of the point
  for(int i = 0; i < point.getSize(); i++){
    sum += weights[i] * point.getData()[i];
  }
  //return output of activation function on the sum
  return activation(sum);
}

double Perceptron::activation(double n){
  if(n > 0)
    return 1;
  else
    return -1;
}

void Perceptron::processAllPoints(DynamicArray<Point> points){
  //delete this just for testing
  int numCorrect = 0;
  for(int i = 0; i < points.getSize(); i++){
    if(points[i].getTrainingCategory() == process(points[i]))
      numCorrect++;
    else
      cout << "Point #" << points[i].getId() << " was guessed " << process(points[i]) << ", should have been " << points[i].getTrainingCategory() << endl;
  }
  //delete this just for testing
  cout << "We got " << numCorrect << " many correct out of " << points.getSize() 
    << " -- " << ((double)numCorrect / (double)points.getSize())*100 << "% CORRECT" << endl;
}

void Perceptron::train(DynamicArray<Point> points, int maxGen){
  int correct = 0;
  int generations = 0;
  float tr = TRAINING_RATE;
  while(!correct){
    int errorCount = 0;
    generations++;
    correct = 1;
    for(int i = 0; i < points.getSize(); i++){
      //defintions
      int guess = process(points[i]);
      int target = points[i].getTrainingCategory();
      //calculate the error
      int error = target - guess;
      //use error and training rate to calculate change in weighted
      for(int j = 0; j < points[i].getData().getSize(); j++){
        //new weight = old weight + error * input * training rate
        weights[j] += (error * points[i].getData()[j] * tr);
      }
      //if we made a mistake
      if(error){
        //increment errorCount and mark that at least one error was made
        errorCount++;
        correct = 0;
      }
    }
    //display progress
    cout << "TRAINING RATE: " << tr << endl;
    cout << "GENERATION " << generations << " -- " << errorCount << " ERRORS" << endl;
    cout << "WEIGHT 1 -- " << weights[0] << "... WEIGHT 2  -- " << weights[1] << "... BIAS -- " << weights[2] << endl;
    //break the loop if we reach the maximum number of specified generations
    if(generations == maxGen)
      break;
  }
}
