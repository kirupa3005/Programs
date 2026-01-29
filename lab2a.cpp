#include <iostream>
#include <string>
using namespace std;
#define const int max_marks 100;
#define const int subjects 5;
int main()
{
    short int stu_id=45;
    int marks[5];
    long college_code=1234567890;
    char section='A';
    float avg=0.0;
    int total=0;
    bool pass_status=true;
     cout<<"enter marks"<<endl;
    for(int i=0;i<5;i++){
    cin>>marks[i];
    total=marks[i];
    if (marks[i]<40){
    pass_status=false;
}
    }
    avg=total/5.0;
    cout<<"total marks:"<<total<<endl;
    cout<<"average marks:"<<avg<<endl;
    cout<<"pass status:"<<(pass_status?"pass":"fail")<<endl;
}

    