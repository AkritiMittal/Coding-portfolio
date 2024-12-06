#include<iostream>
using namespace std;

int main(){
vector<int> nums = {1,2,3,4,5,3};
int result = 0;
for(int num: nums){
result ^= num;
}

if(result ==0){
	cout<<"No missing number";
}
else
	cout<<"Missing number : "<<result;

return 0;
}