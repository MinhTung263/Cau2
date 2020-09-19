#include <iostream>
#include <string>
using namespace std;
class Sach{
	protected:
		string TenSach,TacGia;
		int NamXB;
	public:
		void Nhap();
		void Hien();
		int lietke(int namxb);
		
};
class QLSach: public Sach{
	public:
		void Nhap();
		void Hien();
		int lietke(int namxb);
	
};

void Sach::Nhap(){
	fflush(stdin);
	cout<< "\t Ten sach: ";
	getline(cin,TenSach);
	cout<< "\t Tac gia: ";
	getline(cin,TacGia);
	cout<< "\t Nam xuat ban : ";
	cin>> NamXB;
}
void Sach::Hien(){
	cout<< " Ten sach: "<<TenSach<<" - Tac gia: "<<TacGia<<" - Nam xuat ban: "<<NamXB<<endl;
}
void QLSach::Nhap(){
	Sach::Nhap();
}
void QLSach::Hien(){
	Sach::Hien();
}

int QLSach::lietke(int namxb){
 	if(namxb==NamXB){
 		Sach::Hien();
 	}else{
 		return false;
	 }
}
int main(){
	QLSach s[100];
	int n;
	int namxb;
	cout<< "Nhap so luong sach:";
	cin>>n;
	cout<< "\t\t\t\t----- Nhap thong tin sach-----\n";
	for(int i=0;i<n;i++){
		cout<<" Sach thu ["<<i+1<<"]:\n";
		s[i].Nhap();
		cout<<endl;	
	}
	for(int i=0;i<n;i++){
		cout<< " Thong tin sach thu["<<i+1<<"] la: ";
		s[i].Hien();
	}
	cout<<"\n\n Nhap nam xuat ban: ";
	cin>>namxb;
	cout<<endl;
	for(int i=0;i<n;i++){
		s[i].lietke(namxb);
	}	
	
}
