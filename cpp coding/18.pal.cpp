#include <iostream>

using namespace std;

int main(){
    int n; 
    cin>>n;
    char ch[n+1]; 
    cin>>ch;
    int g = 0;

    for (int i = 0; i < n; i++)
    {
        if (ch[i] != ch[n-i-1])
        {
            g = 1;
            break;
        }

    }
    if (g == 1){
        cout<<"n";
    }
    else{
        cout<<-1;
    }

}
