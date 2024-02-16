#include<iostream>
#include<climits>

using namespace std;

    //reverse the row firts

void rotateimage(int a[100][100],int n){
 for(int row=0;row<n;row++){
int x=0,y=n-1;
//reversing the row by iterating l]left to right once then right to left
while(x<y){
                swap(a[row][x],a[row][y]);
               x++;
               y--;
           }

 }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i<j){
            swap(a[i][j],a[j][i]);
        }
    }
}





 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

}
int main (){
int a[100][100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<"";
    }
    cout<<endl;
}
rotateimage(a,n);



}