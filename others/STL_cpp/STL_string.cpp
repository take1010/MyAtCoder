#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s1, s2;

    s1 = "abc";
    s2 = "defg";

    // s.size(): sの長さを返す関数
    cout << s1.size() << endl;
    // > 3
    
    // '+'で文字列の結合
    cout << s1+s2 << endl;
    // > abcdefg
    string s3 = s1;
    s3 += "defg"; 
    cout << s3 << endl;
    // > abcdefg

    // string型はchar型配列と同じような操作が出来る
    cout << s1[1] << endl;
    // > b
    string s4 = s1;
    s4[1] = 'B';
    cout << s4 << endl;
    // aBc

    // s.substr(): 部分文字列を返す関数
    // s.substr(l): l文字目以降の部分文字列
    string s5 = "ABCDEFG";
    cout << s5.substr(3) << endl;
    // > DEFG 
    // s.substr(l、n): l文字目からn文字(l+n-1文字目)の部分文字列
    cout << s5.substr(2, 3) << endl;
    // > CDE

	return 0;
}
