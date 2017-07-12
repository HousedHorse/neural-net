OBJ = main.o Perceptron.o Point.o

neural-net: $(OBJ)
	g++ -o neural-net $(OBJ)

main.o: main.cc defs.h
	g++ -c main.cc
	
Perceptron.o: Perceptron.cc Perceptron.h
	g++ -c Perceptron.cc
	
Point.o: Point.cc Point.h
	g++ -c Point.cc
