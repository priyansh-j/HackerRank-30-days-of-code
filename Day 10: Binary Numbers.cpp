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
    int i=0;
    long b[50]; 
    long a[50];
    cin >> n;
    long arr[50];
    while(n>0)
    {
    	a[i]=n%2;
    	i++;
    	n=n/2;
	  }
	  int counter=0;
	  int x=0;
	  b[x]=0;
	  for(int j=0;j<=i-1;j++)
	  {
		  if(a[j]==1)
		  {
			  counter=counter+1;
			  b[x]=counter;
		  }
		  else if(a[j]==0 && b[x]!=0)
		  {
			  counter=0;
			  x++;
		  }
	  }
	  for(int h=1;b[h]!='\0' && b[h]<=21;h++)
    {
       if(b[0]<b[h])
        b[0]=b[h];
    }
    cout<<b[0]<<endl;
    return 0;
}
