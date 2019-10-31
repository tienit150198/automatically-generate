#include <bits/stdc++.h>

using namespace std;
string numberphone[] = {"086","096","097","098","032","033","034","035","036","037","038","039","089","090","093",
                        "070","079","077","076","078","088","094","083","084","085","081","082","092","056","058"};
int numberOfPhone = 29;
int main()
{
    srand(time(NULL));
    string file = "numberphone.number";

    freopen("numberphone.number", "w", stdout);

    int t;
    cin >> t;
    int i = 0;
    while(t--){
        string text = numberphone[i++];
        if(i >= 30)
            i = 0;

        string gentext = "";
        for(int j = 0 ; j < 8 ; j++){
            int x = rand()%10;
            string xx = "";
            xx += (char)(x + 48);
            gentext += xx;
        }
        cout <<"10001"+text.substr(1,text.size())+ gentext << endl;
    }


    return 0;
}
