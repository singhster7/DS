#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char a[])
{
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            return true;
        }
        i++;
        j--;
    }
    return false;
}
int main(){
char a[1000];
cin>>a;
if(ispalindrome(a)==true){
    cout<<"palindrome";

}
else{
    cout<<" not a pallindrome";
}
return 0;


}
