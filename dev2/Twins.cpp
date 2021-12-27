#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int CoinsNum;
    cout<<"Enter the number of coins "<<endl;
    cin>>CoinsNum;
    int CoinsArr[CoinsNum],Sum=0,Counter=0,Sum2 = 0;
    cout<<"Then enter the values of coins separated with spaces : "<<endl;
    for(int i=0;i<CoinsNum;i++)
    {
        cin>>CoinsArr[i];
        Sum +=CoinsArr[i];
    }
    Sum = Sum/2;

    sort(CoinsArr,CoinsArr+CoinsNum);
    for(int j = CoinsNum-1;j >= 0;j--)
    {
        Sum2 += CoinsArr[j];
        Counter++;
        if(Sum2>Sum)
        {
            break;
        }

    }
    cout<<Counter<<endl;
    return 0;



}
