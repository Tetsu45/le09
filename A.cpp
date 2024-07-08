#include <iostream>
#include <cstdio>
using namespace std;
class Heap{
  int* heap;
  int capacity;
  int current_heap;
  public:
  HEAP(){
    heap = NULL;
    capacity = 0;
    current_heap = 0;
  }
  ~HEAP(){
    delete[] heap;
  }
  HEAP(int n);
  int findParent(int);
  int findRight(int);
  int findLeft(int);
  void swap(int*,int*);
  void insert(int);
  void printHeap();
};
HEAP:: heap(int n){
  heap = new int[n];
  capacity = n;
}
int HEAP::findParent(int i){
  return (i-1)/2;
}
int HEAP::findLeft(int i){
  return (2*i+1);
}
int HEAP::findRight(int i){
  return (2*i+2);
}
void Heap::swap(int* x,int* y){
  int temp = *x;
  *x =  *y;
  *y=  temp;
}
void Heap::insert(int key){
  if(current_heap ==  capacity) return 0;s
  current_heap++;
  int index = current_heap-1;
  heap[index] = key;
  while(index != 0 && heap[findParent(index)] > heap[i]){
    swap(&heap[findParent(index)],&heap[i]);
    index =  findParent(i);
  }
}
void HEAP::printHeap(){
  for(int i = 0;i < capacity ;i++){
    
  }
}
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n= 
  return 0;
}
