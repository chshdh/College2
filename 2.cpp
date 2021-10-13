#include <iostream>

using namespace std;

const int MaxBinarySize = 100; //���������޸ĸ�ֵ

class SeqBinaryTree {

    int data[MaxBinarySize]; //�洢�ַ���

    int size;     //������������


public:

    int Deaft(int n){
        if(n<=5){
            return  3;
        }
        if(n>5&&n<=14){
            return  7;
        }
        if(n>14&&n<=31){
            return  15;
        }
        if(n>31&&n<=63){
            return 31;
        }
        if(n>63){
            return  63;
        }
    }



    SeqBinaryTree(int a) {

        size = a;
    };  //���캯��

    void CreateBianryTree() {
        data[0] = size;
        for (int i = 1; i < size; i++)
            cin >> data[i];
    };      //����������

    void PreOrder(int root=1) {
        int cnt = root * 2;
        if (root >= size)
            return;
        if (root == 1)
            cout << data[1];
        else
            cout << ' ' << data[root];
        if (cnt < size)
            PreOrder(cnt);
        if (cnt + 1 < size)
            PreOrder(cnt + 1);

    };     //ǰ��������ݹ��㷨

    void InOrder(int root = 1) {
        int cnt = root * 2;
        if (!root) return;
        if (cnt < size)
        InOrder(cnt);
        if (root == (Deaft(size-1)))
            cout << data[root] ;
        else
            cout << data[root] << ' ';

        if (cnt + 1 < size)
        InOrder(cnt + 1);


    };     //����������ǵݹ��㷨

    void PostOrder(int root=1) {
        int cnt = root * 2;
        if (root >= size) return;
        if (cnt < size)
            PostOrder(cnt);
        if (cnt + 1 < size)
            PostOrder(cnt + 1);
        if (root == 1)
            cout << data[root] << endl;
        else
            cout << data[root] << ' ';


    };     //����������ݹ��㷨

};//SeqBinaryTree
int main(){
    int n;
    cin >> n;
    while (n!=0)
    {
        SeqBinaryTree a(n + 1);
        a.CreateBianryTree();
        a.PreOrder();
        cout << endl;
        a.InOrder();
        cout<<endl;
        a.PostOrder();
        cin>>n;
    }


}