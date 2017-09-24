#include <iostream>
#include <fstream>
#include <cmath>
#include <Windows.h>

using namespace std;

double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
	LARGE_INTEGER li;
	if (!QueryPerformanceFrequency(&li))
		cout << "QueryPerformanceFrequency failed!\n";

	PCFreq = double(li.QuadPart) / 1000.0;

	QueryPerformanceCounter(&li);
	CounterStart = li.QuadPart;
}
double GetCounter()
{
	LARGE_INTEGER li;
	QueryPerformanceCounter(&li);
	return double(li.QuadPart - CounterStart) / PCFreq;
}

int main(int argc, char *argv[]) {
	StartCounter();
	int n = strtol(argv[1], NULL, 10), i = 1;
	double x = atof(argv[2]), lastx = atof(argv[3]), y = 0, f = 1;
	ofstream fout(argv[4], ios_base::out);
	fout.close();
	fout.open("Performance.txt", ios_base::out);
	fout.close();
	while (x <= lastx+0.0005) {
		y = pow(1 + x, -0.5);
		fout.open(argv[4], ios_base::app);
		fout << "x = " << x << "\ty = " << y;
		fout.close();
		for (i = 2; i <= n; ++i) {
			double chsl = 1.0, znm = 1.0;
			for (size_t j = 1; j < i; ++j) {
				chsl *= (j * 2) - 1;
			}
			for (size_t k = 1; k < i; ++k) {
				znm *= k * 2;
			}
			if (i % 2 == 0) {
				chsl *= -1;
			}
			f += (chsl/znm)*pow(x, i - 1);
		}	
		fout.open(argv[4], ios_base::app);
		fout << "\tf = " << f << endl;
		fout.close();
		x += 0.005;
		f = 1;
	}
	fout.close();
	fout.open("Performance.txt", ios_base::app);
	fout << GetCounter() << "\n";
	fout.close();
	return 0;
}