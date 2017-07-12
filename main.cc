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
  
  cout << p[1].getData()[0] << endl;
  cout << p[1].getData()[1] << endl;
  
  // cout << "Pushed:" << p->push(251.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(23574.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(1223.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(21567.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(22341.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(2321.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(21567.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(44221.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(2221.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(21123.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(23421.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(34521.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(2131.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(2241.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(12321.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(2781.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Pushed:" << p->push(21567.0) << endl;
  // cout << "Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
  // cout << "Popped: " << p->pop() << endl;
  // cout << "New Size: " << p->getSize() << endl;
}
