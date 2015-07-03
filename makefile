PROGS := lab1-1 lab1-2 standard_deviation
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

LAB1-1 = lab1-1.o average.o summation.o

LAB1-2 = lab1-2.o average.o summation.o

STANDARD_DEVIATION = standard_deviation.o average.o summation.o

OBJS = lab1-1.o lab1-2.o average.o summation.o standard_deviation.o

SRCS = lab1-1.cpp lab1-2.cpp average.cpp summation.cpp standard_deviation.cpp

HEADERS = average.hpp summation.hpp

all: ${PROGS}

lab1-1: ${LAB1-1} ${HEADERS}
	${CXX} ${LDFLAGS} ${LAB1-1} #-o lab1-1

lab1-2: ${LAB1-2} ${HEADERS}
	${CXX} ${LDFLAGS} ${LAB1-2} #-o lab1-2

standard_deviation: ${STANDARD_DEVIATION} ${HEADERS}
	${CXX} ${LDFLAGS} ${STANDARD_DEVIATION} #-o lab1-2

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f $(PROGS) *.o *~