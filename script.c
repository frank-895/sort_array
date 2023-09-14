#include <stdio.h>
#include <stdlib.h>
// this program uses bubble sort to sort an array of integers
// Frank Snelling, 14/9/23

void switch_no(int *a, int *b){
  // program switches two integers passed as arguments
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print_array(int array[], int size){
  // program prints an array of integers
  printf("\n");
  for (int i = 0; i < size; i++){
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void bubble_sort(int array[], int size) {
  // program uses the bubble sort method to sort numbers
  for (int i = 0; i < size; i++) { // iterate through each element
    for (int j = i + 1; j < size; j++) { // iterate through each element AFTER i
      if (array[j] > array[i]) {
        switch_no(&array[i], &array[j]); // switch numbers if latter is greater than former
      }
    }
  }
}

int main(void) {
  // generate 20 random numbers
  int size = 20;
  int array[size];
  int new_number;
  for (int i = 0; i  < size; i++) {
    srand(i); // change seed each time
    new_number = rand() % 100 + 1;
    array[i] = new_number;
  }

  printf("Your array of random numbers: ");
  print_array(array, size);
  bubble_sort(array, size); // sort array
  printf("Your sorted array: ");
  print_array(array, size);

  return 0;
}