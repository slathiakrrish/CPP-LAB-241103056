#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements:"<<'\n';
    cin >> n;
    vector<int> array(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    int value, position;
    cout<<"Enter value to insert:"<<'\n';
    cin >> value;
    cout<<"Position: "<<'\n';
    cin >> position;
    
    array.insert(array.begin()+ position, value);
    for(int print : array)
    cout<<print<<" ";

}