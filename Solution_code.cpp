#include<bits/stdc++.h>
using namespace std;

int len,b;
std::vector<int> beads,bids;

int main(){
    
    cin>>len;
    beads.resize(len);
    for(int i=0;i<len;++i){
        cin>>beads[i];
    }
    
    cin>>b;
    bids.resize(b);
    for(int i=0;i<b;++i){
        cin>>bids[i];
    }
    
    int front=0,back=0;
    bool possible=false;
    int sum=0;
    
    for(int bid_number=0;bid_number<b;++bid_number){
        
        while((back!=len)&&(!possible)&&(back<=front)){
            
            if(sum+beads[front]==bids[bid_number]){
                possible=true;
            }
            else if(sum+beads[front]<bids[bid_number]){
                sum+=beads[front];
                front++;
            }
            else{
                if(sum==0){
                    break;
                }
                sum-=beads[back];
                back++;
            }
            
        }
        
        if(possible)    cout<<"1";
        else    cout<<"0";
        front=0;
        back=0;
        sum=0;
        possible=false;
        cout<<"\n";
    }
    
    return 0;
}
