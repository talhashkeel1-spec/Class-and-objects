#include <iostream>
#include<string>
using namespace std;

    class teacher{
    public:
        string name;
        string id;
        string subject;
        double salary;



    };

int main()
{
    teacher t1;
    cout<<"Teacher 1 complete data"<<endl;
    cout<<"Enter her name :"<<endl;
    cin>>t1.name;

    t1.id="F2025052";
    t1.subject="CAlculus";
    t1.salary=50000;
     cout<<t1.name<<endl<<t1.subject<<endl<<t1.salary;

    return 0;
}
