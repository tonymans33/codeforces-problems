#include <iostream>
#include <string>
using namespace std;
int main() {

    cout<<"Enter a word "<<endl;
    string word,NewWord;
    cin>>word;
    int WordLen =word.length();
    for(int i=0;i <= WordLen;i++)
    {
        if(word[i]=='a'||word[i]=='o'||word[i]=='y'||word[i]=='e'||word[i]=='u'||word[i]=='i'||word[i]=='A'||word[i]=='O'||word[i]=='Y'||word[i]=='E'||word[i]=='U'||word[i]=='I')
        {

            continue;
        }
        else
        {
            NewWord+='.';
            NewWord+=towlower(word[i]);
        }



    }
    cout<<NewWord<<endl;


    return 0;
}
