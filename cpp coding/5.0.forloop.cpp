#include <iostream>

using namespace std;

int main(){
    int i;
    cin>>i;
    int sum = 0;

    for (int c = 1; c <= i ; c++)
    {
        sum = sum + c;
        cout<<sum<<endl;
    }
    
}