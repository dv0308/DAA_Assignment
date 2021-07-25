//
// Created by Divyansh Verma on 19/07/21.
//

#include<iostream>
#include<math.h>
#include <vector>
typedef  long long LL;
using namespace std;
#define CHAR 256

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)
        cin>>i;
    int index;
    cin>>index;
    int count = 0;
    for(auto i:v){
        count++;
        if(i == index){
            cout<<"PRESENT"<<" "<<count;
            return ;
        }
    }
    cout<<"NOT PRESENT";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--){
        solve();
        cout<<"\n";
    }


}

