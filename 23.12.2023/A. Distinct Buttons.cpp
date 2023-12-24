#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int x_pos=0, x_neg=0;
        int y_pos=0, y_neg=0;
        
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            
            if(x<0){
                x_neg++;
            }
            else if(x>0){
                x_pos++;
            }
            
            if(y<0){
                y_neg++;
            }
            else if(y>0){
                y_pos++;
            }
        }
        
        if(x_pos && x_neg && y_pos && y_neg){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}
