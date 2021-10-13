//
// Created by Cs060 on 2021/10/5.
//
#include <iostream>

using namespace std;
const int MaxListSize = 50; //根据问题修改该值

class SeqCharList {

    char data[MaxListSize]; //存储字符串

    int size;            //元素个数

public:

    SeqCharList() {

        size = 0;
    }

    void Change(string a) {
        size = a.length();
        for (int i = 0; i < size; i++)
            data[i] = a[i];


    };  //构造函数

    void Clear() {
        for (int i = 0; i < MaxListSize; i++) {
            data[i] = '\0';
        }
        size = 0;
    };        //清空表

    bool IsEmpty() {
        for (int i = 0; i < MaxListSize; i++) {
           if( data[i] = '\0'){
               return true;
           }
        else
               return false;
        };

        if (size == 0) {
            return true;
        } else return false;
    };     //判断如果为空表，返回true，否则返回false

    char Get(int k) {
        return data[k];
    };    //返回第k个字符

    int Locate(char e) {
        for (int i = 0; i <=MaxListSize; i++) {
            if (data[i] == e)
                return i;
        }


    };      //返回第一个与元素e匹配的元素位序

    char Delete(int i) {
        char p = data[i];
         for (int j = i; j < MaxListSize - 1; j++) {
            data[i] = data[i + 1];
        }
        size--;
        data[MaxListSize - 1] = '\0';
        return p;
    };        //删除第i个元素，并返回所删除元素值

    void Print() {
        if (size == 0)
            cout << endl;
        else {
            for (int i = 0; i < size; i++) {
                cout << data[i];
            }
            cout << endl;
        }

    };    //输出字符串

    void Encryption(int n) {
        int size2 = 0;
        char data2[MaxListSize];
        for (int i = 0; i < size; i++) {
            if ((data[i] >= 65 && data[i] <= 90) || (data[i] >= 97 && data[i] <= 122)) {
                data2[size2] = data[i] + n;
                size2++;
            }
        }
        size = size2;
        for (int i = 0; i < size; i++)
            data[i] = data2[i];
    }


};    //字符串加密

;

int main() {
    SeqCharList Seq;
    int n;
    string a;
    cin >> n;
    while (n != -1) {
        cin >> a;
        Seq.Change(a);
        Seq.Encryption(n);
        Seq.Print();
        cin>>n;
    }


}
