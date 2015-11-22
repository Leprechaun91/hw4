#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
using namespace std;

void reading(double* const p, const int N, const string fname){
	ifstream in(fname.c_str());
	
	for(int i = 0; i<N;i++){
		
		in >> p[i];
	}
	in.close();
}

void filter(double* p, const int N){

double temp = (p[1-1]+p[1]+p[1+1])/3, temp2=0;
for(int i = 2; i<N-1;i++){
	temp2 = (p[i-1]+p[i]+p[i+1])/3;
	p[i-1]=temp;
	temp = temp2;

}
}

int main(void)
{
	const int N= 237;
	int fgrad;
	const string filename = "noisy.txt";
	double* p = new double[N];

	reading(p, N, filename);
	cout <<"Filterunsgrad eingeben:";
	cin >> fgrad;
	for (int i = 0; i<fgrad; i++)
	filter(p,N);

	ofstream out("filtered2.txt");
	for(int i = 0;i < N; i++){
		//cout <<"p[" << i << "] = " << p[i] << endl;
	out << p[i]<<endl;
	}
	delete[] p;
	out.close();
	return 0;
}



