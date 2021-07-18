#include<iostream>
#include<math.h>
#include <vector>
typedef  long long LL;
using namespace std;
#define CHAR 256

bool generateDocument(string characters, string document) {
    // Write your code here.
    vector<char> arr(CHAR,0);
    int size1 = document.size();
    int size2 = characters.size();
    if(size1 == 0){
        return true;
    }
    if(size1!=size2){
        return false;
    }
    for(int i = 0,j=0;i<size1,j<size2;i++,j++){
        arr[characters[j]]++;
        arr[document[i]]--;
    }
    for(int i =0;i<256;i++){
        cout<<arr[i];
    }
    for(int i =0;i<size1;i++){
        if(arr[document[i]]!=0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string doc,charr;
    cin>>doc;
    cin>>charr;
        generateDocument(charr,doc);

}
