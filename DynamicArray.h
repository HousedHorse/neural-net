#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <vector>
#include "defs.h"

template <class T>
class DynamicArray{
public:
  T push(T n);
  T pop();
  int getSize();
  void purge();
  T& operator[](const int index);
private:
  std::vector<T> data;
};

template <class T>
T DynamicArray<T>::push(T n){
  data.push_back(n);
  return n;
}

template <class T>
T DynamicArray<T>::pop(){
  //check to see if data vector is empty
  if(data.empty())
    return 0;
  //store the value in the last element
  T n = data.back();
  //pop the last element
  data.pop_back();
  //return the stored value
  return n;
}

template <class T>
void DynamicArray<T>::purge(){
  data.clear();
}

template <class T>
T& DynamicArray<T>::operator[](const int index){
  try{
    return data.at(index);
  }
  catch (const std::out_of_range& e) {
    std::cerr << "ERROR: OUT OF RANGE\n";
    throw 0;
  }
}

template <class T>
int DynamicArray<T>::getSize(){
  return data.size();
}

#endif
