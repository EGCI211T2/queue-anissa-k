#ifndef node_h
#define node_h

#include <iostream>
#include <string>
using namespace std;

class NODE{
     string order;
     int qty;
    NODE *nextPtr;
public:
    NODE(string o, int q);
    ~NODE();

    void set_next(NODE*);
    NODE* get_next();

    string get_order();
    int get_qty();
};

typedef NODE* NodePtr;

NODE::NODE(string o, int q)
{
    order = o;
    qty = q;
    nextPtr = NULL;
}

string NODE::get_order()
{
    return order;
}

int NODE::get_qty()
{
    return qty;
}

NODE* NODE::get_next()
{
    return nextPtr;
} 

void NODE::set_next(NODE *t)
{
     nextPtr=t;
}

NODE::~NODE()
{
     cout<< " Deleting " << order <<endl;
}


#endif
