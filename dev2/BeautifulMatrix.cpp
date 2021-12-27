/*#include <iostream>
using namespace std;
int main()
{
    int Matrix[5][5],RowAns=0,ColAns=0,FinalAns=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>Matrix[i][j];
        }
    }
    for(int k=0;k<5;k++)
    {
        for(int a=0;a<5;a++)
        {
            if(Matrix[k][a]==1 && k != 2 && a != 2)
            {
                RowAns = 2-k;
                ColAns = 2-a;
                break;
            }
            else if(Matrix[k][a]==1 && k != 2)
            {
                RowAns = 2-k;
                break;
            }
            else if(Matrix[k][a]==1 && a != 2)
            {
                ColAns = 2-a;
                break;
            }
            else if(Matrix[k][a]==1 && k > 2 && a != 2)
            {
                RowAns = k-2;
                ColAns = 2-a;
                break;
            }
            else if(Matrix[k][a]==1 && a > 2 && k != 2)
            {
                RowAns = 2-k;
                ColAns = a-2;
                break;
            }
            else if(Matrix[k][a]==1 && a > 2 && k > 2)
            {
                RowAns = k-2;
                ColAns = a-2;
                break;
            }
        }

    }
    FinalAns = RowAns + ColAns;
    if(FinalAns<0)
    {
        cout<<FinalAns*-1<<endl;
    } else
    {
        cout<<FinalAns<<endl;
    }

}
 */

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (x == 1) {
                ans = abs(i - 3) + abs(j - 3);
                break;

            }
        }
    }
    cout << ans;
    return 0;
}