#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v1;
   int n;
       cout<<"enter vector size :";

   cin>>n;
   for(int i =0;i<n;i++){
    int data;
        cout<<"enter element number "<<i+1<<"->";

    cin>>data;
    v1.push_back(data);
   }
   cout<<"elements are :";
for(auto x:v1){
    cout<<x<<" ";

}
}