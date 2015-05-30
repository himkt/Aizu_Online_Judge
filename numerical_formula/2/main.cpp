# include <iostream>
using namespace std;


// if n is odd, return true. otherwise, return false
bool odd(int n){ return n & 0x1; }

// bit shift
int half(int n){ return n >> 1; }

/*
 * multiply0
 * 1a = a
 * (n+1)a = na + a
 * O(n-1)
*/
int multiply0(int n, int a){
  if(n == 1) return a;
  return multiply0(n-1,a) + a;
}

/*
 * multiply1
 * modified multiply0
 * O(log n)
*/
int multiply1(int n, int a){
  if(n == 1) return a;
  int result = multiply1(half(n),a+a);
  if(odd(n)) result = result+a;
  return result;
}


// main function
int main(){
  cout << multiply0(1100,121) << endl;
  cout << multiply1(1100,121) << endl;
  return 0;
}
