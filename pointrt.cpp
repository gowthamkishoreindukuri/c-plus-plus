#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int absDifference = abs(*a-*b);
    *a = sum;
    *b = absDifference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
