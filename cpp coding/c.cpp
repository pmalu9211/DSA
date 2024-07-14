#include <iostream>
using namespace std;

int main(){
   cout<<"Enter a number to check if it is prime or not : "<<endl;
   int n; cin>>n;
   int flag = 1;
   for (int i = 2; i<n; i++){
      if(n%i == 0)
      {
         flag = 0;
         break;
      }

   }
   if(flag == 1) cout<<"prime"<<endl;
   else cout<<"Not a prime"<<endl;
}