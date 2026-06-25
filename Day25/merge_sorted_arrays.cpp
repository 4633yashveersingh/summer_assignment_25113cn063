#include<iostream>
using namespace std ;
int main(){

    int n1 , n2 ;
    cout<< "enter the size of sorted arrays"<<endl ;
    cin>> n1 ;
    cout<<"enter"<<n1<<"elements in sorted order"<<endl ;

    int arr1[100] ;
    for (int i = 0 ; i< n1 ; i++) {
        cin>>arr1[i] ;
    }
        cout<<"enter the second sorted array"<<endl ;
        cin>> n2 ;
        int arr2[100] ;
        cout<< "enter" << n2 << "elements in sorted order"<<endl ;
        for(int i= 0 ; i< n2 ; i++){
            cin>> arr2[i] ;
        }
         int merged[200] ;
         int i= 0, j = 0 , k = 0 ;
         
         while ( i < n1 && j < n2) {

            if (arr1[i] <= arr2[j]){
                merged[k]=arr1[i] ;
                i++ ;
            }
            else {
                merged[k] = arr2[j] ;
                j++ ;
            }
            k++ ;
         }
           while (i <n1) {
            merged[k]=arr1[i];
            i++;
            k++;
           }

           while(j<n2){

            merged[k] = arr2[j] ;
            k++ ;
            j++ ;
           }
            
           cout << "merged sorted array" ;
           for(int x= 0 ; x<k ; x++){
            cout<< merged[x]<<" " ;

           }
          cout<< endl ;
          return 0 ;

       }