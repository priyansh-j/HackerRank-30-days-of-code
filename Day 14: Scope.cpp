#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  	// Add your code here
    Difference(vector<int> x)
    {
        this->elements=x;
    }
    int computeDifference()
    {
        int max=0;
        int min=elements[0];
        for(int i=0;i<elements.size();i++)
            if(max<elements[i])
                max=elements[i];
        for(int j=0;j<elements.size();j++)
            if(min>=elements[j])
                min=elements[j];
        maximumDifference=max-min;
        return maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
