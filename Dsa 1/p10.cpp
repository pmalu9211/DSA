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

void Student:: modify (){
    cout<<"Enter the roll no of the student you want to modify : ";
    int roll; cin>>roll;
    file.open("abc.txt");
    fstream temp;
    temp.open("temp.txt", ios::out);
    
    int div; cout<<"div : ";cin>>div;
    int rollno; cout<<"rollno : "; cin>>rollno ;
    string name; cout<<"name : "; cin>>name;
    string line;
    string arr[4];

    if(file.is_open()){

        while(getline(file,line)){
            stringstream input(line);

            int i=0;
            while(input.good() && i < 4){
                input>>arr[i];
                i++;
            }
            cout<<arr[2]<<"->>>>>."<<endl;
            if(arr[2] != to_string(roll)){
                temp<<line<<"\n";
                cout<<"=========="<<endl;
            }
            else{
                temp<<arr[0]<<"   "<<name<<"   "<<rollno<<"   "<<div<<"";
                cout<<"-------------"<<endl;
            }

        }
        file.close();
        temp.close();

        remove("abc.txt");
        rename("temp.txt","abc.txt");
    }
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
    // s.search();
    s.modify();
    s.display();
}