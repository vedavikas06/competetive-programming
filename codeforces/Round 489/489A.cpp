//482A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
//#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

class minheap {

  int *ar;
  int capacity;
  int heap_size;

public:
  minheap(int capacity): capacity(capacity) {}

  void minheapify(int i) {
    int lef = left(i), rig = right(i);

    int small = i;

    if (lef < heap_size && ar[lef] < ar[i]) {small = lef;}
    if (rig < heap_size && ar[rig] < ar[small]) {small = rig;}

    if (small != i) {
      swap(&ar[small], &ar[i]);
      minheapify(small);

    }

  }

  int parent(int i) {return (i - 1) / 2;}

  int left(int i) {return 2 * i + 1;}

  int right(int i) {return 2 * i + 2;}

  int extractMin() {

    if (heap_size <= 0) {return INT_MAX;}

    int minn = ar[0];
    ar[0] = ar[heap_size - 1];
    heap_size--;
    minheapify(0);

    return minn;
  }


  void decreaseKey(int i, int new_v) {
    ar[i] = new_v;

    while (i > 0 && ar[parent(i)] > ar[i]) {
      swap(&ar[i], &ar[parent(i)]);

      i = parent(i);
    }
  }

  int getMin() {return ar[0];}

  void deleteKey(int i) {
    decreaseKey(i, INT_MIN);
    extractMin();
  }

  void insertKey(int k) {

    if (heap_size >= capacity) {
      cout << "can't insert" << endl;
      return;
    }
    ar[heap_size] = k;
    heap_size++;

    int i = heap_size - 1;

    while (i > 0 && ar[parent(i)] > ar[i]) {
      swap(&ar[i], &ar[parent(i)]);

      i = parent(i);
    }

  }



};



int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  minheap h(10);
  h.insertKey(3);
  h.insertKey(2);
  h.deleteKey(1);
  h.insertKey(15);
  h.insertKey(5);
  h.insertKey(4);
  h.insertKey(45);
  cout << h.extractMin() << " ";
  cout << h.getMin() << " ";
  h.decreaseKey(2, 1);
  cout << h.getMin();
  return 0;



  return 0;


}
