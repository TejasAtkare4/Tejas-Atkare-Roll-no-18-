 #include <iostream>
using namespace std;

class Complex { // 1. Renamed class to match constructor
public:
    int real, img;

    // Constructor
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // 2. Corrected operator overloading return type and logic
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, img + obj.img);
    }
}; // 3. Added missing semicolon

int main() {
    // 4. Added missing variable name 'C1'
    Complex C1(10, 5), C2(2, 4); 
    Complex C3 = C1 + C2;

    cout << C3.real << " + " << C3.img << endl;
    return 0;
}
