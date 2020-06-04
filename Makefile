#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

HEADERS := solver.hpp $(wildcard *.h*)
STUDENT_SOURCES := $(filter-out $(wildcard Test*.cpp), $(wildcard *.cpp))
STUDENT_OBJECTS := $(subst .cpp,.o,$(STUDENT_SOURCES))

run: test
	./$^

<<<<<<< HEAD
test: TestRunner.o Test1.o Test2.o $(STUDENT_OBJECTS)
=======
test: TestRunner.o Test_amichai.o Test_oriane_yirat.o $(STUDENT_OBJECTS)
>>>>>>> 2cbd090423ac55eafa84d4da9595db022edbe92d
	$(CXX) $(CXXFLAGS) $^ -o test

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o test
