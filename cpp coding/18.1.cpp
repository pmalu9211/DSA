#include <iostream>

using namespace std;

int main(){

    /*length of max word*/

    int n;
    cout<<"n :" ; 
    cin>>n;
    // cin.ignore();
    int i = 0;
    int count = 0;
    int mx = 0;


    char str[n + 1];cout<<"word : " ;
    cin.getline(str,n);
    //cin.ignore();


    while(true){
        if (str[i] == ' ' || str[i] == '\0'){
            mx = max(count, mx);
            count = 0;


        }
        else
        count++;

        i++;
        
        if (i == n ){
            break;
        }
        
    }
    cout<<"the max is"<<mx;



}