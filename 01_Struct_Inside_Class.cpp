#include <iostream>
using namespace std;

class clsInfo {
private:
    struct stInfo {
        string _FirstName;
        string _LastName;
        string _AddressLine1;
        string _AddressLine2;
        string _city;
    };
    stInfo stPerson; // النسخة محمية بالكامل في الـ private

public:
    clsInfo() {
        stPerson._FirstName = "Abdulrahman";
        stPerson._LastName = "Alhayek";
        stPerson._AddressLine1 = "Hama";
        stPerson._AddressLine2 = "tattan";
        stPerson._city = "Syria";
    }

    void PrintInfo() {
        cout << "\n--- Address Info ---\n";
        cout << "Name    : " << stPerson._FirstName << " " << stPerson._LastName << endl;
        cout << "Street  : " << stPerson._AddressLine1 << ", " << stPerson._AddressLine2 << endl;
        cout << "City    : " << stPerson._city << endl;
    }
};

int main() {
    clsInfo Info1;
    Info1.PrintInfo(); // الوصول يتم عبر الدالة العامة فقط بأمان

    system("pause>0");
    return 0;
}
