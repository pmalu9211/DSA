#include <iostream>

using namespace std;

int dbt(int a){
    int b = 1;
    int ans = 0;
    while(b<=a)
{   b = b*2;}
    b = b/2;

    while(b>0){
        int ld = a/b;
        a = a - ld*b;
        ans = ld +ans*10;
        b = b/2;

}
return ans;
}

int main(){

    cout<<dbt(10);

}