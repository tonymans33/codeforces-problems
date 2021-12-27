#include <iostream>
#include <string>
using namespace std;
int main() {
   string Word;
   int HC=0,EC=0,LC=0,OC=0,OtherC=0;
   cout<<"Enter a word determine whether you managed to say hello by the given word or not."<<endl;
   cin>>Word;
   int WLen = Word.length();
   for(int i=0;i< WLen;i++)
   {
       switch(Word[i]) {
           case 'h' :
               HC++;
               break;
           case 'e' :
               EC++;
               break;
           case 'l' :
               LC++;
               break;
           case 'o' :
               OC++;
               break;
           default: OtherC++;
           break;
       }
   }
   if(OtherC!=0 && HC>=1 && EC>=1 && LC>=1 && OC>=1)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
//cout<<"H :"<<HC<<"\nE :"<<EC<<"\nL :"<<LC<<"\nO :"<<OC<<"\nOther :"<<OtherC<<endl;
    return 0;
}
