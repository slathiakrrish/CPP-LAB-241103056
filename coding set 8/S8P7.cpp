#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file1;
    ofstream file2;
    file1.open("xyz.txt");
    file2.open("zzz.txt");
    char ch;
    while(file1.get(ch)){
        file2.put(ch);
    }
    cout<<"Copying Completed!";
    file1.close();
    file2.close();
}
