#include<iostream>
using namespace std;

class clsPerson {
    class clsAddress {
    public:
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;

        clsAddress(string addressLine1, string addressLine2, string city, string country) {
            AddressLine1 = addressLine1;
            AddressLine2 = addressLine2;
            City = city;
            Country = country;
        }

        void Print() {
            cout << "AddressLines: " << AddressLine1 << " | " << AddressLine2 << endl;
            cout << "Location    : " << City << ", " << Country << endl;
        }
    };

public:
    string FullName;
    clsAddress Address;  

    // الاستدعاء الديناميكي للكونستراكتر الداخلي بدون الوراثة
    clsPerson(string fullName, string addressLine1, string addressLine2, string city, string country)
        : Address(addressLine1, addressLine2, city, country) {
        FullName = fullName;
    }
};

int main() {
    clsPerson p1("Abdulrahman Alhayek", "Building 24", "Al-Tattan Street", "Hama", "Syria");
    cout << "Name: " << p1.FullName << endl;
    p1.Address.Print();

    cout << "\n-----------------------------\n";

    clsPerson p2("Mohammed Abu-Hadhoud", "Building 10", "Queen Rania Street", "Amman", "Jordan");
    cout << "Name: " << p2.FullName << endl;
    p2.Address.Print();

    system("pause>0");
    return 0;
}
