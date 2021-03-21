#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long l = s.size();
    long long frq[27] ={0};
//    cout<<"length : "<<l<<"\n";
    for(long long i=0;i<l;i++){
        if(s[i] =='A') frq[1]++;
        else if(s[i]=='B') frq[2]++;
        else if(s[i]=='C') frq[3]++;
        else if(s[i]=='D') frq[4]++;
        else if(s[i]=='E') frq[5]++;
        else if(s[i]=='F') frq[6]++;
        else if(s[i]=='G') frq[7]++;
        else if(s[i]=='H') frq[8]++;
        else if(s[i]=='I') frq[9]++;
        else if(s[i]=='J') frq[10]++;
        else if(s[i]=='K') frq[11]++;
        else if(s[i]=='L') frq[12]++;
        else if(s[i]=='M') frq[13]++;
        else if(s[i]=='N') frq[14]++;
        else if(s[i]=='O') frq[15]++;
        else if(s[i]=='P') frq[16]++;
        else if(s[i]=='Q') frq[17]++;
        else if(s[i]=='R') frq[18]++;
        else if(s[i]=='S') frq[19]++;
        else if(s[i]=='T') frq[20]++;
        else if(s[i]=='U') frq[21]++;
        else if(s[i]=='V') frq[22]++;
        else if(s[i]=='W') frq[23]++;
        else if(s[i]=='X') frq[24]++;
        else if(s[i]=='Y') frq[25]++;
        else if(s[i]=='Z') frq[26]++;
    }
    long long nodd = 0;
    for(long long i=0;i<=26;i++){
        //cout<<"i : "<<i<<" value"<<frq[i]<<"\n";
        if( frq[i] & 1) {
            nodd++;
           // cout<<"nodd : "<<nodd<<"\n";
        }
    }
    //cout<<"nodd : "<<nodd<<"\n";
    if(l&1){
        if(nodd == 1){
            // pallindrome
            long long j = 0;
            for(long long i = 0 ; i <= 26 ;i++){
                if(frq[i] == 1){
                   // cout<<"odd for in odd length"<<"\n";
                   long long mid = 0 + (l-1)/2;
                    s[mid] = (char)(65+i-1);
                } 
                else if(frq[i] &1){
                    while(frq[i] > 1){
                        s[j] = (char)(65+i-1);
                        s[l-j-1] = (char)(65+i-1);
                        j++;
                        frq[i]--;
                        frq[i]--;
                    }
                    s[l/2] = (char)(65+i-1);
                }
                else{
                    while(frq[i] > 1){
                        s[j] = (char)(65+i-1);
                        s[l-j-1] = (char)(65+i-1);
                        j++;
                        frq[i]--;
                        frq[i]--;
                    }
                }
            }
            cout<<s;
        } else{
            cout<<"NO SOLUTION";
        }
    } else{
        if(nodd != 0) cout<<"NO SOLUTION";
        else{
            //here function make pallindrome
            int j=0;
            for(int i = 1 ; i<= 26 ;i++){
                while( frq[i] > 0){
                    s[j] = (char)(65+i-1);
                    s[l-j-1] = (char)(65+i-1);
                    j++;
                    frq[i]--;
                    frq[i]--;
                }
            }
            cout<<s;
        }
    }
}