#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> no_gustan;
    no_gustan.push_back("SHIT");
    no_gustan.push_back("shit");

    cout << "Ingresa una palabra: ";
    string palabra;
    cin >> palabra;
    bool found = false;
    for(int i = 0; i < no_gustan.size(); i++) {
        if(no_gustan[i] == palabra) {
            found = true;
            break;
        }
    }
    if(!found) {
        cout << palabra;
    }else{
        cout << "Piii";
    }
    return 0;
}
