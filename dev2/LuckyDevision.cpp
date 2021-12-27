#include <iostream>

using namespace std;

int main()
{
    int Num;
    bool flag;
    cout<<"Enter a number to see if almost lucky or not "<<endl;
    cin>>Num;
    int arr[16] = {4,7,77,44,47,74,444,474,447,777,477,774,747,477,744,477};
    for(int i=0;i<16;i++) {
        if (Num % arr[i] == 0)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout<<"Almost lucky !!"<<endl;
    }
    else
    {
        cout<<"Not Almost lucky !!"<<endl;
    }



}
/*
 #include <iostream>

using namespace std;

int main()
{
    int Num;
    bool flag;
    cin>>Num;
    int arr[16] = {4,7,77,44,47,74,444,474,447,777,477,774,747,477,744,477};
    for(int i=0;i<16;i++) {
        if (Num % arr[i] == 0)
        {
            flag = true;
        }
    }
    if(flag)

        cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;
}
 */


