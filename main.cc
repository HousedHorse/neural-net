#include "defs.h"
#include "Perceptron.h"
#include "Point.h"

int main(int argc, char* argv[]){
  //seed the random number generator
  srand(time(NULL));
  
  Point* p = new Point;
  
 
  cout << "Pushed:" << p->push(21) << endl;
  cout << "Pushed:" << p->getData()[0] << endl;
  cout << "Size: " << p->getSize() << endl;
  cout << "Popped: " << p->pop() << endl;
  cout << "New Size: " << p->getSize() << endl;
}
