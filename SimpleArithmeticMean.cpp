#include <iostream>

float calculate(float arr[], int size) {
  float sum = 0;
  
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  return sum / size;
}

int main() {
    float numbers[] = { 7.5, 8.0, 6.5, 9.0, 7.2 };
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    float result = calculateAverage(numbers, arraySize);

    cout << "The average of the values is: " << result << endl;

    return 0;
}
