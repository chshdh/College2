//
// Created by Cs060 on 2021/10/5.
//
#include <iostream>

using namespace std;
const int MaxListSize = 50; //���������޸ĸ�ֵ

class SeqCharList {

    char data[MaxListSize]; //�洢�ַ���

    int size;            //Ԫ�ظ���

public:

    SeqCharList() {

        size = 0;
    }

    void Change(string a) {
        size = a.length();
        for (int i = 0; i < size; i++)
            data[i] = a[i];


    };  //���캯��

    void Clear() {
        for (int i = 0; i < MaxListSize; i++) {
            data[i] = '\0';
        }
        size = 0;
    };        //��ձ�

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
    };     //�ж����Ϊ�ձ�����true�����򷵻�false

    char Get(int k) {
        return data[k];
    };    //���ص�k���ַ�

    int Locate(char e) {
        for (int i = 0; i <=MaxListSize; i++) {
            if (data[i] == e)
                return i;
        }


    };      //���ص�һ����Ԫ��eƥ���Ԫ��λ��

    char Delete(int i) {
        char p = data[i];
         for (int j = i; j < MaxListSize - 1; j++) {
            data[i] = data[i + 1];
        }
        size--;
        data[MaxListSize - 1] = '\0';
        return p;
    };        //ɾ����i��Ԫ�أ���������ɾ��Ԫ��ֵ

    void Print() {
        if (size == 0)
            cout << endl;
        else {
            for (int i = 0; i < size; i++) {
                cout << data[i];
            }
            cout << endl;
        }

    };    //����ַ���

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


};    //�ַ�������

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
