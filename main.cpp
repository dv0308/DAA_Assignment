//
// Created by Divyansh Verma on 19/07/21.
//

#include<iostream>
#include<math.h>
#include <vector>
typedef  long long LL;
using namespace std;
#define CHAR 256

int bSearch(vector<int> arr,int low,int high,int &count,int x){
    count++;
    if(low > high)
        return -1;
    int mid = (low + high)/2;
    if(arr[mid] == x)
        return mid;
    else if(arr[mid] > x)
        return bSearch(arr, low, mid - 1,count, x);
    else
        return bSearch(arr, mid + 1, high,count,x);

}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)
        cin>>i;
    int index;
    cin>>index;
    int count = 0;
    int low = 0;
    int high = n-1;
    int check = bSearch(v,low,high,count,index);
    if(check!=-1)
        cout<<"PRESENT"<<" "<<count;
    else
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

