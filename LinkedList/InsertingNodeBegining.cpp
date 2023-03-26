#include <stdio.h>
#include <stdlib.h>
struct Node {
      int Data;
      struct Node *Link;
    };
struct Node* HeadNode;

void Insert(int values){   //insert function
  //creating a node
  Node* Temp1 = (Node*)malloc(sizeof(Node));
  (*Temp1).Data = values;
  (*Temp1).Link = NULL;
  HeadNode = Temp1;        //Headnode will store the Node's Address
}

int Print(){

}

int main(){
  HeadNode = NULL;    //Value of the Head Node (initializing)
  //storing Data into the LinkedList 
  printf ("How Many Numbers To Store?\n");
  int n, x;
  scanf("%d", &n);
  for(int i=0; i<=n; i++){
    scanf("%d", &x);
    Insert(x);    //function to insert
    Print();      //function to print the List
  }


}

