#include<iostream>
using namespace std;

void readl(char a[],char delimiter){
int i=0;
char ch= cin.get();
while(ch != delimiter){
    a[i]=ch;
   i++;
   ch=cin.get();//yaha pe ham a[i]=cin.get likh rhe the to galti horha tha ch basically point kr rha hai aur a[i] store fir i++ krke agla chctr read kraw rhe hai
}
a[i]='\0';


}

int main(){
char a[100];
//readl(a,'$');

cin.getline(a,100,'$');
cout<<a<<endl;


return 0;


}
