#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n = 8;
    // for(int i = 0; i<=7; i++){
    //         int t = arr[i];
    //         arr[i] = arr[n];
    //         arr[n] = t;
    // }

    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    for (int i = 0; i <= 7; i++)
    {
        printf("%d \t", arr[i]);
    }
}

// java example in one loop
// class Solution{
//    public static int doUnion(int a[], int n, int b[], int m)
//    {
//        //Your code here
//        HashSet setA = new HashSet<Integer>();

//     int maxLength = Math.max(n, m);

//     for(int i=0;i<maxLength;i++) {
//      if(i < a.length)
//       setA.add(a[i]);
//      if(i < b.length)
//       setA.add(b[i]);
//     }
//     return setA.size();
//    }
// }