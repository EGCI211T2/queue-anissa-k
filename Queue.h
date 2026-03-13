#ifndef queue_h
#define queue_h
#include "Node.h"
#include <iostream>
using namespace std;

class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
  if(new_node!=NULL)
  { 
   if(size>0)
   {
   tailPtr->set_next(new_node);
   }
   else
   {
      headPtr->new_node; 
   }
    tailPtr->new_node;
   size++;
 }
 else
 {
    cout <<"Out of memory"<<endl;
 }
}

int Queue::dequeue(){
  if(size>0)
  {
    NodePtr t = headPtr;
    int value = t->get_value();
    headPtr = headPtr->get_next();
    size--;
    if(size==0) tailPtr = NULL;
    cout<<"dequeing"<< value << endl;
    delete t;
    return value;
  }
  cout<<"Empty queue"<<endl;
  return -1;
}


Queue::Queue(){
    headPtr=NULL;
    tailPtr=NULL;
    size=0;
}

Queue::~Queue(){
      cout<<"Dequeue all"<<endl;
      while(size > 0)
      {
        dequeue();
      }
}


#endif
