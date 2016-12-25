#include <iostream>
#include "Doubly_LinkedList.h"

using namespace std;

int main()
{
	Doubly_LinkedList myList;

	node * Node_A = new node;
	Node_A -> number = 11;
	Node_A -> name = "Player A";
	Node_A -> year = "1975";

	node * Node_B = new node;
	Node_B -> number = 22;
	Node_B -> name = "Player B";
	Node_B -> year = "1987";

	node * Node_C = new node;
	Node_C -> number = 33;
	Node_C -> name = "Player C";
	Node_C -> year = "1992";

	node * Node_D = new node;
	Node_D -> number = 44;
	Node_D -> name = "Player D";
	Node_D -> year = "1981";

	node * Node_E = new node;
	Node_E -> number = 55;
	Node_E -> name = "Player E";
	Node_E -> year = "1999";

	node * Node_F = new node;
	Node_F -> number = 66;
	Node_F -> name = "Player F";
	Node_F -> year = "2001";

	node * Node_G = new node;
	Node_G -> number = 77;
	Node_G -> name = "Player G";
	Node_G -> year = "2009";

	node * Node_H = new node;
	Node_H -> number = 88;
	Node_H -> name = "Player H";
	Node_H -> year = "2015 (New Born :-)";


/*****************************************************************************
  * Insert a new player in the list (Push back) (List Length = 1)
  * Print out the contents of the list
*****************************************************************************/
	cout << "\n\n\n\n<----After first push back---->" << endl;
	myList.push_back(Node_A);
	
	myList.printout();


/*****************************************************************************
  * Insert two new players in the list at specified location (List Length = 3)
  * Print out the contents of the list
*****************************************************************************/
	cout << "\n\n\n\n<----After inserting second and third nodes---->" << endl;
	myList.insert_node(Node_B, 2);
	myList.insert_node(Node_C, 3);

	myList.printout();
	

/*****************************************************************************
  * Insert two new players in the list (Push front) (List Length = 5)
  * Print out the contents of the list
*****************************************************************************/	
	cout << "\n\n\n\n<----After two more push front operations---->" << endl;
	myList.push_front(Node_D);
	myList.push_front(Node_E);

	myList.printout();


/*****************************************************************************
  * Insert a new player in the list at specified location (List Length = 6)
  * Print out the contents of the list
*****************************************************************************/
	cout << "\n\n\n\n<----After insertion at specified location---->" << endl;
	myList.insert_node(Node_F, 3);

	myList.printout();


/*****************************************************************************
  * Insert two new player in the list (Push back) (List Length = 8)
  * Print out the contents of the list
*****************************************************************************/
	cout << "\n\n\n\n<----After another push back---->" << endl;
	myList.push_back(Node_G);

	myList.printout();

	cout << "\n\n\n\n<----After another push back---->" << endl;
	myList.push_back(Node_H);

	myList.printout();


/*****************************************************************************
  * Remove players from the list
  * Print out the contents of the list
*****************************************************************************/
	cout << "\n\n\n\n<----After removal Node 1---->" << endl;
	myList.remove(1);
	myList.printout();

    cout << "\n\n\n\n<----After removal Node 4---->" << endl;
	myList.remove(4);
	myList.printout();

    cout << "\n\n\n\n<----After removal Node 6---->" << endl;
	myList.remove(6);
	myList.printout();
	
	return 0;
}