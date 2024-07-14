#include <iostream>

using namespace std;

void search(int array[],int find,int len){

    for (int ff = 0; ff< len; ff++){
        if(array[ff]==find){
            cout<<"the index of the shit is : "<<ff<<endl;
            
        }
        
    }

}

int main(){
    int ars;
    cout<<"What is the size of the array : ";
    cin>>ars;
    int inp;
    int a[ars];

    for (int j = 0; j < ars; j++){
        
        cout<<"What the numbers of the array : ";
        cin>>inp;
        a[j] = inp;

    }
    cout<<"what do you wnat to find : ";
    int ll;
    cin>>ll;
    search(a,ll,ars);
}