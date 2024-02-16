#include <iostream>
#include <cstring>
using namespace std;
void rotate(char a[],int n){
    int len=strlen(a);
    int i=len-1;
    //move every character n position ahead
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;

    } a[len]='\0';

    cout <<a<<endl;
}
int main() {
    int n;
    char a[20];
    cin>>a;
    cin >> n;
    rotate(a,n);
}