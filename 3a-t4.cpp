#include<iostream> 
using namespace std; 
 
int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
do {
cout << "Enter integer nr. " << i << ": "; 
// we will exit the loop if k=0
if (k == 0) {  //condition if the user inputs zero as the k value the program will jumps out of the loop
    break;
  }
cin >> number;
sum_k += number; 
i++; 
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
