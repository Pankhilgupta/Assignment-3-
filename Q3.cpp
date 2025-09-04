#include <iostream>
using namespace std;
static int m=100;
char st[50];
static int top=-1;
//{ [ () ] } balanced express
void push(char x){
    if(top == m-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    st[top]=x;
}
char pop(){
        return st[top];
        top--;
}
bool isBalanced(char expr[]) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch); 
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return false; // nothing to match
            char last = pop();           // get last opening
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return false; // mismatch
            }
        }
    }
    return (top == -1); // if stack empty, balanced
}
int main() {
  char arr[50];
  cout<<"Enter the expression: ";
  cin>>arr;
  if(isBalanced(arr)){
      cout<<"Balanced expression.";
  }
  else{
      cout<<" Expression is not balanced. ";
  }
    return 0;
}

