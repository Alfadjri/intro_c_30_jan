#include<iostream>
using namespace std;

void print_data(string pesan , int arr[], int n){
    cout << pesan << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}
void generate_random_arry(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] = rand() % 100  + 1;
    }
}

void bubbleSort(int arr[],int n){
    for(int i = 0 ; i < n- 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int index = i;
        for(int j = i + 1 ; j  < n ; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;

    }
}

int main(){
    int n;
    cout << "Masukan jumlah data yang akan di generate : ";
    cin >> n;
    int arr[n];
    generate_random_arry(arr,n);
    print_data("Data sebelum di random : ",arr,n);
    // bubbleSort(arr,n);
    selectionSort(arr,n);
    print_data("Data setelah di urutakan : ",arr,n);
    return 0;
}