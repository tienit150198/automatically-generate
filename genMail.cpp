#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

string str1 = "vietdo781";
int _count = 0;
void print(string str, ll a[], ll n){
    string s = "";

    for(ll i = 0 ; i < n -1 ; i++){
    //    cout << a[i];
        s += str[i];
        if(a[i+1] == 1){
            s += '.';
            continue;
        }
        if(str1[i] == '.')
            s += '.';
    }
  //  cout << a[n-1] << endl;
    s += str[n-1];
    cout << s + "@gmail.com" << endl;
}
void gen(){
    ll a[20], n;
    string str = "";
    for(ll i = 0 ; i < str1.size() ; i++)
        if(str1[i] != '.')
            str += str1[i];

    n = str.size();
    for(ll i = 0 ; i < n ; i++)
        a[i] = 0;

    ll i = n - 1;
    while(true){
        print(str,a,n);
        i = n - 1;

        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            break;
        a[i]++;
        for(ll j = i + 1 ; j < n ; j++)
            a[j] = 0;
        _count++;
        if(_count > 1000000)
            break;
    }

}
int main() {
    fast
    freopen("mail.out", "w", stdout);
    gen();

    return 0;
}
