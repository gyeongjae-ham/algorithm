#include <bits/stdc++.h>

using namespace std;
string s;
char f[17], b[17];

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";

    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    vector<string> result = split(s, "-");
    strcpy(f, result[0].c_str());
    strcpy(b, result[1].c_str());

    if (b[0] == '1') {
        cout << 2019 - (1900 + ((f[0] - '0') * 10) + (f[1] - '0')) + 1 << " "
             << "M"
             << "\n";
    } else if (b[0] == '2') {
        cout << 2019 - (1900 + ((f[0] - '0') * 10) + (f[1] - '0')) + 1 << " "
             << "W"
             << "\n";
    } else if (b[0] == '3') {
        cout << 2019 - (2000 + ((f[0] - '0') * 10) + (f[1] - '0')) + 1 << " "
             << "M"
             << "\n";
    } else if (b[0] == '4') {
        cout << 2019 - (2000 + ((f[0] - '0') * 10) + (f[1] - '0')) + 1 << " "
             << "W"
             << "\n";
    }
}