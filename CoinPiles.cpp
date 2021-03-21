#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==0 || b== 0){
            if(a == 0 && b == 0){
                cout<<"YES"<<"\n";
            } else{
                cout<<"NO"<<"\n";
            }
        }
        else if(a==b){
            long long i = 1;
            bool flag = true;
            while(a>0 && b>0){
                if(i&1){
                    a=a-2;
                    b=b-1;
                    //cout<<"in i = odd a = "<<a<<"  b = "<<b<<"\n";
                }else{
                    b=b-2;
                    a=a-1;
                    // cout<<"in i = even a = "<<a<<"  b = "<<b<<"\n";
                }
                i++;
                if((a<=0 || b<=0) && !( a<=0&& b<=0 )){
                    cout<<"NO"<<"\n";
                    flag = false;
                    break;
                }
            }
            if(flag)
            cout<<"YES"<<"\n";

        }
        else if(a>b){
            
            if(a&1){
                a=a/2;
                b = b-a;
                if(b>0){
                    b = b-1;
                }
                //cout<<"b in (a>b) : "<<b<<"\n";
                if(b==0){
                    cout<<"YES"<<"\n";
                } else{
                    cout<<"NO"<<"\n";
                }
            } 
            else{
                a=a/2;
                b=b-a;
                if(b==0){
                    cout<<"YES"<<"\n";
                } else{
                    cout<<"NO"<<"\n";
                }

            }
        }
        else{
            if(b&1){
                b=b/2;
                a = a-b;
                if(a>0){
                    a = a-1;
                }
                if(a==0){
                    cout<<"YES"<<"\n";
                } else{
                    cout<<"NO"<<"\n";
                }
            } 
            else{
                b=b/2;
                a=a-b;
                if(a==0){
                    cout<<"YES"<<"\n";
                } else{
                    cout<<"NO"<<"\n";
                }

            }
            
        }

    }
}