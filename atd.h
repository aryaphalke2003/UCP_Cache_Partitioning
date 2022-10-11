
#include <cache.h>
class blockatd{
public:
int lru,valid,tag;

blockatd(){
lru=0;
valid=0;
tag=0;
}

};



class ATD{

public:
 int nsets=64;
 blockatd arr[64][16];
 int umonglobalcounter[16]={0};

 int getumon(int n){
        long long sum=0;
        for(int i=0;i<n;i++){
               sum+=umonglobalcounter[i];
        }
   return sum;
 }
 
  // queues
  

};
