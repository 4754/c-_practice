#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 

int t=1; 
//cin>>t; 
while(t--) 
{ 
	solve(); 
	cout<<"\n"; 
} 

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
    string s;
    cin>>s;
    int l = s.size();
    //cout<<"len "<<l<<"\n";
    int h = -1;
    int e = -1;
    int l1 = -1;
    int l2 = -1;
    int o =-1;

    for(int i = 0 ; i < l ; i++){
       // cout<<"in for loop i "<<i<<"\n";
        if(s[i] == 'h' && h<0 ) {
            h = i;
        } 
        else if( s[i] == 'e' && e < 0){
            e = i;
        }
        else if(s[i] == 'l' && (l1 < 0 || l2 < 0)){
            if(l1<0) l1 = i;
            else l2 = i;
        }
        else if(s[i] == 'o' && o < 0){
            o = i;
        }
    }

    bool flag = true;
    // cout<<"h : "<<h<<"\n";
    // cout<<"e : "<<e<<"\n";
    // cout<<"l1 : "<<l1<<"\n";
    // cout<<"l2 : "<<l2<<"\n";
    // cout<<"o : "<<o<<"\n";
    if(h > e || h>l1 || h>l2 || h>o) flag = false;
    if( e>l1 || e>l2 || e>o) flag = false;
    if(l1<0 || l2 < 0 || l1 > o || l2 > o) flag = false;
    if(o<0) flag = false;
    if(flag) cout<<"YES";
    else cout<<"NO";
} 
