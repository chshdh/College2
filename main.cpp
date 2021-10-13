#include <iostream>

using namespace std;
struct List {
    int data;
    List *next = nullptr;
};

int main() {
    List *head = (List *) malloc(sizeof(List));
    List *a = (List *) malloc(sizeof(List));
    head->data = 0;
    head->next = a;
    a->data = 3;
    List *b = (List *) m b alloc(sizeof(List));
    a->next = b;
    b->data = 3;
    List *c = (List *) malloc(sizeof(List));
    b->next = c;
    c->data = 3;
    List *d = (List *) malloc(sizeof(List));
    c->next = d;
    d->data = 7;
    d->next = nullptr;
    // List *pre, *cur, *nex;
    // pre = nullptr;
    // cur = a;
    // while (cur != nullptr) {
    //     nex = cur->next;
    //     cur->next = pre;
    //     pre = cur;
    //     cur = nex;
    // }
    List *con;
    con = head;
    while (con->next != nullptr) {
        if (con->data == con->next->data) {
            con->next = con->next->next;
        } else
            con = con->next;


    }
    List *p;
    p = head;
    while (p != nullptr) {
        cout << p->data << endl;
        p = p->next;
    }
}