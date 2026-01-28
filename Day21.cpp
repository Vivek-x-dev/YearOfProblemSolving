/*
Question : Given a vector and a target sum, check whether any pair adds up to the given sum.
optimized approach: O(n) 
{two pointer method only for sorted data }
*/
#include <iostream>
#include <vector>
using namespace std;

void hasPairSum(const vector<int> &value ,int target){
    int left=0;
    int right=value.size()-1;

    while(left<right){
        int currentSum=value[left]+value[right];
        if(currentSum==target){
            cout<<"Pair found " << value[left] << ", " << value[right];
            return;
        }
        else if(currentSum<target)
            left++;
        else
            right--;
    }

    cout<<" Pair not found";

}
int main(){
    vector<int> v={2,3,4,5,6,7,8};
    int target=11;
    hasPairSum(v , target);
    cout<<endl;
    return 0;
}
/*
In this optimized approach, we use the two-pointer technique to 
find the pair that adds up to the target sum in O(n) time complexity. 
*/
