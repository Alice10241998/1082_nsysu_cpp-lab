CC = g++
TARGET1 = 12-1
TARGET2 = 12-2
TARGET3 = 12-3
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp TwoD.cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp TwoD.cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o 
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o TwoD.o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o TwoD.o
	
