SET_WAVEFORM = 0

#CC=g++
CC=g++ -std=c++11

LDFLAGS=-pthread 

#DUT
PATH_DUT = main.cpp

TARGET = run

all: 
	$(CC) $(LDFLAGS) $(PATH_DUT) -o $(TARGET)


clean:
	@rm -rf $(TARGET)
