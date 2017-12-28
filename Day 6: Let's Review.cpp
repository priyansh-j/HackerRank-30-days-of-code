#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT
    char S[10000];
    int i;
    int t;
    int j;
    string neweven;
    string newodd;
    cin>>t;
    for(j=1;j<=t;j++)
    {
	    cin>>S;
	    i=0;
      while(S[i]!='\0')
      {
        if(i%2==0)
          neweven=neweven+S[i];
        else if(i%2!=0)
          newodd=newodd+S[i];
        i++;
      }
      cout<<neweven<<" ";
      cout<<newodd<<endl;
      newodd=neweven="";
    }
    return 0;
}
