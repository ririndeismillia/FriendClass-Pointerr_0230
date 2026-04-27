#include <iostream>
using namespace std;

class BelahKetupat; 

class LayangLayang {
private:
    double d1, d2; 
    double s1, s2; 

public:
    void input() {
        cout << "=== Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi 1: ";
        cin >> s1;
        cout << "Masukkan sisi 2: ";
        cin >> s2;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 2 * (s1 + s2);
    }

};