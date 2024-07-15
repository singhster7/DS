
#include<iostream>
#include<climits>
using namespace std;
void spiral(int a[100][100],int n,int m){
//sr=1
    int sr=0,sc=0,er=n-1,ec=m-1;
    while(sr<=er and sc<=ec){
        for(int col=sc;col<=ec;col++){
        cout<<a[sr][col]<<"";        
            }
    
    sr++;
    for(int row=sr;row<=ec;row++){
        cout<<a[row][ec];
    }
    ec--;
    if(sr<er){ //this line is written when sr and er point to same inex then er shud not pirntit
    for(int col=ec;col>=sc;col--){
        cout<<a[er][col]<<"";
    }
    }
    er--;
    if(sc<ec){  //this line is written when sc and ec point to same inex then er shud not pirntit
    for(int row=er;row>=sr;row--){
        cout<<a[row][sc];
    }
    sc++;
}
}
}
/**void subarray(int a[],int n){
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for (int k=i;k<j;k++){
                cout << a[k]<<"";
                            }
                            cout<<endl;
        }
    }
}**/
/**int multiply(int x,int y){
    int product=x*y;
    return product;
}**/

//fibonacci nummber
/**int fibo(int n){
if(n==1){
    return 0;
}
else if(n==2){ 
    return 1;
    }
else{
        int a=0,b=1,c,i;

        for(i=1;i<=n-2;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }





}
**/
/**int fact(int n){
    int ans=1;
    for(int no=1;no<=n;no++){
        ans*=no;
    }
    return ans;
}**/
int main(){
   /** use if continue statemnent int i=1;
    while(i<=10){
        //cout<<i<<endl;
        if(i==3){
            i=i+1;
            continue;
        }
        cout<<i<<endl;
        
    
    i=i+1;

*/
// to find largest no out of n numbers(climits header is important) 
/**int i=1,n,no;
int largest=INT_MIN;
cin>>n;
while(i<=n){
    cin>>no;
    if(largest<no){
        largest=no;
    
}i=i+1;

}
cout<<"largest is "<<largest<<endl;

}**/

//print primes
/**int n,no,i;
cin>>n;
cout<<"primes are"<<endl;       
for(no=2;no<=n;no++){
    for(i=2;i<no;i++){
        if(no%i==0){break;}
    }
     
    if(i==no){ 
       
        cout<<no<<endl;
        
        }
}**/

/**int a=5;
int b=7; 
cout<<(a&b)<<endl;
cout<<(8&5)<<endl;
cout<<(a|b)<<endl;
cout<<(14|2)<<endl;
cout<<(a^b)<<endl;
cout<<(14^2)<<endl;

//uunnique no ques
int ans=0,n,i,no;
cin>>n;
for(i=0;i<n;i++){
    cin>>no;
   ans=ans^no;

}
cout<<"unique  no"<<ans;


//difference bw do while and while loop
int i=5;
do{
    cout<<i;
    i++;
    cout<<i; 

}while(i<5);
while(i<5){
    cout<<i;
    i++;
}

//counting the whitespaces usin cin.get()
char ch;
int count=0;
ch=cin.get();
while(ch!='$'){
    count++;
    ch=cin.get();
}

cout<<"total characters ar"<<count;
**/
/**int a=10,b=20;
int ans=multiply(a,b);
cout<<ans;**/
//drive rocde for fibinnaci
/**
int n;
cin>>n;
cout<<fibo(n);
 
 largest element in array
int a[]={10,4,4,4,80};
int i,mx=INT_MIN,n=5;
for(i=0;i<n;i++){
 if(a[i]>mx){
    mx=a[i];
    
 }

}
cout<<"largest is "<<mx;
**/
//bubble sort
//
/**
int a[]={10,1,2,43,80};
int n=5;
for(int i=0;i<n;i++){
for(int j=0;j<n-2;j++){
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        }
}

}
for (int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
**/

//selection sort
/**
int a[]={10,1,2,43,80};
int n=5;
for(int i=0;i<n-2;i++){
int min=i;
for(int j=i+1;j<n;j++){
if(a[j]<a[min]){
    min=j;
    }

}
swap(a[i],a[min]);

}
for (int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
**/
//INSERTION SORT
/**int a[]={10,1,2,43,80};
int n=5,i,j;
for (i=1;i<n;i++){
    int puc=a[i];
    for(j=i-1;j>=0 && a[j]>puc;j--){
        a[j+1]=a[j];
    }
    a[j+1]=puc;//pickedup card is being placed at j+1 index
}

for(i=0;i<n;i++){
    cout<<a[i]<<endl;
}
//pair sum of array which is sorted just traverse array with one index fixed and other too,increment if the sum is less or more
int a[]={1,4,6,7,8,9};
int n=sizeof(a)/sizeof(int);
int i=0,j=n-1,sum=11;
while(i<j){
    if(a[i]+a[j]==sum){
        cout<<a[i]<<"  "<<a[j];
        i++;
        j--;
    }
    else if(a[i]+a[j]<sum){
        i++;
    }
    else if(a[i]+a[j]>sum){
        j--;
    }
    
}
return 0;

//subaarray
int a[]={1,2,3,4,5};
int n=4;
subarray(a,n);**/
//wave print just check column is even then o to n else n-1 to 0
/**int a[][4]={{1,2,3,4},{7,8,9,0},{2,7,9,0}};
int row,col;
for(col=0;col<4;col++){
    if(col%2==0){
        for(row=0;row<3;row++){
            cout<<a[row][col]<<endl;;
        }
    }
    else{
        for(row=2;row>=0;row--){
            cout<<a[row][col]<<endl;
        }
    }
}**/
//runner code for spiral print
int a[100][100];
int val=0,r,c;
cin>>r>>c;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        a[i][j]=val;
        val++;
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<a[i][j]<<"   ";
    }
    cout<<" "<<endl;
}
spiral(a,r,c);


return 0;


}
