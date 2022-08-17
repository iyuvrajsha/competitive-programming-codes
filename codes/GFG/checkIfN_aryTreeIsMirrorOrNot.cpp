#include<bits/stdc++.h>
using namespace std;
int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int,stack<int>> tree;
        for(int i =0;i<2*e;i+=2)
        {
             tree[A[i]].push(A[i+1]);
        }
        for(int i =0;i<2*e;i+=2)
        {
            if(tree[B[i]].top() != B[i+1])
            {return 0;}
            tree[B[i]].pop();
        }
return 1;
    }
int main()
{
int n = 3, e = 2,A[] = {1, 2, 1, 4},B[] = {1, 3, 1, 2};
cout<<checkMirrorTree(n,e,A,B);

}