#include <iostream>
using namespace std;

int main() {
    int Arr[7];
    
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < 7; i++) {
        cin >> Arr[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < 7; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (Arr[j] > Arr[j + 1]) {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < 7; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}
