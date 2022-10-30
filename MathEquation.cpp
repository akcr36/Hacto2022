#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
  if (n == 0) return 0;
  if (n <3) return 1;
  
  return Fibonacci(n-1) + Fibonacci(n-2);
}

int Fact (int n)
{
  if (n ==0) return 1;
  return n * Fact(n-1);
}


int main()
{
  // calling Fibonacci for n = 5;
  cout<<Fibonacci(5)<<endl;
  return 0;
}
