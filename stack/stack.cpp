#include<iostream>
#include<string>
using namespace std;

class Stack{
  private:
    int top;     //to keep track of the elements
    int arr[5];  //stack size

  public:
    Stack(){
      top =-1;
      for(int i=0; i<5; i++){
        arr[i]=0;
      }
    }

  bool isEmpty(){
    if(top==-1){
      return true;
    }
    else
      return false;
    }
  
  bool isFull(){
    if(top==5){
      return true;
    }
    else 
      return false;
  }
  
  void push(int val){
    if(isFull()){
      cout<<"Stack is Overflow"<<endl;
    }
    else 
      top++;
      arr[top] = val;
  }

  int pop(){
    int tempvalue;
    if(isEmpty()){
      cout<<"Stack is Underflow" <<endl;
    }
    else
      tempvalue = arr[top];
      arr[top] = 0;
      top--;
      return tempvalue;
  }

  int count(){
    return (top+1);
  }

  void change(int val, int pos){
    if(isEmpty()){
      cout<<"Stack is Underflow"<<endl;
      }
    else 
      arr[pos]=val;   
  }

  int peek(int pos){
    if(isEmpty()){
      cout<<"Stack is Underflow"<<endl;
      }
    else 
    return arr[pos];
  }

  void display(){
    cout<<"All Stack Values:"<<endl;
    for(int i=4; i<=0; i--){
      cout<<""<<arr[i]<<endl;
    }
  }
  };

int main(){
Stack S1;
int position, value, option;

do{
cout<<"Enter the number of the option to perform. Press 0 to exit"<<endl;
cout<<"1. push()"<<endl;
cout<<"2. pop()"<<endl;
cout<<"3. isEmpty()"<<endl;
cout<<"4. isFull()"<<endl;
cout<<"5. count()"<<endl;
cout<<"6. change()"<<endl;
cout<<"7. peek()"<<endl;
cout<<"8. display()"<<endl;

cin>>option;
switch(option){
  
  case 0:
    break;

  case 1:
    cout<<"Enter the value to push -";
    cin>>value;
    S1.push(value);
    break; 

  case 2:
    cout<<"Popped value:"<<S1.pop()<<endl;
    break;    

  case 3:
    if(S1.isEmpty()){
      cout<<"Stack is Empty"<<endl;
    }
    else
      cout<<"Stack is not empty"<<endl;
    break;

  case 4:
    if(S1.isFull()){
      cout<<"Stack is Full"<<endl;
      break;
    }
    else
      cout<<"Stack is not Full"<<endl;
      break;

  case 5:
    cout<<"Count:"<<S1.count()<<endl;
    break;

  case 6:
    cout<<"Enter the position needed to be change:"<<endl;
    cin>>value;
    cout<<"Enter the value to change "<<endl;
    cin>>position;
    S1.change(value, position);
    break;

  case 7:
    cout<<"Enter the position to peek:"<<endl;
    cin>>position;
    S1.peek(position);
    break;

  case 8:
    S1.display();
}
}while (option!=0);

return 0;
}
