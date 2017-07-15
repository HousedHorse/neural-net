#include "defs.h"
#include "Perceptron.h"
#include "Point.h"
#include "DynamicArray.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Perceptron perc = Perceptron();
  DynamicArray<Point> points;
  
  for(int i = 0; i < 2000; i++){
    points.push(Point(5,600,1));
  }
  
  perc.train(points, 100000000);
  
  cout << endl << "FINAL OUTPUT" << endl;
  perc.processAllPoints(points);
  
  cout << "Training complete. Press ENTER to continue...";
  cin.get();
  
  while(1){
    points.purge();
    
    for(int i = 0; i < 100000; i++){
      points.push(Point(5,600,1));
    }
    
    perc.processAllPoints(points);
    
    cout << "Press ENTER to test another " << points.getSize() << " points...";
    cin.get();
  } 
}
