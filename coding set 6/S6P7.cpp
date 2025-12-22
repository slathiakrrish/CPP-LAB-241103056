#include <iostream>
using namespace std;

class Teacher{
    public:
        string subject;

        Teacher(){
            cout<<"Teacher Contructor called "<<endl;
        }
};
class Research{
    public:
        string area_of_research;
    Research(){
        cout<<"Research Contructor called "<<endl;
    }
      
};

class TeachingAssistant: public Teacher, public Research{
    public:
    void displayData(){
        cout<<"Subject is :"<<subject<<endl;
        cout<<"Area of Research :"<<area_of_research<<endl;
        
    }


};
int main(){
   TeachingAssistant t1;
   t1.subject = "Maths";
   t1.area_of_research = "Archemedian Geometry";
   t1.displayData();

    


}
