#include<bits/stdc++.h>



using namespace std;


const int N = 100000;  // limit for array size
int n;  // array size

int sum[4 * N + 10];
int num[N];

void build(int att,int L,int R) {  // build the tree
    sum[att] = 0;
    //dbg(att);
    if(L==R){
        sum[att]=num[L];
        return;
    }
    int mid = (L+R)/2;
    build(att*2,L,mid);
    build(att*2+1,mid+1,R);

    sum[att]=sum[att*2]+sum[att*2+1];
}

void updatte(int att,int L,int R,int pos,int val) {  // updatte
    if(L==R){
        sum[att]+=val;
        return;
    }
    int mid = (L+R)/2;
    if(pos<=mid)  updatte(att*2,L,mid,pos,val);
    else updatte(att*2+1,mid+1,R,pos,val);

    sum[att]=sum[att*2]+sum[att*2+1];
}


int query(int att,int L,int R,int l,int r) {  // updatte
    if(r<L || R<l) return 0;
    if(l<=L && R<=r) return sum[att];

    int mid = (L+R)/2;
    int x = query(att*2,L,mid,l,r);
    int y = query(att*2+1,mid+1,R,l,r);

    return x+y;
}

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) scanf("%d", &num[i]);

  build(1,1,n);
  updatte(1,1,n,5,10);
  printf("%d\n", query(1,1,n,1,5));
  return 0;
}
