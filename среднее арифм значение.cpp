#include<iostream>
using namespace std;
class AverageMethods {
public:
	float Aver(int arr[], int n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
		}
		return sum / n;
	}
	float Aver(float arr[], float n) {
		float sum = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
		}
		return sum / n;
	}

};
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите размер массива с int: ";
	cin >> n;
	int* Arr = new int[n];
	cout << "Вводим массив: ";
	for (int i = 0; i < n; i++) {
		cin >> Arr[i];
	}
	float m;
	cout << "Введите размер массива с float: ";
	cin >> m;
	float* Arr1 = new float[m];
	cout << "Вводим массив: ";
	for (int i = 0; i < m; i++) {
		cin >> Arr1[i];
	}
	AverageMethods av;
	cout << "c int: " << av.Aver(Arr, n) << endl;
	cout << "С float: " << av.Aver(Arr1, m) << endl;
	return 0;

}