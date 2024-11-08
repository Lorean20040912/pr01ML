#include <iostream>
#include <iomanip>
#define NMAX 24
using namespace std;


int main() {
	int i, n; //numarul de ore a plecare autobuselor
	int ora;//max -1, min 24
	int min, max;
	float media;
	int val = 12, mici, egale, mari;
	int dimineata, ziua, amiaza, seara, noaptea;
	

	system("color F0");
	cout << "Proiect nr.1, elaborat de M.L";
	cout << "Cate ore de plecare a rutierelor? ";
	cin >> n;
	min = NMAX + 1;
		max = 0;
		media = 0;
		mici = egale = mari = 0;
		for (i = 1; i <= n; i++) {
			do {
				cout << "Introduceti ora autobusului" << i << ": ";
				cin >> ora;
			} while ((ora < 0) || (ora > NMAX));
			if (ora < min) min = ora;
			if (ora > max) max = ora;
			if (ora < val) mici++;
			else if (ora > val)  mari++; 
			else egale++;
			if (ora <= 9) dimineata++;
			else if (ora <= 11) ziua++;
			else if (ora <= 14) amiaza++;
			else if (ora <= 19) seara++;
			else noaptea++;

			
		}
		media += n;
		cout <<"\n" << min;
		cout <<"\n" << max;
		cout <<"\n" << media;
		cout << "\n" << mici;
		cout << "\n" << mari;
		cout << "\n" << egale;

		
		
		

	
	return 0;
}