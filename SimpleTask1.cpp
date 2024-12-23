#include <iostream>
using namespace std;

#define N 5

int putNumber();
void swapNumber(int* fNumber, int* sNumber);
void ascSort(int* numArray);
void desSort(int* numArray);
int calSum(int* numArray);
double calAvg(int* numArray);
void printArr(int* numArray);

int main() {
	int numArray[5];

	cout << N << "개의 숫자를 입력해주세요.\n";
	for (int i = 0; i < N; i++)
		numArray[i] = putNumber();

	int selNum;
	cout << "숫자를 입력해주세요.\n1. 오름차순 2. 내림차순\n";
	cin >> selNum;

	if (selNum == 1) ascSort(numArray);
	if (selNum == 2) desSort(numArray);

	int sum = calSum(numArray);
	double avg = calAvg(numArray);

	printArr(numArray);

	cout << "숫자들의 합: " << sum << '\n' << "숫자들의 평균: " << avg << '\n';
}

int putNumber() {
	int num;
	cin >> num;

	return num;
}

void swapNumber(int* fNumber, int* sNumber) {
	int temp = *fNumber;
	*fNumber = *sNumber;
	*sNumber = temp;
}

void ascSort(int* numArray) {
	for(int i = 0; i < N; i++)
		for (int i = 0; i < N - 1; i++) 
			if (numArray[i] > numArray[i + 1])
				swapNumber(&numArray[i], &numArray[i + 1]);
}

void desSort(int* numArray) {
	for (int i = 0; i < N; i++)
		for (int i = 0; i < N - 1; i++)
			if (numArray[i] < numArray[i + 1])
				swapNumber(&numArray[i], &numArray[i + 1]);
}

int calSum(int* numArray) {
	int sum = 0;

	for (int i = 0; i < N; i++)
		sum += numArray[i];

	return sum;
}

double calAvg(int* numArray) {
	int sum = 0;

	for (int i = 0; i < N; i++)
		sum += numArray[i];

	return sum / (float)N;
}

void printArr(int* numArray) {
	for (int i = 0; i < N; i++)
		cout << numArray[i] << " ";
	cout << '\n';
}