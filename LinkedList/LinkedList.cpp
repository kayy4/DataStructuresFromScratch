//Mapping the Logical View of a Linked List
//Traversal and creating a node
#include<stdlib.h>
#include<stdio.h>
int main(){
int value1, value2;
struct Node{     
  int Data;                     //  |Head Node|----->|data|Link|----->|data|Link|----->NULL
  struct Node *Link;            //   data_type *pointer_name;   | *Link is a pointer to a struct Node.  | 
};
Node* A;                        //Pointer to the First node, to store the address of the node
A = NULL;                       //     A|    |------>NULL        Head node
//Creating a Node
Node* Temp = (Node*)malloc(sizeof(Node));    //create a memory block and collect the pointer variable uding temp variable
(*Temp).Data = value1;
(*Temp).Link = NULL;                        // |Head Node|----->|value1|  0   |----->NULL
A = Temp;                                   // Temp has the memory address of the node created.  Pass it to the A | Head Node   |Head Node|----->|value1|Link|----->NULL

Node* Temp = (Node*)malloc(sizeof(Node));    //create a memory block and collect the pointer variable uding temp variable
(*Temp).Data = value2;
(*Temp).Link = NULL;                        // |Head Node|----->|value1|Link|----->NULL   ****not connected yet****  |value2|   0  |----->NULL
                                
//Travel through the nodes to  connect the nodes 
Node* Temp2 = A;                            //declaring new variable pointer to the head node
while((*Temp2).Link != NULL){
  Temp = (*Temp2).Link;
  
 }
}