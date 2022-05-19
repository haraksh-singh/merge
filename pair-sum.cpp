#include <iostream>
#include<math.h>
using namespace std;

int main() {
int test_case;
cin >> test_case;
int num;
int Count=0;
for (int i=0;i<test_case;i++) {
int n;
cin >> n;
int arr[n];
for (int i=0;i<n;i++) {
cin >> arr[i];
}
cin >> num;
for (int i=0;i<n;i++) {
for (int j=i+1;j<n;j++) {
if ((arr[i]+arr[j])==num) {
Count=Count+1;
}
}
}
cout << Count;
//file modified by adding comment,return 0,and math.h header file.
return 0;
}



}
