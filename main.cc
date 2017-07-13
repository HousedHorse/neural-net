#include "defs.h"
#include "Perceptron.h"
#include "Point.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Perceptron* perc = new Perceptron;
  Point* p = new Point[20];
  
  for(int i = 0; i < 20; i++){
    p[i] = Point("random");
  }
  
  for(int i = 0; i < 20; i++){
    cout << "Processed value of point #" << p[i].getId()
      << i << " is: " << perc->process(p[i]) << endl;
  }
}
