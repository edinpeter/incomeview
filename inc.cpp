#include <iostream>

using namespace std;

const int LOWER = 41;
const int ALL = 43;
const double PERCENTAGE_RAISE = 0.05;
const double upperReturn = 0.1;
const int billionaires = 20;

void checkMat(double** incomes){
	for(int i = 0; i < 42; i++){
		for(int q = 0; q < 2; q++){
			cout << incomes[i][q] << " ";
		}
		cout << endl;
	}
}

int main(){
	cout << "\n\n\n";
	double** incomes;
	
	incomes = new double*[ALL];

	int dollarCount = 2500;

	for(int i = 0; i < ALL; i++){
		incomes[i] = new double[2];
		incomes[i][0] = 0;
		incomes[i][1] = 0;
		if(i < 40){
			incomes[i][1] = dollarCount;
			dollarCount += 5000;
		}
		else{
			if(i == 40){
				incomes[i][1] = 225000;
			}
			if(i == 41){
				incomes[i][1] = 300000;
			}
		}
	}
	incomes[42][1] = 1000000000;
	incomes[42][0] = billionaires;

	int q = -1;

	incomes[q + 1][0] = 3.52;
	q++;
	incomes[q + 1][0] = 4.11;
	q++;
	incomes[q + 1][0] = 5.89;
	q++;
	incomes[q + 1][0] = 5.68;
	q++;
	incomes[q + 1][0] = 5.86;
	q++;
	incomes[q + 1][0] = 5.44;
	q++;
	incomes[q + 1][0] = 5.51;
	q++;
	incomes[q + 1][0] = 5.07;
	q++;
	incomes[q + 1][0] = 4.79;
	q++;
	incomes[q + 1][0] = 4.08;
	q++;
	incomes[q + 1][0] = 4.27;
	q++;
	incomes[q + 1][0] = 3.51;
	q++;
	incomes[q + 1][0] = 3.66;
	q++;
	incomes[q + 1][0] = 3.17;
	q++;
	incomes[q + 1][0] = 2.98;
	q++;
	incomes[q + 1][0] = 2.85;
	q++;
	incomes[q + 1][0] = 2.51;
	q++;
	incomes[q + 1][0] = 2.12;
	q++;
	incomes[q + 1][0] = 2.14;
	q++;
	incomes[q + 1][0] = 1.86;
	q++;
	incomes[q + 1][0] = 2.09;
	q++;
	incomes[q + 1][0] = 1.46;
	q++;
	incomes[q + 1][0] = 1.42;
	q++;
	incomes[q + 1][0] = 1.30;
	q++;
	incomes[q + 1][0] = 1.27;
	q++;
	incomes[q + 1][0] = 1.04;
	q++;
	incomes[q + 1][0] = 1.00;
	q++;
	incomes[q + 1][0] = 0.76;
	q++;
	incomes[q + 1][0] = 0.85;
	q++;
	incomes[q + 1][0] = 0.74;
	q++;
	incomes[q + 1][0] = 0.96;
	q++;
	incomes[q + 1][0] = 0.61;
	q++;
	incomes[q + 1][0] = 0.58;
	q++;
	incomes[q + 1][0] = 0.50;
	q++;
	incomes[q + 1][0] = 0.51;
	q++;
	incomes[q + 1][0] = 0.44;
	q++;
	incomes[q + 1][0] = 0.38;
	q++;
	incomes[q + 1][0] = 0.30;
	q++;
	incomes[q + 1][0] = 0.31;
	q++;
	incomes[q + 1][0] = 0.26;
	q++;
	incomes[q + 1][0] = 1.90;
	q++;
	incomes[q + 1][0] = 2.32;	

	//Scale for population per bracket
	for(int i = 0; i < ALL; i++){
		incomes[i][0] *= 3000000;
	}

	long long lowerSum = 0;
	int population = 0;
	for(int i = 0; i < LOWER; i++){
		population += incomes[i][0];
		lowerSum += incomes[i][0] * (PERCENTAGE_RAISE) * incomes[i][1];
	}
	cout << "Dollar amount of " << PERCENTAGE_RAISE * 100 << "% raise: $" << lowerSum << endl;
	cout << "Lower population: " << population << endl;
	int top = incomes[41][0];
	long long upperSum = 0;
	upperSum = incomes[LOWER][0] * upperReturn * incomes[LOWER][1];
	cout << "Dollar amount of " << upperReturn * 100 << "% investment return: $" << upperSum << endl;
	cout << "Upper population: " << incomes[41][0] << endl;
	cout << "Lower wealth increase - Upper wealth increase: " << lowerSum - upperSum << endl;
	cout << "\n\n\t\t\t ===== \t\t\n\n";
	cout << "\t\t Including " << billionaires << " Billionaires: \n\n";
	
	upperSum = incomes[LOWER][0] * upperReturn * incomes[LOWER][1];
	upperSum += incomes[42][0] * upperReturn * incomes[42][1];
	cout << "Dollar amount of " << upperReturn * 100 << "% investment return: $" << upperSum << endl;
	cout << "Upper population: " << incomes[41][0] << endl;
	cout << "Lower return - Upper return: " << lowerSum - upperSum << endl;
	cout << "\n Percentage of wealth owned by Top Bracket + Billionaires: " << endl;
	double topPercentage = upperSum / (upperSum + lowerSum);
	cout << "\t\t" << topPercentage << endl;
	cout << "======================================================";
	cout << "\n\n\n";
}