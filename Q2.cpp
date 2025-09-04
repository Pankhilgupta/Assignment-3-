#include <iostream>
using namespace std;
static int m=100;
char st[50];
static int top=-1;
void push(char x){
    if(top == m-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    st[top]=x;
}
void display(){
    int i,n=top;
    for(i=0;i<=n;i++){
        cout<<st[i];
    }
}
void pop(){
        cout<<st[top];
        top--;
    
}
int main() {
  char arr[50];
  cout<<"Enter the string: ";
  cin>>arr;
  int i;
  for(i=0;arr[i] != '\0';i++){
      push(arr[i]);
  }
  cout<<"Original stack is: ";
  display();
  cout<<"\n";
  cout<<"Reversed stack: ";
  for(i=0;arr[i] != '\0';i++){
      pop();
  }
    return 0;
}

