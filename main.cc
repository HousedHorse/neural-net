#include "defs.h"
#include "Perceptron.h"
#include "Point.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Perceptron* perc = new Perceptron[1000];
  Point* p = new Point[40];
  
  for(int i = 0; i < 40; i++){
    p[i] = Point("random");
  }
  
  for(int j = 0; j < 1000; j++){
    cout << "Perceptron #" << perc[j].getId() << ": " << endl;
    for(int i = 0; i < 40; i++){
      cout << "Processed value of point #" << p[i].getId()
      << " is: " << perc[j].process(p[i]) << endl;
    }
    cout << endl;
  }
}
