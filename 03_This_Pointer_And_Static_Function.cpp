#include <iostream>  
using namespace std;

class clsEmployee {
public:
    int ID;     
    string Name; 
    float Salary;

    clsEmployee(int ID, string Name, float Salary) {
       this->ID = ID;
       this->Name = Name;
       this->Salary = Salary;
    }

    // دالة ساكنة عمياء عن الـ this
    static void Func1(clsEmployee Employee) {
        Employee.Print();
    }

    // دالة عادية ممتلكة للـ this تقوم بحزم الكائن وتمريره يدوياً
    void Func2() {
        Func1(*this); // *this تعني الكائن الحالي بكامل بياناته
    }

    void Print() {
        cout << ID << "  " << Name << "  " << Salary << endl;
    }
};

int main() {
    clsEmployee Employee1(101, "Ali", 5000); 
    Employee1.Func2(); 
    return 0;
}
