#ifndef queue_h
#define queue_h
#include "Node.h"
#include <iostream>
using namespace std;

class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(string, int);
    NodePtr dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(string order, int qty){
  NodePtr new_node= new NODE(order, qty);
  if(new_node!=NULL)
  { 
   if(size > 0)
  {
      tailPtr->set_next(new_node);   
  }
  else
  {
      headPtr = new_node;            
  }
  tailPtr = new_node;
  size++;
 }
 else
 {
    cout <<"Out of memory"<<endl;
 }
}

NodePtr Queue::dequeue(){
  if(size>0)
  {
    NodePtr t = headPtr;
    headPtr = headPtr->get_next();
    size--;
    if(size==0) tailPtr = NULL;
    return t;
  }
  return NULL;
}


Queue::Queue()
{
    headPtr = NULL;
    tailPtr = NULL;
    size = 0;
}

Queue::~Queue(){
      cout<<"Dequeue all"<<endl;
      while(size > 0)
      {
          NodePtr t = dequeue();
          delete t;
      }
}


#endif
