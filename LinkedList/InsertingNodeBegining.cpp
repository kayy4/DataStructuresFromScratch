#include <stdio.h>
#include <stdlib.h>
class Node {
    public:
      int Data;
      struct Node *Link;
    };
struct Node* HeadNode;

void Insert(int values){   //insert function
  //creating a node
  Node* Temp1 = (Node*)malloc(sizeof(Node));
  (*Temp1).Data = values;
  (*Temp1).Link = NULL;
}

int main(){
  HeadNode = NULL;    


}

