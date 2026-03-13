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
          q.dequeue();
      }
      else 
      {
       q.enqueue(atoi(argv[i]));
      }
 }
  return 0;
}
