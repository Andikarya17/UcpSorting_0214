// 1.Insertion Sort adalah algoritma yang bekerja dengan cara membandingkan beberapa elemen dalam daftar kemudian dimasukkan ke posisi yang tepat dalam daftar secara urut
// 2.Selection Sort adalah algoritma yang bekerja dengan cara membandingkan setiap elemen dalam daftar dengna elemen lainnya buat mencari elemen paling kecil, habis itu menukar elemen tersebut dengan elemen pada posisi yang sesuai. Proses ini terus berlanjut hingga semua array selesai diurutkan
// 3. menurut saya dengan cara meninjau atau memerhatikan beberapa kali operasi tersebut dilakukan dalam skenario terbaik, terburuk, dan rata-rata
// 4 berikut jawaban untuk nomor 4

#include <iostream>
using namespace std;

int i, j, n, temp;
int arr[14];

void input(int AndikaArya[],int n){ 
    cout << "Enter " << n << "Number :\n";
    for (int i = 0; i < n; i++){
        cin >> AndikaArya[i];
    }
}

void selectionSort(int AndikaArya[], int n) {
	for (int j = 0; j <= n - 2; j++) {
		int min_index = j;
		for (int i = j + 1; i < n; i++) {
			if (AndikaArya[i] < AndikaArya[min_index]) {
				min_index = i;
			}
		}
		int temp = AndikaArya[j];
		AndikaArya[j] = AndikaArya[min_index];
		AndikaArya[min_index] = temp;
	}
}

void display(int AndikaArya[], int n) {
	cout << "Data terurut :\n";
	for (int i = 0; i < n; i++) {
		cout << AndikaArya[i] << " ";
	}
	cout << endl;
}

int main() {
	
	int AndikaArya[14];
	int n;

	cout << "Masukkan jumlah data : ";
	cin >> n;
	while (n > 14) {
		cout << "Jumlah data terlalu banyak, masukkan ulang : ";
		cin >> n;
	}
	input(AndikaArya, n);
	selectionSort(AndikaArya, n);
	display(AndikaArya, n);

	return 0;
}
