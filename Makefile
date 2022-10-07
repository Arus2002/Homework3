all: main


main: main.o homework3.1.o 
	g++ main.o homework3.1.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

homework3.1.o: homework3.1.cpp
	g++ -c homework3.1.cpp -o homework3.1.o

clean:
	rm *.o main

