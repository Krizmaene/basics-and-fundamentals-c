#include <iostream>
using namespace std;

void sortDescending (int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = temp ;
            }
        }
    }
}

int main () {
	const int size = 10 ;
	int arr1[size], arr2[size], merged[20] ;
	
	cout << "Enter the elements for the first array: " << endl ;
	for (int i = 0; i < 10; i++) {
			cin >> arr1[i];
	}
	
	cout << "Enter the elements for the second array: " << endl ;
	for (int i = 0; i < 10; i++) {
		cin >> arr2[i];
	}
	
	for (int i = 0; i < 10; i++) {
		merged[i] = arr1[i] ;
	}
	
	for (int i = 0; i < 10; i++) {
		merged[10 + i] = arr2[i] ;
	}

	sortDescending (merged, 20);
 
	cout << "Merged array: " << endl ;
	for (int i = 0; i < 20; i++) {
		cout << merged[i] << " " ;
	}
	
	return 0 ;
}