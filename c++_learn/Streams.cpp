#include<iostream>
#include<fstream>
using namespace std;

// SERIALIZATION

class Student
{
public:
    string name;
    int rollno;
    string branch;
    // OUTPUT FILE STREAM
    friend ofstream & operator<<(ofstream &ofs , Student &s);
    // INPUT FILE STREAM
    friend ifstream & operator>>(ifstream &ifs , Student &s);
};
ifstream & operator>>(ifstream &ifs , Student &s)
{
    ifs>>s.name>>s.rollno>>s.branch;
    return ifs;
}
ofstream &operator<<(ofstream &ofs , Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
    // WRITING IN THE FILE

    // ofstream ofs("My.txt" ,ios::app);
    // ofs<<"John"<<endl;
    // ofs<<25<<endl;
    // ofs<<"cse"<<endl;
    // ofs<<"Hello my new program";
    // ofs.close();
    

    // READING FROM A FILE

    // ifstream infile;   // ifstream ifs("My.txt")
    // infile.open("My.txt");
    // if (!infile)
    // {
    //     cout<<"Cannot read from file";
    // }
    // string name;
    // int x;
    // infile>>name>>x;
    // if(infile.eof())
    // {
    //     cout<<"End of file reached";
    // }
    // infile.close();
    // cout<<name<<" "<<x<<endl;

    // SERIALIZATION
    
    // WRITING IN FILE
    // Student s1;
    // s1.name = "Khan";
    // s1.rollno = 24;
    // s1.branch = "cse";

    // ofstream ofs("Student.txt",ios::trunc);
    // ofs<<s1;
    // ofs.close();

    // READING FROM THE FILE

    Student s1;

    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.branch;


    ifs.close();


}
