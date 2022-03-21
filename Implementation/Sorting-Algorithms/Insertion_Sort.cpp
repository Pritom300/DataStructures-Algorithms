#include<bits/stdc++.h>

using namespace std;
vector < string > v2;
void sort(vector < string > & ch) {
    int i, j;
    int charLength = ch.size();
    for (i = 0; i <= charLength; i++) {
        for (j = 0; j < (charLength - 1); j++) {
            if (ch[j + 1] < ch[j]) {
                string temp = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = temp;
            }
        }
    }
}
int main() {
    int charSize;
    cout << "Enter the Size:-" << endl;
    cin >> charSize;
    cout << "Enter the string:-" << endl;
    string c;
    for (int i = 0; i <= charSize; i++) {
        getline(cin, c);
        v2.push_back(c);
    }
    sort(v2);
    cout << endl << "The sorted string is : " << endl;
    for (int i = 0; i <= charSize; i++) {
        cout << v2[i] << " ";
    }
}
