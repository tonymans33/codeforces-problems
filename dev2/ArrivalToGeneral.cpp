#include <iostream>
#include <cstdlib>
using namespace std;
/*int main() {
    int size;
    cin>>size;
    int* array;
    array = new int[size];
    for(int i=0;i<size;i++)
    {
        array[i]=(rand()%100);
        cout<<array[i]<<endl;
    }


    return 0;
}*/
/*struct student
{
    string name;
    float gpa;
    short year;
    int sID;
};
student s()
{
    string name = "s"+to_string(rand()%100);
    short RandYear = (rand()%4)+1;
    student s = {name,3.1,RandYear,(rand()%500+2009000)};
    return s;
}
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i] = s();
        cout<<s[i].name<<"-"<<s[i].gpa<<endl;
        cout<<s[i].sID<<"-"<<s[i].year<<endl;

    }

}*/
class tony
{
    int x,y;
public:
    tony()
    {
        cout<<"Default"<<endl;
    }
    tony(int a,int b) : x(a),y(b){cout<<"Parameterized"<<endl;}
    tony(const tony &ob) :x(ob.x),y(ob.y){cout<<"copy"<<endl;}
    void print()
    {
        cout<<x<<y<<endl;
    }
};
int main()
{
    tony k;
    k.print();
    tony m(5,4);
    tony old(m);
    old.print();
    return 0;
}



