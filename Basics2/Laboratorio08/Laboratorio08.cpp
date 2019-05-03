#include <iostream>
#include <vector>
using namespace std;

int main() {
  try {
    vector<int> v;
    for (int x; cin >> x; )
      v.push_back(x);
    for (int i = 0; i <= v.size(); ++i)
      cout << "v[" << i << "] ==" << v[i] << endl;
  }catch(out_of_range) {
    cerr << "¡Oops! Eror de rango" << endl;
    return 1;
  }//Error: Catch sin valor
  /*catch() {
    cerr << "Error: algo salio mal" << endl;
    return 2;
  }*/
  return 0;
}
