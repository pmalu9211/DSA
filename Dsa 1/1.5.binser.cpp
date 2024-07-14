//book allocation problem
#include <iostream>
using namespace std;

bool condition(int arr[], int stu, int mid){
    int i = -1;
    int stud = 1;
    for (int cum = 0; cum<=100;cum += arr[i]){
        cout<<"cum = "<<cum<<endl;
        cout<<"mid = "<<mid<<endl;
        if (cum <= mid){
            i++;}
        else{

            stud++;
            if(stud>stu){
                cout<<"False"<<endl;
                return false;
            }
            cum =0;
            // cout<<"Cum at end : "<<cum<<endl;
        }
    }
    cout<<"ture"<<endl;
    return true;
}

int main(){
    int a[4] = {10,20,30,40};
    int students = 2;
    int s = 0;
    int f = 100;
    // int sum = 100;
    int mid = (s+f)/2;

    while(s<=f){
        cout<<"s = "<<s<<endl;
        if(condition(a,2,mid)){
            f = mid - 1;
        }
        else{
            s = mid + 1;
        }
        if (s<=f)
        mid = (s+f)/2;

    }
    cout<<"The mid is : "<<mid<<endl;


    
    }