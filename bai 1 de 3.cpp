#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <stack>
#include <vector>
using namespace std;
ifstream f("D:/Nhaptufile.txt");
ofstream g("D:/Xuattufile.txt"); /*truy xuat du lieu*/
class DB{
	public:
		string Ten;
		string Gioitinh;
		string SDT;
		string Email;
		string DiaChi;
			Nhaptufile(){
				string s;
				getline(f,s); Ten = s;
				getline(f,s); Gioitinh = s;
				getline(f,s); SDT = s;
				getline(f,s); Email = s;
				getline(f,s); DiaChi = s;
			}
			NhapDB(){
				cout << "Nhap ten: "; cin>>Ten;
				cin.sync();
				cout <<"Nhap gioi tinh"; cin>> Gioitinh;
				cin.sync();
				cout << " Nhap sdt "; cin>> SDT;
				cin.sync();
				cout << " Nhap email "; cin>> Email;
				cin.sync();
				cout <<" Nhap dia chi "; cin>> DiaChi;
				cin.sync();
			}
			Xuattufile(){
				g<< Ten << "\t" << GioiTinh <<"\t" <<SDT << "\t" <<Email << "\t";
			}
			Xuat()
			{
				cout << Ten << "\t" << GioiTinh <<"\t" <<SDT << "\t" <<Email << "\t";
			}
};
class DBDT{
	vectoc <DB>H;
	vectpr <DB>K;
	public:
	void Nhap DB(){
		int n;
		string s;
		getline(f,s); n=atoi(s.c_str());
		H.resize (n);
		for(int i=0 ; i<H.size();i++)
			H[i].Nhaptufile();
	}
	void Them(){
		DB d;
		int n;
		cin>> n;
		while ( n== 0){
			d.NhapDB();
			d.Xuat();
			H.push_back(d);
			K.push_back(d);
		}
	}
	void XuatThem(){
		printf(K);
	}
	void Xoa(){
		string s;
		getline(cin,s);
		for(int i=0; i < H.size(); i++)
			if(k.compare(H[i].Ten) ==0 )
				H[i].Xuat();
	}
	void Tim (){
		string k;
		getline(std::cin,k);
		for ( int i = 0; i < H.size() ; i++)
			if(k.compare (H[i].Ten)==0)
				H[i].Xuat();
	}
	void chon(){
		int n;
		cin >> n;
		cout <<" Nhap gia tri N =";
	}
};
int main
{
	DBDT db;
	db.nhapDB();
	db.Them();
	db.Tim();
}
