#include<bits/stdc++.h>
using namespace std;
int No_of_occ(string A,string B){
    int ans=0;
    for(int i=0;i<=A.length()-B.length();i++){
        if(A[i]==B[0]){
            bool check=true;
            for(int j=1;j<B.length();j++){
                if(A[i+j]!=B[j]){
                    check=false;
                    break;
                }
            }
            if(check==true) {
            ans++; 
            // cout<<i;
            
            }
        }
    }
    return ans;
}
int main()
{
    string A="PratikPratPraPraAPra";
    string B="Pra";
    cout<<No_of_occ(A,B);
    return 0;
}