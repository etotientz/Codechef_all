/* Dynamic Programming implementation of LCS problem */
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
void lcs( int *X, int *Y, int m, int n )
{
   int L[m+1][n+1];

   /* Following steps build L[m+1][n+1] in bottom up fashion. Note
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   // Following code is used to print LCS
   int index = L[m][n];

   // Create a character array to store the lcs string
   int lcs[index];
   //lcs[index] = '\0'; // Set the terminating character
 int g=index;
   // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (X[i-1] == Y[j-1])
      {
          lcs[g-1] = X[i-1]; // Put current character in result
          i--; j--; g--;     // reduce values of i, j and index
      }

      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
for(i=0;i<index;i++)cout<<lcs[i]<<" ";
   // Print the lcs
   //cout << "LCS of " << X << " and " << Y << " is " << lcs;
}

/* Driver program to test above function */
int main()
{
  //char X[] = "AGGTAB";
  //char Y[] = "GXTXAYB";
  int a,b;
  int *p,*q;
  cin>>a>>b;
  p=new int[a];q=new int[b];
  for(int i=0;i<a;i++)cin>>p[i];
  for(int i=0;i<b;i++)cin>>q[i];
  lcs(p, q, a, b);
  return 0;
}
