#include <stdio.h>

typedef char bit;
bit carry=0;
bit halfadd(bit A,bit B){
carry=A&B;
return A^B;
}
int main()
{
int i,j,result;
printf("A B | S Carry\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
result=halfadd(i,j);
printf("%d %d | ",i,j);
printf("%d %d\n",result,carry);
}
}
return 0;
}
///////////////////////////////////////////////////////////////////////
/*half adder showing calculation in C++
// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;
// Function to print Sum and Carry
void Half_Adder(int A,int B){
    //initialize the variables Sum and Carry
    int Sum , Carry;
    
    // Calculating value of sum by applying A XOR B
    Sum = A ^ B;
    
    // Calculating value of Carry by applying A AND B
    Carry = A & B;
    
    // printing the values
    cout<<"Sum = "<< Sum << endl;
    cout<<"Carry = "<<Carry<< endl;
}
//Driver code
int main() {
    int A = 1;
    int B = 0;
    // calling the function
    Half_Adder(A,B);
    return 0;
}
*/
