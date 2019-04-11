#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Por favor ingere dos enteros\n";
    cin >> a >> b;
    if(a < b) {
        cout << "max(" << a << ", " << b << ") es " << b << endl;
    }else{
        cout << "max(" << a << ", " << b << ") es " << a << endl;
    }
    return 0;
}
