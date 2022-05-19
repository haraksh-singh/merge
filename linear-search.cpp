#include <iostream>
using namespace std;

int main(){
int test;
cout << "enter number of test cases to be runned: ";
cin >> test;
int n;//size of array
int arr[n];
int num;
int index;
int i=0;
while (i<test) {
cout << "enter size of array: ";
cin >> n;
int x=1;
for (int j=0;j<n;j++) {
cout << "enter array element"<< " "<< x << ": ";
x++;
cin >> arr[j];
}
cout << "number to be searched in the array: ";
cin >> num;
bool flag=false;
for (int k=0;k<n;k++) {
if (arr[k]==num) {
flag=true;
index=k;
break;
}
}
if (flag==true) {
cout << num << " found at index: " << index << endl;
}
else if (flag==false) {
cout << num << " not found in the array "<< endl;
}
i++;
}

}
