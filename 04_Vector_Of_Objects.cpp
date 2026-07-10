#include<iostream>
#include<vector>
using namespace std;

class clsA {
public:
    int x;
    clsA(int value) {
        x = value;
    }
    
    void Print() {
        cout << "The value of x = " << x << endl;
    }
};

int main() {
    vector<clsA> v1;
    short NumberOfObjects = 5;

    // حقن الكائنات مبنية ديناميكياً ومباشرة داخل الفيكتور
    for (int i = 0; i < NumberOfObjects; i++) {
        v1.push_back(clsA(i)); 
    }

    // طباعة محتويات مصفوفة الكائنات الديناميكية
    cout << "--- Vector Objects Content ---\n";
    for (int i = 0; i < NumberOfObjects; i++) {
        v1[i].Print();
    }

    system("pause>0");
    return 0;
}
