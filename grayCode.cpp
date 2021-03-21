#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin >> n;
   bool arr[n] = {0};
   for (int i = 0; i < n; i++)
      arr[i] = 0;
   long long l = 1 << n;
   long long count = 0;

   for (long long i = 1; i <= l; i++)
   {

      for (long long j = 0; j < n; j++)
      {
         cout << arr[j];
      }
      cout << "\n";

      //cout<<"i : "<<i<<"\n";

      if (arr[n - 1] == 0)
         arr[n - 1] = 1;
      else
      {
         arr[n - 1] = 0;
      }

      if (n >= 2 && i % 2 == 0)
      {
         if (arr[n - 2] == 0)
            arr[n - 2] = 1;
         else
            arr[n - 2] = 0;
      }

      if (n >= 3 && i % 4 == 0)
      {
         if (arr[n - 3] == 0)
            arr[n - 3] = 1;
         else
            arr[n - 3] = 0;
      }

      if (n >= 4 && i % 8 == 0)
      {
         if (arr[n - 4] == 0)
            arr[n - 4] = 1;
         else
            arr[n - 4] = 0;
      }
      if (n >= 5 && i % 16 == 0)
      {
         if (arr[n - 5] == 0)
            arr[n - 5] = 1;
         else
            arr[n - 5] = 0;
      }
      if (n >= 6 && i % 32 == 0)
      {
         if (arr[n - 6] == 0)
            arr[n - 6] = 1;
         else
            arr[n - 6] = 0;
      }
      if (n >= 7 && i % 4 == 0)
      {
         if (arr[n - 7] == 0)
            arr[n - 7] = 1;
         else
            arr[n - 7] = 0;
      }
      if (n >= 8 && i % 128 == 0)
      {
         if (i % 128 == 0 && arr[n - 8] == 0)
            arr[n - 8] = 1;
         else
            arr[n - 8] = 0;
      }
      if (n >= 9 && i % 256 == 0)
      {
         if (i % 256 == 0 && arr[n - 9] == 0)
            arr[n - 9] = 1;
         else
            arr[n - 9] = 0;
      }
      if (n >= 10 && i % 512 == 0)
      {
         if (arr[n - 10] == 0)
            arr[n - 10] = 1;
         else
            arr[n - 10] = 0;
      }
      if (n >= 11 && i % 1024 == 0)
      {
         if (arr[n - 11] == 0)
            arr[n - 11] = 1;
         else
            arr[n - 11] = 0;
      }
      if (n >= 12 && i % 2048 == 0)
      {
         if (arr[n - 12] == 0)
            arr[n - 12] = 1;
         else
            arr[n - 12] = 0;
      }
      if (n >= 13 && i % 4096 == 0)
      {
         if (arr[n - 13] == 0)
            arr[n - 13] = 1;
         else
            arr[n - 13] = 0;
      }
      if (n >= 14 && i % 8192 == 0)
      {
         if (arr[n - 14] == 0)
            arr[n - 14] = 1;
         else
            arr[n - 14] = 0;
      }
      if (n >= 15 && i % 16384 == 0)
      {
         if (arr[n - 15] == 0)
            arr[n - 15] = 1;
         else
            arr[n - 15] = 0;
      }
      if (n >= 16 && i % 32768 == 0)
      {
         if (arr[n - 16] == 0)
            arr[n - 16] = 1;
         else
            arr[n - 16] = 0;
      }
   }
}