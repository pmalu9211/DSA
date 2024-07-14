#include <iostream>
using namespace std;
#define size 6

struct stud{
	float sgpa;
	int roll_no;
	string name;

};

class Student{
	public:
	struct stud s1[size];
	void input(){
		for(int i = 0; i<size; i++){
			cout<<"What is the name of student number "<< i+1<<" :";
			cin>>s1[i].name;
			cout<<"What is the roll_no of student number "<< i+1<<" :";
			cin>>s1[i].roll_no;
			cout<<"What is the sgpa of student number "<< i+1<<" :";
			cin>>s1[i].sgpa;
			}
		}
	
	void display(){
		for(int i = 0; i<size; i++){
			cout<<"The name of student number "<< i+1<<" :";
			cout<<s1[i].name<<endl;
			cout<<"The ------- roll_no of student number "<< i+1<<" :";
			cout<<s1[i].roll_no<<endl;
			cout<<"The sgpa of student number "<< i+1<<" :";
			cout<<s1[i].sgpa<<endl;
			}
		}
	void bsort(){
		for(int i = 0; i< size ; i++){
			for(int j = 0; j < size-i-1; j++){
				if(s1[j].roll_no > s1[j+1].roll_no){
					swap(s1[j],s1[j+1]);
					}
				}
			}
		}
	
	void isort(){
		for(int i = 1; i<size; i++){
			int j = i - 1;
			struct stud key1 = s1[i];
		    string key = s1[i].name;
			while(j>=0 && s1[j].name > key){
				s1[j+1] = s1[j];
				j--;
			}
            s1[++j] = key1;
			
		    }
        }

    int partation(int s, int e){
        int piv = s1[e].roll_no;
        int j = s-1;
        for(int i = s; i<= e; i++){
            if(s1[i].roll_no < piv){
                j++;
                swap(s1[i], s1[j]);
            }
            
        }
        swap(s1[j+1], s1[e]);
        return j+1;

    }


    void qsort(int s, int e){
        if(s<e){
            int part = partation(s,  e);

            qsort(s, part-1);
            qsort(part+1, e);
        }
    }

};

int main (){
    Student S;
	S.input();
	S.display();
	//S.bsort();
	// S.isort();
    S.qsort(0,5);
	cout<<"-------------------------------------"<<endl;
	S.display();


}
