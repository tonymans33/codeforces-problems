#include <iostream>
using namespace std;
int main() {
    int weight;
    int cary;
    cout<<"Enter weight : "<<endl;
    cin>>weight;
    cary = weight/2;
    if(weight > 1 && weight%2 == 0 && cary%2 == 0 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}