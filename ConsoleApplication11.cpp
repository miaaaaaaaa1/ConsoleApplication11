#include <iostream>
using namespace std;

//1
bool isInArray(int* array, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int M, N;

    cout << "Enter the size of the array A (M): ";
    cin >> M;
    cout << "Enter the size of the array B (N): ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Enter the elements of array A:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter the elements of array B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int* tempC = new int[M];
    int sizeC = 0; 

    for (int i = 0; i < M; i++) {
    
        if (!isInArray(B, N, A[i]) && !isInArray(tempC, sizeC, A[i])) {
            tempC[sizeC] = A[i];
            sizeC++;
        }
    }

    int* C = new int[sizeC];
    for (int i = 0; i < sizeC; i++) {
        C[i] = tempC[i]; 
    }

    cout << "Array C containing elements of array A that are not included in array B, without repetition: " << endl;
    for (int i = 0; i < sizeC; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] tempC;
    delete[] C;

}
