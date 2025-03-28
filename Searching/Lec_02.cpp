#include<iostream>
#include<vector>
using namespace std;

//Rotated and sorted array with pivot index
int findPivotIndex(vector<int>v){
    int n = v.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        else if(mid+1<n && v[mid]>v[mid+1]){
            return mid;
        }
        else if (mid-1>=0 && v[mid]<v[mid-1]){
            return mid-1;
        }
        else if (v[mid]>v[0]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        // Mid update
        mid = s+(e-s)/2;
    }
    return -1;
}

int binarySearch(vector<int>v, int s, int e, int target){
    int mid = s+(e-s)/2;
    while(s<=e){
        if (v[mid]==target)
        {
            return mid;
        }
        
        else if (v[mid]<target)
        {
            s = mid+1;
        }
        else if (v[mid]>target){
            e = mid-1;
        }
        // mid update
        mid = s +(e-s)/2;
    }
    return -1;
}




int main(){

    //Rotated and sorted array with pivot index
    vector<int>v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    int n = v.size();

    int target = 20;

    int PivotIndex = findPivotIndex(v);
    cout<<"Pivot element Index: "<<PivotIndex<<endl;

    if (target>=v[0] && target<=v[PivotIndex])
    {
        int search = binarySearch(v, 0, PivotIndex, target);
        cout<<"target is present at index: "<<search;
    }
    else{
        int search = binarySearch(v, PivotIndex+1, n-1, target);
        cout<<"target is present at index: "<<search;
    }
    
}
