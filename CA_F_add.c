#include <stdio.h>
typedef char bit;
bit Cout=0;
bit fulladd(bit A ,bit B,bit Cin){
Cout=(A&B)||(Cin&(A^B));
return (A^B)^Cin;
}
int main()
{
int i,j,k;
int result;
printf("A B Cin | S Cout\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
result=fulladd(i,j,k);
printf("%d %d %d | ",i,j,k);
printf("%d %d\n",result,Cout);
} }
}
return 0;
}

///////////////////////////////////////////////////////////////////////
/*// C++ program to implement full adder
#include <bits/stdc++.h>
using namespace std;
// Function to print sum and C-Out
void Full_Adder(int A,int B,int C_In){
	int Sum , C_Out;
	// Calculating value of sum
	Sum = C_In ^ (A ^ B);
	
	//Calculating value of C-Out
	C_Out = (A & B) || (B & C_In) || (A & C_In);

// printing the values
	cout<<"Sum = "<<Sum<<endl;
	cout<<"C-Out = "<<C_Out<<endl;
}

// Driver code

int main() {
	int A = 1;
	int B = 0;
	int C_In = 0;
	// passing three inputs of fulladder as arguments to get result function
	Full_Adder(A, B, C_In);
	return 0;
}
*/