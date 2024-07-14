#include <iostream>

using namespace std;

int main(){
    int i;
    cout<<"Give : ";
    cin>>i;
    /*
// *      *
// **    **
// ***  ***
// ********
********
***  ***
**    **
*      *
    */

for(int f = 1; f <= i; f++ ){
    for (int j = 1; j<= f ; j++){
        cout<<"*";
    }
    for (int z = 2*(i-f)-1;z>=0;z--){
        cout<<" ";
    }
    for (int l = 1; l<= f ; l++){
        cout<<"*";
    }  
    cout<<endl;

}
for(int pp = 1; pp <= i; pp ++ ){
    for (int mm = i-pp; mm>= 0; mm--){
        cout<<"*";
    }
    for (int gg = 2; gg <= 2*pp-1; gg++){
        cout<<" ";
    }
    for (int mm = i-pp; mm>= 0; mm--){
        cout<<"*";
    }
    cout<<endl;

}
}
// #include<iostream>

// using namespace std;

// int main(){
//     char a;

//     cout<<"what is the letter";
//     cin>>a;

//     switch (a)
//     {
//     case 'a':
//     cout<<"vowel";
//     break;

//     case 'e':
//     cout<<"vowel";
//     break;

//     case 'i':
//     cout<<"vowel";
//     break;
    
//     case 'o':
//     cout<<"vowel";
//     break;
    
//     case 'u':
//     cout<<"vowel";
//     break;

//     default:
//     cout<<"Apni mummy ko bech";
    
//     }
// }