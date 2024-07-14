#include <bits/stdc++.h>
#include"stack.h"
#include"stack.cpp"

using namespace std;

class expression{
    public:

    int precidence(char c){

        if(c == '+' || c == '-')
            return 1;
        else if(c == '*' || c == '/'){
            return 2;
        }
        else if( c == '%'){
            return 3;
        }

        else if (c == '^')
        return 4;

        else return -1;
    }

    bool isopr(char c){
        return (c == '+' || c == '-'||c == '*' ||c == '/'||c == '^' ||c == '%');
    }

    string infixtopostfix(string input){

        Stack<char> S;
        string postfix = "";

        for(int i = 0; i<input.length(); i++){
            
            if(isalpha(input[i])){
                postfix+=input[i];
            }
            else if(input[i] == '('){
                S.push(input[i]);
            }
            else if(input[i] == ')'){
                while(S.peek() != '('&& !S.isEmpty()){
                    postfix+=S.pop();
                }
                S.pop();
            }
            else if(isopr(input[i])){
                // cout<<S.isEmpty()<<endl;
                if(S.isEmpty()){
                    S.push(input[i]);
                }
                else if(S.peek() == '('){
                    S.push(input[i]);
                }
                else if(precidence(input[i])>= precidence(S.peek())){
                    S.push(input[i]);
                }
                else if(precidence(input[i])< precidence(S.peek())){
                    while(!S.isEmpty() && precidence(input[i])<= precidence(S.peek()) ){
                        postfix+= S.pop();
                        // cout<<postfix<<endl;
                        
                    }
                    S.push(input[i]);
                }

            }

        }
        while(!S.isEmpty()){
            postfix+=S.pop();
        }
        return postfix;

    }

    string infixtoprefix(string infix){
        reverse(infix.begin(), infix.end());

        for(int i = 0; i<infix.length(); i++){
            if(infix[i] == '(')
            infix[i] = ')';
            if(infix[i] == ')')
            infix[i] = '(';
        }

        string postfix = infixtopostfix(infix);

        reverse(postfix.begin(), postfix.end());
        return postfix;


    }

    double prefixe(string prefix ){
        Stack<double> Stack;

        for(int i = prefix.length()-1; i>=0; i--){
            if(isdigit(prefix[i])){
                Stack.push(prefix[i] - '0');
            }
            else{
                double o1 = Stack.pop();
                double o2 = Stack.pop();

                switch (prefix[i]) {
                case '+':
                    Stack.push(o1 + o2);
                    break;
                case '-':
                    Stack.push(o1 - o2);
                    break;
                case '*':
                    Stack.push(o1 * o2);
                    break;
                case '/':
                    Stack.push(o1 / o2);
                    break;
                }
        }
    }
    return Stack.peek();
    }

 double postfixe(string postfix) {
    Stack<double> S;

    for (int i = 0; i < postfix.length(); i++) {
        if (isdigit(postfix[i])) {
            S.push(postfix[i] - '0');
        } else {
            double o2 = S.pop();
            double o1 = S.pop();

            switch (postfix[i]) {
                case '+':
                    S.push(o1 + o2);
                    break;
                case '-':
                    S.push(o1 - o2);
                    break;
                case '*':
                    S.push(o1 * o2);
                    break;
                case '/':
                    S.push(o1 / o2);
                    break;
            }
        }
    }
    return S.peek();
}

};

int main(){
    // template <typename T>
    Stack<int>* s = new Stack<int>();

    // Node(23);
    // Node(20);
    
    s->push(13);
    s->push(20);
    s->push(12);
    s->push(10);
    s->display();
    s->pop();
    s->display();
    s->peek();
    cout<<"-----------------------------------"<<endl;
    // expression* e = new exception();
    // e->
    expression w;
    cout<<w.infixtopostfix("A + B * C + D")<<endl;
    cout<<w.infixtoprefix("+*AB/CD")<<endl;
    // cout<<w.prefixe("*46")<<endl;
    cout<<w.postfixe("46*");
    return 0;
    }