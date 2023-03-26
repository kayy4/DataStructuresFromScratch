#include <stdio.h>
#include <stdlib.h>
struct Node {
      int Data;
      struct Node *Link;
    };
struct Node* HeadNode;

void Insert(int values){   //insert function
  //First create a node then Inserting a node at the bigining 
  Node* Temp1 = (Node*)malloc(sizeof(Node));
  (*Temp1).Data = values;
  (*Temp1).Link = HeadNode; // New node Link is Linked to previous Node,If the List is Empty-->Headnode is NULL. 
  HeadNode = Temp1;         // Store the new node (first Node) Address in "Headnode" 
}

int Print(){
  struct Node* Temp1 = HeadNode;
  printf("List is:");
  while(Temp1 != NULL){
    printf(" %d", (*Temp1).Data);
    Temp1= (*Temp1).Link; 
  }
  printf("\n");
}

int main(){
  HeadNode = NULL;    //Value of the Head Node (initializing)
  //storing Data into the LinkedList 
  printf ("How Many Numbers To Store?\n");
  int n, x;
  scanf("%d, ", &n);
  for(int i=0; i<=n; i++){
    scanf("%d", &x);
    Insert(x);    //function to insert
    Print();      //function to print the List
  }
}
