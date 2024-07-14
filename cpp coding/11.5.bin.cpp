#include <iostream>
#include <math.h>

using namespace std;

int btd(int a){
    int b = 0;
    int g = a;
    int sum = 0;
    while (g > 0){
        
        

        sum = sum + g%10*(pow(2,b));
        g = (g)/10;
        b++;

        

    }
    return sum;
}

int main(){
    int gg;
    cin>>gg;
    cout<<btd(gg);

}

// #include <iostream>
// using namespace std;

// int bin(int a){

// }

// int main()
// {
//     int a; cin>>a;
//     cout<<bin(a);
    
// } // namespace std;
