#include "defs.h"
#include "Perceptron.h"
#include "Point.h"
#include "DynamicArray.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Perceptron perc = Perceptron();
  DynamicArray<Point> points;
  
  for(int i = 0; i < 20; i++){
    points.push(Point("random"));
  }
  
  for(int i = 0; i < points.getSize(); i++){
    cout << points[i].getId() << endl;
  }
 
}
