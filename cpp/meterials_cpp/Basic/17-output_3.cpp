#include <bits/stdc++.h>

using namespace std;
int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.223123;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    printf("아이엠어 아이언맨 : %d\n", a);
    printf("아이엠어 아이언맨 : %c\n", s);
    printf("아이엠어 아이언맨 : %s\n",
           str.c_str()); // c_str 문자열을 const char 타입으로 변환해주는 메서드
    printf("아이엠어 아이언맨 : %lf\n", b);
}

/*
아이엠어 아이언맨 : 1
아이엠어 아이언맨 : a
아이엠어 아이언맨 : 어벤져스
아이엠어 아이언맨 : 1.223123
*/