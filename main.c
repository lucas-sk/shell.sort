#include <stdio.h>

void shellSort(int array[], int n) {
  for (int h = n / 2; h > 0; h /= 2) {
    for (int i = h; i < n; i += 1) {
      int aux = array[i];
      int j;
      for (j = i; j >= h && array[j - h] > aux; j -= h) {
        array[j] = array[j - h];
      }
      array[j] = aux;
    }
  }
}

//mostrando na tela o elementos organizados
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {9, 8, 3, 7, 5, 6, 4, 1, 200}; // os elementos
  int size = sizeof(data) / sizeof(data[0]); // o tamanho do vetor
  shellSort(data, size); // os parametros a serem passados
  printf("Sorted array: \n");
  printArray(data, size);
} 
