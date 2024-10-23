//Revathi oc
//23070123105
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    cout<<"Original array: ";
    for (int k=0; k < 5; k++)
         cout<< arr[k] << " ";
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
