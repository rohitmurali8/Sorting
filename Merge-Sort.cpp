#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printArray(int A[], int size)
{
    cout << "Entered Print" << endl;
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

void merge(int a[], int l, int m, int r){
    int sub1 = m - l + 1;
    int sub2 = r - m;
    int left[sub1], right[sub2];
    for (int i = 0; i < sub1; i++)
        left[i] = a[l+i];
    for (int i = 0; i < sub2; i++)
        right[i] = a[m+1+i];

    int k = l; 
    int x, y = 0;
    while (x < sub1 && y < sub2)
    {
        if(left[x] > right[y]){
            a[k] = right[y];
            y++;
        }
        else {
            a[k] = left[x];
            x++;
        }
        k++;
    }

    while (x < sub1){
        a[k] = left[x];
        x++;
        k++;
    }

    while (y < sub2){
        a[k] = right[x];
        y++;
        k++;
    }
            
}

void mergesort(int a[], int start, int end){
    if(start >= end)
        return;
    int middle = start + (end - 1)/2;
    mergesort(a, start, middle);
    mergesort(a, middle+1, end);
    merge(a, start, middle, end);      
}

int main(){
    int a[] = {4,9,3,7,8,2,1,6};
    int start = 0;
    int a_size = sizeof(a)/sizeof(a[0]);

    mergesort(a, start, a_size - 1);
    cout << "\nSorted array is \n";
    printArray(a, a_size);
    return 0;    
}

