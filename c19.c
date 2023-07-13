//7
#include <stdio.h>
void print(int *,int);
 int main(){
    int n,i;
     printf("Enter size of array : ");
     scanf("%d",&n);
     int a[n];
     printf("Enter elements of array : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    print(a,n);
 }
 void print(int b[],int x){
        int i,j ,count;
        int total=0;
        for(i=0;i<x;i++){
            count=0;
            for(j=0;j<x;j++){
                   if(b[i]==b[j])
                    count++;
            }
            if(count>1){
            total++;
            printf("%d\t",b[i]);
            }
        }
        printf("Total number of duplicate elemnts are :  %d",total);
  }















//8
// #include <stdio.h>
// void print(int *,int);
//  int main(){
//     int n,i;
//      printf("Enter size of array : ");
//      scanf("%d",&n);
//      int a[n];
//      printf("Enter elements of array : ");
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     print(a,n);
//  }
//  void print(int b[],int x){
//         int i,j ,count;
//         printf("Unique elements are : ");
//         for(i=0;i<x;i++){
//      count=0;
//             for(j=0;j<x;j++){
//                    if(b[i]==b[j])
//                     count++;
//             }
//             if(count==1)
//             printf("%d\t",b[i]);
//         }
//  }