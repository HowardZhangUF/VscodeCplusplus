#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// Add other necessary headers
class node
{
    int data;
    int * pre;
    int * nxt;

    node(int data)
    {
        this->data = data;
    }
};

class LinkedList
{
    int * head;   
    LinkedList(int * head)
    {
        this->head = head;
    }
};


/* Driver code*/
int main()
{
	/* Start with the empty list */
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();
    
	ll.reverse();

	cout << "\nReversed linked list \n";
	ll.print();
	return 0;
}
