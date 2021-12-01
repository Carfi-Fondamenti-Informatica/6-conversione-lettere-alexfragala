#include "lib.h"
#include <iostream>
using namespace std;

int main() {
    char a=0;
    cin >> a;
    if(carattere(a) == false){
        cout << "errore" << endl;
    }else{
        int conv=(int) a;
        if (97 <= a){
            conv = toupper(a);
            cout << char(conv) << endl;
        } else if (65 <= conv <= 90){
            cout << char(tolower(a));
        }
    }
    return 0;
}
