#include<iostream>
#include <bits/stdc++.h>//this package is to use vectors

using namespace std;

int main(){
    cout << "Last Occurence  " << endl;

    cout << "Enter the size of Array : " << endl;
    int n; 
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the Elements of Array : " << endl;
    //input
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }
    //output
    for(int i=0; i<=n-1; i++){
        cout << arr[i] << " ";
    }

    cout << "\nEnter the value of X : " << endl;
    int x;
    cin >> x;
    int occurrence = 0;

    for(int i=0; i<=n-1; i++){
        if(arr[i] == x){
            occurrence = i;
        }
    }

    cout << "Occurrence : " << occurrence << endl;

    return 0;
}
