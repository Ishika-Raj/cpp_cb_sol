#include <iostrem>
using namespace std;

int update(int *a,int *b) {
    int a1,b1;
    a=*a+*b;
    return a;

     b=|*a-*b|;

    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin<<a<<b;
    update(pa, pb);
    cout<<a<<b;

    return 0;
}
