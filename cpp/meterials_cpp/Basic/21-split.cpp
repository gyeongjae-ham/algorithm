#include <bits/stdc++.h>

// * C++에서는 불행하게도 문자열을 기반으로 split 함수를 지원하지 않는다 따라서 다음과 같이 구현해야
// 한다

using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) !=
           string::npos) {            // pos에 delimiter의 인덱스 값이 들어간다
        token = input.substr(0, pos); // token에 문자열 처음부터 인덱스값 전까지 담고
        ret.push_back(token);         // ret에 해당 값을 담아준다
        input.erase(0, pos + delimiter.length()); // 원래 문자열에서 token과 delimiter(예를 들면
                                                  // 빈칸)까지 모두 삭제해준다
    }
    ret.push_back(input);
    return ret;
}

vector<string> split_debug(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) {
        long long pos = input.find(delimiter);
        cout << "POS : " << pos << '\n'; // 15 12 15 15 if(pos == string::npos)break;
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
    string s = "안녕하세요 루카는 지금 알린이중입니다 열심히해서 강해질겁니다!!";
    string d = " ";
    vector<string> a = split(s, d);
    string s2 = "aaaaaa bbbbbb cccc ee ddddddd!";
    vector<string> c = split_debug(s2, d);
    // 띄어쓰기를 찾아서 해당 첫번째 인덱스를 반환한다
    // 문자열이 erase되기 때문에 aaaa, bb 이런식으로 된다
    for (string b : a) {
        cout << b << "\n";
    }
    return 0;
}