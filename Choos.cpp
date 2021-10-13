//
// Created by Cs060 on 2021/10/5.
//

#include <iostream>
using namespace  std;
int main(){
    int n;
    cin>>n;
    char a;
    while(n!=-1){
        while(cin>>a) {
            if (a > 64 && a < 123) {
                a = a + n;
                cout << a;

                cout << endl;
                cin >> n;
            }
        }





















    }



}