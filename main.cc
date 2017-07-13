#include "defs.h"
#include "Perceptron.h"
#include "Point.h"
#include "DynamicArray.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Perceptron perc = Perceptron();
  DynamicArray<Point> points;
  
  for(int i = 0; i < 100000; i++){
    points.push(Point("random"));
  }
  
  for(int i = 0; i < points.getSize(); i++){
    cout << "Point #" << points[i].getId() << " has expected value of "
      << points[i].getTrainingCategory() << endl;
  }
  
  int generations = 1;
  
  while(1){
    if(perc.train(points)){
      break;
    }
    generations++;
  }
  
  cout << endl << "FINAL OUTPUT" << endl;
  perc.processAllPoints(points);
  cout << "TOOK " << generations << " MANY GENERATIONS" << endl;
  
  cout << "Training complete. Press ENTER to continue...";
  cin.get();
  
  while(1){
    points.purge();
    
    for(int i = 0; i < 1000; i++){
      points.push(Point("random"));
    }
    
    perc.processAllPoints(points);
    
    cout << "Press ENTER to test another " << points.getSize() << " points...";
    cin.get();
  } 
}
