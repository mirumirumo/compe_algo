#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int> &a, int left, int right) {
  if (right - left <= 1) return;

  int pivot_index = (left + right) / 2;
  int pivot = a[pivot_index];
  swap(a[pivot_index], a[right - 1]);

  int i = left;
  for (int j = left; j < right - 1; j++) {
    if (a[j] < pivot) {
      swap(a[i++], a[j]);
    }
  }
  QuickSort(a, left, i);
  QuickSort(a, i + 1, right);
}