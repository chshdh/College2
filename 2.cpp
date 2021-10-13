#include <iostream>

using namespace std;

const int MaxBinarySize = 100; //根据问题修改该值

class SeqBinaryTree {

    int data[MaxBinarySize]; //存储字符串

    int size;     //二叉树结点个数


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
    };  //构造函数

    void CreateBianryTree() {
        data[0] = size;
        for (int i = 1; i < size; i++)
            cin >> data[i];
    };      //创建二叉树

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

    };     //前序遍历，递归算法

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


    };     //中序遍历，非递归算法

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


    };     //后序遍历，递归算法

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