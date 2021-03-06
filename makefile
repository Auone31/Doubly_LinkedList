OBJS = main.o Doubly_LinkedList.o
CXX = g++-6
DEBUG = -g
CXXFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

main : $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp Doubly_LinkedList.h Doubly_LinkedList.cpp
	$(CXX) $(CXXFLAGS) main.cpp

Linked_List.o : Doubly_LinkedList.h Doubly_LinkedList.h.cpp
	$(CXX) $(CXXFLAGS) Linked_List.cpp	

clean:
	\rm *.o *main