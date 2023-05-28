#include<iostream>
using namespace std;

int main() {
   int size;
   cout << "Enter the size of the array: ";
   cin >> size;

   int arr[size];
   cout << "Enter the elements of the array: ";
   for (int i = 0; i < size; i++) {
      cin >> arr[i];
   }

   cout << "Original array: ";
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   for (int i = 0; i < size - 1; i++) {
      
      for (int j = i + 1; j < size; j++) {
         if (arr[j] < arr[i]) {
             int temp = arr[j];
             arr[j] = arr[i];
             arr[i] = temp;
         }
      }
      // Swap the minimum element with the current element
      
   }

   cout << "Sorted array: ";
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
