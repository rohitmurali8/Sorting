#include <iostream>
#include <vector>
#include <string>

using namespace std;

int a [6] = {2,4,6,7,5,8};

int main(){
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        for (int j = sizeof(a)/sizeof(a[0]) - 1; j > i; j--){
            if (a[j] < a[j-1]){
                int s = a[j-1];
                a[j-1] = a[j];
                a[j] = s;
            }
        }
    }

    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        cout << a[i] << " ";
    }

    cout << "Bubble Sort is done" << "\n";
    cout << sizeof(a);
    return 0;
}