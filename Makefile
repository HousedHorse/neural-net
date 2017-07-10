OBJ = main.o Perceptron.o

neural-net: $(OBJ)
	g++ -o neural-net $(OBJ)

main.o: main.cc defs.h
	g++ -c main.cc
	
Perceptron.o: Perceptron.cc Perceptron.h
	g++ -c Perceptron.cc
