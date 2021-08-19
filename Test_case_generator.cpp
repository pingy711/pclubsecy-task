#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main(){
    
    srand(time(0));
    int len,b;
    std::vector<int> beads,bids;
    
    for(int i=0;i<50;++i){      //makes 50 test cases, if you want only one test case change 50 to 1
        
        cout<<"Test case #"<<i<<"\n";
        
        if(i<10){
            len=rand()%10;
            len++;
            if(len==1)  len+=3;
        }
        else{
            len=rand()%1000;
            if(len<10)  len+=20;
        }
        
        beads.resize(len);
        
        for(int j=0;j<len;++j){
            beads[j]=rand()%100000;
        }
        
        b=rand()%len*3;
        b++;
        bids.resize(b);
        
        for(int j=0;j<b;++j){
            bids[j]=rand()%100000;
        }
        cout<<len<<"\n";
        for(int j=0;j<len;++j)  cout<<beads[j]<<" ";
        cout<<"\n"<<b<<"\n";
        for(int j=0;j<b;++j)    cout<<bids[j]<<"\n";
        
        cout<<"\n\n";
    }
    
    return 0;
}
