#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Ingresar 'q' para terminar
    vector<string> words;
    string temp;
    while (cin >> temp && temp != "q")
    {
        words.push_back(temp);
    }
    cout << "Numero de palabras: " << words.size() << endl;
    sort(words.begin(), words.end());
    for (int i = 0; i < words.size(); ++i)
    {
        if (i == 0 || words[i-1] != words[i])
        {
            cout << words[i] << endl;
        }
    }
    return 0;
}
