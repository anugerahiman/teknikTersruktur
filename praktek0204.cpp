#include <iostream>
using namespace std;

int main(){	
	double LuasRumah = 42;
	double LantaiPkt = 193*1215;
	double Luas1Box = LantaiPkt*8/100000;
	double jumlahBoxP,BiayaP,BiayaP,BiayaPG,TotalB; (
	
	cout << "Luas Rumah 		: "<<LuasRumah<<" m2"<<endl;
	cout << "Luas 1 Box			: "<<Luas1Box<<" m2"<<endl;
	
	jumlahBoxP = LuasRumah/Luas1Box;
	cout <<"jumlah Box Parket	: "<<jumlahBoxP<<endl;
	
	BiayaP = jumlahBoxP*500;
	cout <<"Biaya parket (RP)	: "<<BiayaP<<endl;
	
	BiayaPG = LuasRumah*20;
	cout <<"Biaya Pasang (Rp) 	: "<<BiayaPG<<endl;
	
	TotalB = BiayaP+BiayaPG;
	cout <<"Total Biaya (Rp) 	: "<<TotalB<<endl;
}
