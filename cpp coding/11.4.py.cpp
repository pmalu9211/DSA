#include<iostream>

using namespace std;

bool py(int a, int b, int c){
    if ((a > b && b> c )|| ( a > c && c > b)){
        if ( a*a == b*b + c*c){
            return true;
        }
        else{
            return false;
        }
    }

    if ((b > c && c > a )||( b > a&& a > c)){
        if ( b*b == a*a + c*c){
            return true;
        }
        else{
            return false;
        }

    }
    else{
        if ( c*c == a*a + b*b){
            return true;
        }
        else{
            return false;
        }

    }

    
}

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    if (py(a,b,c)){
        cout<<"pythogorean";
    }
    else{
        cout<<"no";
    }
    
    

}