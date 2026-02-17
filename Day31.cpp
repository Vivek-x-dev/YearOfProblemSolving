/*
question :  quick sort 
*/
#include <iostream>
#include <vector>
using namespace std;

int partition (vector <int> & arr , int low ,int high){
    int pivot = arr[high];
    int i = low -1;

    for (int j = low ; j <= high -1 ;j++ ){
        if (arr [j] < pivot ){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap (arr[i+1], arr[high]);
    return (i+1);

}
void quickSort(vector<int>& arr ,int low, int high){
    if (low < high){
        int pi = partition (arr ,low ,high);
   
        quickSort(arr ,low ,pi-1) ;
        quickSort(arr ,pi+1 , high) ;

    }
}
int main(){
 vector <int> data = {10,3,6,2,11,5,8};
    quickSort(data ,0,data.size()-1);

    for (int x :data )
    cout <<x << " ";
    cout <<endl;

    return 0;
} 




















