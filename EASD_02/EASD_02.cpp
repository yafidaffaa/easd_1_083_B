/*1.	Dalam pemrograman komputer, algoritma digunakan untuk memecahkan berbagai masalah, seperti pengurutan data, pencarian data, optimisasi, dan banyak lagi. 
		Dengan menggunakan algoritma, programer dapat membuat program yang lebih efisien, dapat diandalkan, dan mudah dipelajari dan dimodifikasi.
		Algoritma itu seperti resep masak, kita butuh resep untuk memasak makanan yang enak dan sama halnya dengan algoritma, kita butuh langkah-langkah yang 
		terstruktur untuk menyelesaikan masalah dengan benar dan efisien. Tanpa algoritma, seperti memasak tanpa resep, kita mungkin bisa mendapatkan hasil yang 
		buruk atau tidak konsisten.*/
/*2.	Static (Array) dan Dynamic (Linked List)*/
/*3.	Ukuran Input, Kompleksitas Algoritma, Jenis Operasi, Lingkungan Eksekusi, Kualitas Implementasi*/
/*4.	Jika datanya cukup besar, maka algoritma pengurutan seperti Quick Sort bisa menjadi pilihan yang baik selain Merge Sort. Algoritma Quick Sort memiliki
		kompleksitas waktu yang sama dengan Merge Sort, yaitu O(n log n), namun terkadang dapat lebih cepat karena menggunakan pendekatan yang berbeda. Merge Sort memiliki
		kompleksitas waktu yang sama dengan Quick Sort, namun lebih cocok digunakan untuk mengurutkan data dalam jumlah yang sangat besar. */
/*5.	Algoritma Bubble Sort, Selection Sort, Insertion Sort, dan Shell Sort memiliki kompleksitas waktu O(n^2), yang termasuk dalam kategori algoritma quadratic. 
		Sedangkan Merge Sort dan Quick Sort memiliki kompleksitas waktu O(n log n), yang termasuk dalam kategori algoritma loglinear.*/
//Berikut adalah program merge sort

#include <iostream>
using namespace std;

void merge(int yafi[], int low, int mid, int high) {
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int* L = new int[n1];
	int* R = new int[n2];

	for (int i = 0; i < n1; i++) {
		L[i] = yafi[low + i];
	}
	for (int YA = 0; YA < n2; YA++) {
		R[YA] = yafi[mid + 1 + YA];
	}

	int i = 0;
	int YA = 0;
	int k = low;

	while (i < n1 && YA < n2) {
		if (L[i] <= R[YA]) {
			yafi[k] = L[i];
			i++;
		}
		else {
			yafi[k] = R[YA];
			YA++;
		}
		k++;
	}

	while (i < n1) {
		yafi[k] = L[i];
		i++;
		k++;
	}
	while (i < n2) {
		yafi[k] = R[YA];
		YA++;
		k++;
	}
}

void mergeSort(int yafi[], int low, int high) {
	
}