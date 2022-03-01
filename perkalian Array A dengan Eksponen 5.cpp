/* Praktek 2.2 */
/* perkalian Array A dengan Eksponen 5 */
#include <iostream> 
#include <conio.h>   
using namespace std;

int main()
{
	typedef int ArrayA[2][2];
	ArrayA Array_A,A;
	int i,j,n;

cout<<"\tperkalian Array A dengan eksponen 5"<<endl;
cout<<"\t==================================="<<endl;

// Memasukkan nilai ke dalam elemen-elemen matriks
cout<<"Masukkan nilai eksponen: ";cin>>n;
cout<<endl;
cout<<"Input Array A 2*2\n"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
cout<<"Array A ["<<i<<"]["<<j<<"] = "; cin>>Array_A[i][j];
}
}
cout<<endl;

//menghitung perkalian matriks dengan eksponen
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
A[i][j] = n*Array_A[i][j];
}
}
cout<<endl;

//menampilkan hasil perkalian matriks dengan eksponen
cout<<"Hasil perkalian Array A dengan eksponen 5"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
cout<<"Array A["<<i<<"]["<<j<<"]= "<<A[i][j]<<endl;
}
}
getch();
}
