#include <iostream>


using namespace std;

int main()
{
    int n, p;
    cin >> n;
    int Vals[n+1]; //or vector <int> f(n+1)
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        Vals[p] = i;
    }
    cout << Vals[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << Vals[i];
    }
    cout << endl;
    return 0;
}
