/**
 *Good morning!
 this is a problem from google 
 given a list and a  numbers k 
 return whether any two numbers form the list adds up to k
 return true if they add up and flse if not 

 *  
 * 
 */
#include<stdio.h>
int get_newArray();
int main(){
    int k=17;
    int arr[]={10,15,3,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    //printf("the len is %d",len);
    get_newArray(&k,&len,arr);


}
int  get_newArray(int *k,int *len,int arr[]){

    for (int i=0;i<*len;i++){
        for(int j=0;j<*(len);j++){
            if ((arr[i]+arr[j])==*k){
                printf("--------true---------");
                printf("the numbers are%d",arr[i]);
                printf("and %d",arr[j]);
                break;

            }else{
                printf("0");
            }
        }
        break;
    }

}