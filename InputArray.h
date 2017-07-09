#ifndef INPUT_ARRAY_H
#define INPUT_ARRAY_H

template <class T> class InputArray{
public:
  int getSize();
  int add(T entry);
  T* data;
protected:
  int size;
};

#endif
