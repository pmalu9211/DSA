#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

class Student{


        int roll;
        string name;
        int div;
        int n = 1;
    public:
    fstream file;
    void add();
    void display();
    void clearfile();
    void newfile();
    void del();
    void modify();
    void search();

    Student();

};

void Student::modify(){

}

void Student::search(){
    int roll;
    cout<<"What is the roll no. you want to search : ";
    cin>>roll;
    string line;

    file.open("abc.txt");
    if(file.is_open()){
    while(getline(file,line)){
        stringstream search(line);
        string arr[4];
        int i = 0;

        while(search.good()&& i<4){
            search >> arr[i];
            i++;
        }
        // for(int i = 0; i<4; i++){
        //     arr
        // }

        if(arr[2] == to_string(roll)){
            cout<<line<<"\n";
        }
        
    }}
    file.close();

}

void Student::add(){
    file.open("abc.txt", ios:: out|ios::app);
    cout<<"Name : ";
    cin>>name;
    cout<<"Roll no : ";
    cin>>roll;
    cout<<"Div : ";
    cin>>div;

    file <<n++<<"\t\t\t"<< name <<"\t\t\t"<<roll<<"\t\t\t"<<div<<"\t\t\t\n";
    file.close();

}

void Student:: del(){
    int roll;
    cout<<"what is the roll of the data you want to delete : ";
    cin>>roll;
    string line;
    fstream temp;
    temp.open("temp.txt", ios::out);
    file.open("abc.txt");

    while(getline(file,line)){
        string arr[4];

        int i = 0;
        stringstream input (line);

        while(input.good()&&i<4){
            input >> arr[i];
            // arr[i] << input;
            i++;
        }
        if(to_string(roll)  !=arr[2] ){
            temp << line<<"\n";
        }



    }
    file.close();
    temp.close();
    remove("abc.txt");
    rename("temp.txt", "abc.txt");

}

void Student :: display(){
    string line;
    file.open("abc.txt");
    if(file.is_open()){
        while (getline(file,line))
        cout<<line<<endl;
    }
    file.close();

}

void Student::clearfile(){
    file.open("abc.txt",ios::out|ios::trunc);
    file.close();
}

void Student::newfile(){
    file.open("abc.txt", ios::out);
    file<<"sr.no"<<"\t\t\t"<<"Name"<<"\t\t\t"<<"roll no."<<"\t\t\t"<<"div"<<"\t\t\t"<<"\n";
    file.close();
}

Student:: Student(){
    clearfile();
    newfile();
}

int main(){
    Student s;

    s.add();
    s.add();
    s.display();
    // s.del();
    // s.display();
    s.search();
}
