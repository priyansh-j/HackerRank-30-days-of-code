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

int main()
{
    int n;
    int n1;
    int arr_i;
    cin >> n;
    vector<int> arr(n);
    for(arr_i = 0;arr_i < n;arr_i++)
      cin >> arr[arr_i];
    n1=arr_i-1;
    for(arr_i=n1;arr_i>=0;arr_i--)
      cout<<arr[arr_i]<<" ";
    return 0;
}
