#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    int i;
    int result;
    cin >> n;
    for(i=1;i<=10;i++)
    {
        result=n*i;
        cout<<n;
        cout<<" x ";
        cout<<i;
        cout<<" = ";
        cout<<result;
        cout<<"\n";
    }
    return 0;
}
