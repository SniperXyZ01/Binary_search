#include<iostream>
using namespace std;

int Binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1; 
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
         
    }
    return -1;
}

int main(){
    int key;
    cout<<"Enter the key you are looking for : ";
    cin>>key;
    int arr[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int index = Binary_search(arr, 10, key);
    if(index == -1){
        cout<<"The key you are looking for is not present.";
    }
    else{
        cout<<"The index of "<<key<<" is : "<<index<<endl;
    } 

} 
