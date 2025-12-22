#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    string x;
    cout << "press y to push elements and n to pop :" << endl;
    cin >> x;
    while (true)
    {
        if (x == "y")
        {
            int a;
            cout << "Enter the element you want to push :" << endl;
            cin >> a;
            st.push(a);
            cout << "press y to push elements and n to pop :" << endl;
            cin >> x;

            if (st.size() == 5)
            {
                cout << "Full." << endl;
                break;
            }
        }
        else if (x == "n")
        {
            cout << st.top()<<endl;;
            st.pop();
            cout << "press y to push elements and n to pop :" << endl;
            cin >> x;
            if (st.size() == 0)
            {
                cout << "empty" << endl;
                break;
            }
        }
    }
}
