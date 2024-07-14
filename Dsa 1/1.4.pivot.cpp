#include <iostream>
using namespace std;
int main(){
    cout<<"WHat is the length : ";
    int n; cin>>n;

    int a[n];
    cout<<"The members of the arrya : ";
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }

    int s = 0; int e = n-1;
    int mid = (s+e)/2;

    while (s<e)
    {cout<<"s = "<<s<<endl;
    cout<<"e = "<<e<<endl;
           if(a[mid]<a[mid-1] && a[mid]<a[mid+1]){
        // cout<<"JJDIW : "<<mid<<endl;
        break;
    }


        else if(a[mid] > a[0]){
            s = mid + 1;
            cout<<"else if : "<<mid<<endl;
        }
        else {e = mid -1;
            cout<<"else : "<<mid<<endl;
        }
        
        mid = (e + s)/2;
        

        
    }
    cout<<"ejife : "<<mid<<endl;
    
}