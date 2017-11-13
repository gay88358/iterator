INC_DIR = include
SRC = src
TARGET = iterator

all: $(TARGET)

$(TARGET): main.o book.o aggregate.o iterator.o bookIterator.o bookShell.o
ifeq (${OS}, Windows_NT) 
	g++ -o $(TARGET) main.o book.o aggregate.o iterator.o bookIterator.o bookShell.o -lgtest
else
	g++ -o $(TARGET) main.o book.o aggregate.o iterator.o bookIterator.o bookShell.o -lgtest -lpthread
endif

main.o: main.cpp 
	g++ -std=gnu++0x -c main.cpp

book.o: $(INC_DIR)/book.h $(SRC)/book.cpp
	g++ -std=gnu++0x -c $(SRC)/book.cpp

iterator.o: $(INC_DIR)/iterator.h $(SRC)/iterator.cpp
	g++ -std=gnu++0x -c $(SRC)/iterator.cpp

aggregate.o: $(INC_DIR)/aggregate.h $(SRC)/aggregate.cpp
	g++ -std=gnu++0x -c $(SRC)/aggregate.cpp

bookShell.o: $(INC_DIR)/bookShell.h $(SRC)/bookShell.cpp
	g++ -std=gnu++0x -c $(SRC)/bookShell.cpp

bookIterator.o: $(INC_DIR)/bookIterator.h $(SRC)/bookIterator.cpp
	g++ -std=gnu++0x -c $(SRC)/bookIterator.cpp


clean:	
ifeq (${OS}, Windows_NT) 
	del *.o *.exe
else
	rm -f *.o $(TARGET)
endif