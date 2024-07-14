#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    Node<T> *next;
    T data;

    Node<T>(T data)
    {
        this->data = data;
    }
};
template <typename T>
class Stack
{

public:
    Node<T> *top;

    Stack<T>()
    {
        top = NULL;
    }

    void push(T data)
    {
        Node<T> *temp = new Node<T>(data);
        if (top == NULL)
        {
            temp->next = NULL;
            top = temp;
        }
        else
        {
            temp->next = top;
            top = temp;
        }
    }

    void display()
    {
        Node<T> *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    T pop()
    {
        if (top == NULL)
        {
            cout << "invalid" << endl;
            return -1;
        }
        Node<T> *temp = top;
        top = top->next;

        return temp->data;
    }

    bool isEmpty()
    {
        return (top == NULL);
    }

    T peek()
    {
        return top->data;
    }
};

class Expresstion
{

    int precidence(char c){
        if (c == '+'|| c== '-'){
            return 1;
        }
        else if(c == '/' || c == '*'){
            return 2;
        }
        else if (c == '%')
        return 3;

        else if(c == '^')
         return 4;

         return -1;
    }

    bool isopr(char c){
        if(c =='+'||c == '-'||c == '*'|| c=='/'|| c== '^'){
            return true;
        }
        return false;
        // isaplha
    }

    


    public:

    string infixtopostfix(string infix)
    {
    cout<<"works"<<endl;
        
        string postfix = "";
        Stack<char> S;
        for(int i = 0; i<infix.length(); i++){
    cout<<"works"<<endl;
    cout<<infix[i]<<endl;


            if(isalpha(infix[i])){
                postfix+=infix[i];
            }
            else if(infix[i] == '('){
                S.push(infix[i]);
            }
            else if(infix[i] ==')'){
                while(!S.isEmpty() && S.peek() != '(')
                postfix+=S.pop();
                S.pop();
            }
            else if(isopr(infix[i])){
    cout<<"worksyuf"<<endl;

                if((S.isEmpty() ||  precidence(infix[i])>precidence(S.peek())) || S.peek()=='('){
                    S.push(infix[i]);
                    cout<<"fdsofisdfsf"<<endl;
                }
                else {
                    while( !S.isEmpty() && (precidence(infix[i]) <= precidence(S.peek())) ){
                        postfix += S.pop();
                    }
                    S.push(infix[i]);
                }
                
            }
        }
        while(!S.isEmpty()){
            postfix += S.pop();
        }
        postfix.reserve();

        return postfix;

    }
    
};

int main()
{
    Expresstion E;
    cout<<"works"<<endl;
    cout<<E.infixtopostfix("(A + B) * (C + D)");
}









