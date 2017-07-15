OBJ = main.o Perceptron.o Point.o

neural-net: $(OBJ)
	g++ -o neural-net $(OBJ)

main.o: main.cc defs.h DynamicArray.h Perceptron.h Point.h
	g++ -c main.cc
	
Perceptron.o: Perceptron.cc Perceptron.h DynamicArray.h defs.h
	g++ -c Perceptron.cc
	
Point.o: Point.cc Point.h DynamicArray.h defs.h
	g++ -c Point.cc
