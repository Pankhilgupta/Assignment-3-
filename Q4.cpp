#include <iostream>
using namespace std;
int st[50];
int m=100;
static int top=-1;
void push(int x){
    if(top == m-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    st[top]=x;
}
int pop(){
        return st[top--];
}
int precedence(char x) {
    if (x == '*' || x == '/') return 2;
    if (x == '+' || x == '-') return 1;
    return 0;
}
void infixToPostfix(char infix[]) {
    char postfix[100]; 
    int k = 0;       

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        if (ch >= '0' && ch <= '9') {
            postfix[k++] = ch;
        }
        else {
            while (top != -1 && precedence(st[top]) >= precedence(ch)) {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (top != -1) {
        postfix[k++] = pop();
    }
    cout << "Postfix: " << postfix << endl;
}

int main() {
    char infix[50];
    cout << "Enter infix expression: ";
    cin >> infix;
    infixToPostfix(infix);
    return 0;
}
 

Q5)
#include <iostream>
using namespace std;
int st[50];
int m=100;
static int top=-1;
void push(int x){
    if(top == m-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    st[top]=x;
}
int pop(){
        return st[top--];
}
void evaluate(char expr[]) {
    int s;
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch !='/') {
            int num=ch-'0';
            push(num); 
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch=='/') {
            if (top == -1) 
                cout<<"Invalid expression"<<endl; 
            int b = pop();           
            int a = pop(); 
            switch (ch) {
                case '+':
                    s =a+b;
                    push(s);
                    break;
                case '-':
                    s =a-b;
                    push(s);
                    break;
                case '*':
                    s =a*b;
                    push(s);
                    break;
                case '/':
                    s =a/b;
                    push(s);
                    break;
            }
            
        }
    }
    cout<< st[top];
}
int main() {
  char arr[50];
  cout<<"Enter the postfix expression: ";
  cin>>arr;
  evaluate(arr);
    return 0;
}

