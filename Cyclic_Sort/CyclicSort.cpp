/*Implementation of Cyclic sort in C++. Works only with integers*/

#include <iostream>

using namespace std; 

void swapping(int &a, int &b) {     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int *array, int size) {  //display array
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void cycleSort(int *array, int n) {
    
   for(int start = 0; start<n-1; start++) {    
      
      int key = array[start];
      int location = start;

      for(int i = start+1; i<n; i++) { //count smaller element in the right side of key
         if(array[i] < key)
            location++;
      }

      if(location == start) //when it is in correct place go for next iteration
         continue;
    
      while(key == array[location]) //if same data is found increase location
         location++;
         
      if(location != start)
         swapping(array[location], key);

      while(location != start) {
         location = start;

         for(int i = start+1; i<n; i++) { //location to put element
            if(array[i] < key)
               location++;
         }

         while(key == array[location]) //if same data is found increase location
            location++;
         if(key != array[location])
            swapping(key, array[location]);
      }
   }
}

//Driver programm
int main()
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int *arr = new int[n]; //create an array with given number of elements
   cout << "Enter elements : ";

   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array before Sorting: ";
   display(arr, n);
   cycleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);

   return 0;
}
