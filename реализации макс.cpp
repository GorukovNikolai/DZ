#include<iostream>
using namespace std;
class MaxMethods {
public:
	int Max(int a, int b) {
		if (a > b) {
			return a;
		}
		else { return b; };
	
	}
	int Max(int a, int b, int c) {
		return Max(Max(a, b), c);
	}
	int Max(int arr[], int n) {
		int max = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	MaxMethods m;
	cout << "Максимум 2 и 5: " << m.Max(2, 5) << endl;
	cout << "Максимум 10 и 11 и 15: " << m.Max(10, 11, 15) << endl;
	int arr[] = { 2 ,5 , 6 , 3 , 8 };
	cout << "Максимум в массиве: " << m.Max(arr, 5) << endl;
	return 0;

}