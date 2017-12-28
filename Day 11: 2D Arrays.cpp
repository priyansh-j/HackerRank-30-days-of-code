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

using namespace std;

int main()
{
	int arr[6][6];
	int a[16];
	int m=0;
	int max=-63;
	for(int i=0;i<6;i++) //row 
	{
		for(int j=0;j<6;j++) //column
		  cin>>arr[i][j];
	}
	for(int i=0;i<4;i++) //row sum 
	{
		for(int j=0;j<4;j++,m++) //column sum
		{
			a[m]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
			if(a[m]>max)
				max=a[m];	
		}
	}
	cout<<max<<endl;
	return 0;
}
