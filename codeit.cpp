#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> largInt(int a){
    vector<int>l;
    vector<int>r;
    int arr[100];
    int d = 0,temp = a;
    temp +=1;
    while(temp>0){
        l.push_back(temp%10);
        temp /= 10;
    }
    for(int i = 0;i<l.length();i++){
        r.push_back(l[l.length() - i]);
    }
    
    // l[0] +=1;
    // cout<<temp;

    return r;

}

void pairSum(int a[], int n,int t){
    int arr[100][2] , k = 0;
    for(int i = 0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if((a[i] + a[j]) == t && i != j){
                arr[k][0] = i;
                arr[k][1] = j;
                k++; 
            }
        }
    }

    for(int i = 0;i<k;i++){
        cout<<arr[i][0]<<" ";
        cout<<arr[i][1]<<" ";
    }
    // return &ar;
}

string sumString(string a, string b){
    string c;int j = 0;
    int n = a.length();
    for(int i = 0;i<n;i++){
        if(a[i] == '0' && b[i] == '0'){
            c[j] += '0';
            j++;
        }else if((a[i] == '1' && b[i] =='0') || (a[i] == '0' && b[i] == '1') ){
            c[j] += '1';
            j++;
        }
    }

    cout<<c;
    return c;
}


int main(){

    // int a[] = {2,7,11,15},n = 4, t =9;
    // int a[] = {3,3},n = 2, t =6;
    // pairSum(a,n,t);
    // sumString("1010","1011");
    int a = 123;
    vector<int> l = largInt(a);
    for(int i:l){
        cout<<i<<" ";
    }
    // printf("%s","");
}