#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N != 1)
    {
        cout << N << endl;
        if(N&1)
            N = 3*N+1;
        else
            N /= 2;
    }
    cout << 1 << endl;
    return 0;
}
