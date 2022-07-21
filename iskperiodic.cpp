#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string& s, int K)
{
    if (s.length() % K != 0)
    {
        cout << "The string is not divisible by " << K << " without a trace" << endl;
        return false;
    }

    for (int i = 1; i < s.length() / K; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            if (s[i * K + j] != s[j])
            {
                cout << "The string is not a multiple of a number " << K << endl;
                return false;
            }
        }
    }
    cout << "The string is a multiple of a number " << K << endl;
    return true;
}

int main()
{
    cout << "Enter you string" << endl;
    string S;
    cin >> S;

    cout << "Enter you number" << endl;
    int K;
    cin >> K;

    IsKPeriodic(S, K);

    return 0;
}