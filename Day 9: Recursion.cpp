#include <bits/stdc++.h>

using namespace std;

int factorial(int n) 
{
    // Complete this function
    int x=1;
    for(int a=1;a<=n;a++)
      x=x*a;
    return x;
}

int main()
{
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
