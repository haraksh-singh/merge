#include <iostream>
using namespace std;


class Employee {
  public:
    int year;
    int salary;
    void input(){
        cin >> year;
        cin >> salary;
    }
};

class Increment: public Employee {
public:
   int increase(int salary, int year) {
  if (year<=2016) {
      int incre;
      incre=salary*0.15;
     return salary=salary+incre;
  }
   if (year>2016&&year<=2018) {
       int incre;
           incre=salary*0.1;
      return salary=salary+incre;
   }
    if (year>=2019) {
        int incre;
        incre=salary*0.05;
        return salary=salary+incre;
    }
    }
    };

int main() {
int bonus;
    Increment obj1;
    obj1.input();
    if (obj1.salary>0) {
    bonus=obj1.increase(obj1.salary,obj1.year);
    cout << obj1.year << "\n" << obj1.salary << "\n" << obj1.year << "\n" << bonus;
    }
    else if (obj1.salary<=0) {
    cout << "Invalid Salary";
    }

    return 0;
}
