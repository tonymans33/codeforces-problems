#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the sum you need to count.. String s contains no spaces"<<endl;
    string S,NewS;
    int SLength;
    cin>>S;
    SLength = S.length();

    for (int i =SLength ;  i >= 0 ; i-=2)
    {
        for(int i = 0 ; i< SLength; i+=2)
        {
            if(S[i]>S[i+2])
            {
                int temp=0;
                temp = S[i+2];
                S[i+2] = S[i];
                S[i]=temp;
            }
        }
    }

	cout<<S;
	return 0;
}

