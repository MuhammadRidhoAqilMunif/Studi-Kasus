#include<iostream>
using namespace std;

int main(){
	int total, diskon, totalHarga, jmlGor, totGor, jmlBak, totBak;
	int hargaGor = 17000, hargaBak = 21000;
	
	cout << "-----------------------------" << endl;
	cout << "      KEDAI AYAM WENAK" << endl;
	cout << endl;
	cout << "Ayam Goreng" << endl;
	cout << "Harga = Rp. 17000" << endl;
	cout << "Ayam Bakar" << endl;
	cout << "Harga = Rp. 21000" << endl;
	cout << "------------------------------" << endl;
	cout << "Jumlah ayam goreng = ";
	cin >> jmlGor;
	totGor = 17000 * jmlGor;
	cout << "Harga = " << totGor << endl;
	cout << "Jumlah ayam bakar = ";
	cin >> jmlBak;
	totBak = 21000 * jmlBak;
	cout << "Harga = " << totBak << endl;
	cout << "------------------------------" << endl;
	cout << "\n";
	cout << "==========================================================" << endl;
	cout << "                     STRUK PEMBELIAN         " << endl;
	cout << "==========================================================" << endl;
	cout << "Qty" << "   Menu   " << "    Harga   " << "   Jumlah Harga   " << endl;
	cout << jmlGor << "   Ayam Goreng   " << hargaGor << "\t\t" << totGor << endl;
	cout << jmlBak << "   Ayam Bakar   " << hargaBak << "\t" << totBak << endl;
	total = totGor + totBak;

	if (total > 45000){	
		cout<<"anda mendapat potongan 10% dari pembelian > Rp45.000"<<endl;
		cout<<"--------------------------------------------------------"<<endl;
		diskon = (10/100) * total;
		totalHarga = total - diskon;
		cout<<"  TOTAL HARGA = Rp. " << totalHarga << endl;
		cout<<"======================================================="<<endl;
	}
	else
	{
		cout<<"anda tidak mendapat potongan karna pembelian <Rp 45.000"<<endl;
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"  TOTAL HARGA = Rp. " << total <<endl;
		cout<<"======================================================="<<endl;
	}
	return 0;
}
