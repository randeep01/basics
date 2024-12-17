#include <iostream>
#include<vector>
using namespace std;
 int getTotalSum(vector<int> data, int s){
   vector <int> left_max(s);
   vector <int> right_max(s);
   int lmax = data[0];
   int rmax= data[s-1];
   int total = 0;
   for(int i = 0;i<s;i++){
     if(lmax<data[i])
     lmax = data[i];
     left_max[i] = lmax;
   }
   for(int i = s-1;i>=0;i--){
     if(rmax<data[i])
     rmax = data[i];
     right_max[i] = rmax;
     
   }
   for(int i=0;i<s;i++){
     if(left_max[i]<right_max[i])
     total+=left_max[i];
     else
     total += right_max[i];
   }
   return total;
   
 }
 int main()
 {
   vector <int> input = {4,6,7,3,2,5};
   int input_size = input.size();
   int sum = 0;
   for(int i = 0;i<input_size;i++){
     sum+= input[i];
   }
   int total = getTotalSum(input,input_size);
   int output = total -sum;
   cout << output;
   return 0;
 }