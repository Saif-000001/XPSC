#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << area << "\n";
    return 0;
}