#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"How many words you will enter ? "<<endl;
    int Choice;
    cin>>Choice;

    for(int i=0;i<= Choice;Choice++)
    {
        string word;
        cout<<"Enter a word : ";
        cin >>word;
        int WordLen = word.length();
        if(WordLen>=10)
        {
            cout<<word[0]<<WordLen-2<<word[WordLen-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
    return 0;
}