#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    double mealcost;
    int tipp;
    int taxp;
    double final;
    cin>>mealcost;
    cin>>tipp;
    cin>>taxp;
    double tip=(double)tipp/100*mealcost;
    double tax=(double)taxp/100*mealcost;
    final=mealcost+tip+tax;
    double x=final-(int)final;
    if(x>0.5)
      final=final+1;
    else
	    final=final;
    cout<<"The total meal cost is ";
    cout<<(int)final;
    cout<<" dollars.";
    return 0;
}
