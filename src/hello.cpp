#include <string>

#include "hello.hpp"

int TriangleNumberCalc::value(int n)
{

   if (n <= 1)
   {
      return n;
   }
   return n + value(n - 1);
}

int TriangleNumberCalc::add(int n, int m)
{

   return value(n) + value(m);
}

int TriangleNumberCalc::subtract(int n, int m)
{

   return value(n) - value(m);
}
