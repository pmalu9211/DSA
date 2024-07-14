#include <iostream>
using namespace std;

//gives the bit as an output
int getbit(int num, int pos){
    int j = 1<<pos;
    if ((num & j) == 0)
    return 0;
    
    else
    return 1;
}


//sets the num at posn as 1
int setbit(int num, int pos){
    int j = 1<<pos;
    return(num|j);

}

//Sets the bit at that position as zero
int clear(int num, int pos){
    int j = 1<<pos;
    j = ~j;
    return(num&j);
}

int update(int num, int pos, int bit){
    int j = bit<<pos;
    // 111 2 0
    // 

    return(num&(~j));
}

int main(){
    cout<<getbit(1,0);
    cout<<setbit(2,0);
    cout<<clear(7,2);
    cout<<update(7,2,0);
}