#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cout<<"Enter number of elements:"<<'\n';
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int x;
    cout<<"enter integer:"<<'\n';
    cin >> x;

  v.erase(remove(v.begin(), v.end(), x), v.end());
        
    
    for(int num : v)
    {
        cout<<num<<" ";
    }
}