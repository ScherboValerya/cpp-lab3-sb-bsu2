#include<iostream>
#include<limits>
using namespace std;
int main() {
int k, i=1, sum_k=0 , n;
cout<<"Enter the amount of integers to sum ";
cin>>k;
if (k ==cin.fail()) {
do { cout<<"You have entered wrong input"<<endl;  // tells us to enter int number again
cin>>k;
cout << "Enter integer n " << i << ": "; 
cin >> n;
sum_k += n; 
i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
}
if(k !=cin.fail()) {
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> n;
sum_k += n; 
i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k; }
return 0; }


