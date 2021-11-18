#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
int main()
{
    isPrime[0] = isPrime[1] = 0;
    for (int i = 0; i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < N; j = j + i)
            {
                isPrime[j] = 0;
            }
        }
    }
    // O( N * ( log(log(N)) ) )
    
    for (int i = 1; i < 31; i++)
    {
        cout << isPrime[i] << endl;
    }

    return 0;
}