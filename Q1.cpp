#include <iostream>
using namespace std;
static int m;
int st[1000];
static int top=-1;
void push(int x){
    if(top == m-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    st[top]=x;
}
void display(){
    int i,n=top;
    cout<<"Elements of stack are: \n";
    for(i=n;i>=0;i--){
        cout<<st[i]<<" ";
    }
}
void pop(){
    if(top==-1){
        cout<<"Empty stack";
        return;
    }
    else{
        cout<<st[top];
        cout<<" Element popped"<<endl;
        top--;
    }
}
void peek(){
    if(top==-1){
        cout<<"Empty stack";
        return;
    }
    else{
        cout<<"The top element of stack is: "<<st[top]<<endl;
    }
}
void isEmpty(){
    if(top== -1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}
void isFull(){
    if(top==m-1){
       cout<< "Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
}
int main() {
    cout<<"Enter the max size of array: ";
    cin>>m;
    int x;
    do{
        cout<<"Enter the fxn to perform: ";
        cin>>x;
        switch(x){
            case 1:
            int a;
            cout<<"Enter the value to push: ";
            cin>>a;
            push(a);
            break;
            case 2: 
            pop();
            break;
            case 3: 
            isEmpty();
            break;
            case 4: 
            isFull();
            break;
            case 5: 
            display();
            break;
            case 6: 
            peek();
            break;
        }
    }while(x!=7);
    return 0;
}

