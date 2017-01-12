#ifndef FIBONACCI_H_DEFINED
#define FIBONACCI_H_DEFINED

// Values in the range 0...18,446,744,073,709,551,615 on Windows 
using Integer = unsigned long long;

// Returns the nth Fibonacci number using
// recursion without memoization
Integer fibonacci(unsigned n);


// Returns the nth Fibonacci number using recursion
// with memoization.  Provides a huge performance improvement
// over the pure recursive version. 
Integer fibonacci2(unsigned n);

#endif

