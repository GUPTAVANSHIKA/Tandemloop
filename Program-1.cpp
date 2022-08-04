#include <bits/stdc++.h>
using namespace std;

class Calculator {
    double A, B;
public:
    void get() {
        cin >> A;
        cin >> B;
    }
    double add() {
        return A + B;
    }
    double sub() {
        return A - B;
    }
    double mul() {
        return A * B;
    }
    double div() {
        if (B == 0) {
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};

int main() {
    int choice;
    Calculator cal; 
    cout << "Enter 1 to Add 2 Numbers"
        << "\nEnter 2 to Subtract 2 Numbers"
        << "\nEnter 3 to Multiply 2 Numbers"
        << "\nEnter 4 to Divide 2 Numbers"
        << "\nEnter 0 to Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cal.get();
            cout << "SUM: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "DIFF: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "MUL: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "DIV: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
