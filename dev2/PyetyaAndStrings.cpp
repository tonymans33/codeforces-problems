#include <iostream>
#include <string>
using namespace std;
int main() {
    string word1,word2,low1,low2;
    cout<<"Enter two strings to compare : "<<endl;
    cin>>word1;
    cin>>word2;
    for(int i=0;i<word1.length();i++)
    {
        low1 += towlower(word1[i]);
    }
    for(int j=0;j<word2.length();j++)
    {
        low2 += towlower(word2[j]);
    }

    if(low1==low2)
    {
        cout<<"0";
    }
    else if(low1 > low2)
    {
        cout<<"1";
    }
    else if(low1 < low2)
    {
        cout<<"-1";
    }


return 0;
}