#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) {
  Queue q;
   int i,x;
   

 for(i=1;i<argc;i++){
      if(strcmp(argv[i],"x")==0)
      {
          NodePtr t = q.dequeue();

          if(t == NULL)
          {
              cout << "No Food" << endl;
          }
          else
          {
              cout << t->get_order() << endl;
              cout << "Removing " << t->get_order() << endl;

              int price = t->get_qty() * 20;
              cout << "You have to pay " << price << endl;

              delete t;
          }
      }
      else 
      {
       string order = argv[i];
  int qty = atoi(argv[i+1]);
  q.enqueue(order, qty);
  i++;
      }
 }
  return 0;
}
