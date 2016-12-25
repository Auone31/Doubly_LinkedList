#include <iostream>

using namespace std;


/*****************************************************************************
 * Structure of the nodes that are to be inserted in the list
*****************************************************************************/
struct node
{
	int number;
	string name;
	string year;

	node * next_item;
	node * previous_item;
};

class Doubly_LinkedList
{
private:

	node * root; //Pointer to the root node
	node * tail; //Pointer to the tail node
	node * next_node; //Used for searching within the list
	node * previous_node; //Used for searching within the list
	node * current_node; //Used for searching within the list
	int LinkedList; //Length of the Linked List (Without counting the root and the tail nodes.)
	

public:


/*****************************************************************************
 * Constructor
*****************************************************************************/
	Doubly_LinkedList();


/*****************************************************************************
 * Destructor
*****************************************************************************/
	~Doubly_LinkedList();


/*****************************************************************************
 * Inserts node at the specified location
*****************************************************************************/
	bool insert_node(node * NewNode, int position);


/*****************************************************************************
 * Push a new node at the front of the list
*****************************************************************************/
	void push_front(node * NewNode);


/*****************************************************************************
 * Push a new node at the end of the list
*****************************************************************************/
	void push_back(node * NewNode);


/*****************************************************************************
 * Removes the node at the specified location
*****************************************************************************/
	bool remove(int position); 


/*****************************************************************************
 * Inserts a new node in the list
*****************************************************************************/
	void printout(); 
};