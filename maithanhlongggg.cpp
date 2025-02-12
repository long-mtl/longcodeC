#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int a[], int n){ // ham nhap mang
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void Xuat(int a[], int n){  // ham xuat mang
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
bool SNT(int n){                //ham kiem tra co phai la so nguyen to khong
	if(n<=1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void XuatSNT(int a[], int n){   //ham xuat so nguyen to
	for(int i=0;i<n;i++){
		if(SNT(a[i])){
			cout << a[i] << " " ;
		}
	}
}
int SCP(int n){ //ham kiem tra co phai la so chinh phuong khong
	if(n<=0){
		return false;
	}
	int x=sqrt(n);
	return x*x==n;
}
void XuatSCP(int a[], int n){  // ham xuat so chinh phuong
	for(int i=0;i<n;i++){
		if(SCP(a[i])){
			cout <<a[i]<<" ";
		}
	}
}
int SDX(int n){    // ham kiem tra xem co phai la so doi xung khong
	int a=n;
	int b=0;
	while(n != 0){
		int c=n%10;
		b=b*10+c;
		n/=10;
	}
	return a==b;
}
void XuatSDX(int a[], int n){  // ham xuat so doi xung
	for(int i=0;i<n;i++){
		if(SDX(a[i])){
			cout <<a[i] <<" ";
		}
	}
}
void SXT(int a[], int n){   // xap xep mang tang dan
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	Xuat(a,n);
}
void SXG(int a[], int n){  // sap xep mang giam dan
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	Xuat(a,n);
}
int Tang(int a[], int n){   //ham kiem tra mang tang
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			return false;
		}
	}
	return true;
}
int Giam(int a[], int n){   //ham kiem tra mang giam
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			return false;
		}
	}
	return true;
}
void inTG(int a[], int n){   //in ra rang hoac giam
	if(Tang(a,n)){
		cout <<"mang tang";
	}else if(Giam(a,n)){
		cout <<"mang giam";
	}else{
		cout <<"mang vua tang vua giam";
	}
}
void DNM(int a[], int n){   //ham dao nguoc mang
	for(int i=0;i<n/2;i++){
		swap(a[i],a[n-i-1]);
	}
	Xuat(a,n);
}
int SL(int n){      //kiem tra so le
	return n%2 != 0;
}
int XuatSL(int a[], int n){ //xuat so le
	int s=0;
	for(int i=0;i<n;i++){
		if(SL(a[i])){
			s+=a[i];
		}
	}
	return s;
}
int SC(int n){   //kiem tra so chan
	return n%2==0;
}
int XuatSC(int a[], int n){   // xuat so chan
	int s=0;
	for(int i=0;i<n;i++){
		if(SC(a[i])){
			s+=a[i];
		}
	}
	return s;
}
int SLN(int a[], int n){  //in ra so lon nhat trong mang
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int SNN(int a[], int n){  //in ra so nho nhat trong mang
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<max){
			max=a[i];
		}
	}
	return max;
}
int tongUoc(int n) {   //tinh tong cac uoc trong mang
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong;
}
int main(){
	int n;
	cout <<"nhap so luong phan tu trong mang:";
	cin >> n;
	int a[n];
	cout <<"nhap cac phan tu trong mang:";
	Nhap(a,n);
	cout <<"cac phan tu trong mang la:";
	Xuat(a,n);
	cout<<endl;
	cout<<"mang sau khi dao nguoc:";
	DNM(a,n);
	cout << endl;
	cout <<"cac so nguyen to trong mang la:";
	XuatSNT(a,n);
	cout<<endl;
	cout<<"cac so chinh phuong trong mang la:";
	XuatSCP(a,n);
	cout<<endl;
	cout<<"cac so doi xung trong mang la:";
	XuatSDX(a,n);
	cout<<endl;
	cout<<"sap xep mang tang dan la:";
	SXT(a,n);
	cout<<endl;
	cout<<"sap xep mang giam dan la:";
	SXG(a,n);
	cout<<endl;
	inTG(a,n);
	cout<<endl;
	cout<<"tong cac so le trong mang la:"<<XuatSL(a,n);
	cout<<endl;
	cout<<"tong cac so chan trong mang la:"<<XuatSC(a,n);
	cout<<endl;
	cout<<"so lon nhat trong mang la:"<<SLN(a,n);
	cout << endl;
	cout <<"so nho nhat trong mang la:"<<SNN(a,n);
	cout<<endl;
	cout<<"tong cac uoc so trong mang:" <<tongUoc(n);
	}
