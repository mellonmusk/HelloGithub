#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int profit=0, day[n], pay[n];
  for(int i=0;i<n;i++){
    cin >>day[i]>>pay[i];
  }
  int maxProfit=0;
  for(int start=0;start<n;start++){
    int i=start;
    for(;i+day[i]<n+1;){
      profit+=pay[i];
      i=i+day[i];
    }
    if(profit>maxProfit) maxProfit=profit;
    profit=0;
  }
  cout<<maxProfit;
  return 0;
}
