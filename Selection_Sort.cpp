#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int get_minimum(int arr[], int low, int high){
    int min= arr[low];
    int min_ind = low;
    for (int i = low; i <= high; i++)
    {
        if(arr[i] < min){
            min = arr[i];
            min_ind = i;
        }
    }
    return min_ind;
}

void selection_sort(int arr[], int low, int high){
    for (int i = 0; i <= high; i++)
    {
        int min_ind = get_minimum(arr, i, high);
        swap(&arr[i], &arr[min_ind]);
    }
    
}

int main(){
    int arr[] = {1,2,56,8,4,3};
    int a_size = sizeof(arr)/sizeof(arr[0]);
    cout << "The array before performing selection sort is " << endl;    
    for (int i = 0; i < a_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;    
    selection_sort(arr, 0, 5);
    cout << "The array after performing selection sort is " << endl;    
    for (int i = 0; i < a_size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}