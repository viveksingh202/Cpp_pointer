#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
            }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
            }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[10]={1,2,3,3,3,5,6,7,8,9};
    int firstOccurence=firstOcc(even, 10, 3);
    int lastOccurence=lastOcc(even, 10, 3);
    cout<<"fisrt Occurence is found at index "<<firstOccurence<<endl;
    cout<<"last Occurence is found at index "<<lastOccurence<<endl;


}