#include <iostream>

int main() {
    
    int n,t;
    std::cin >> n >> t;

    int arr[2*n];

    for(int i=0; i<2*n; i++){
        std::cin >> arr[i];
    }

    for(int i=0; i<t; i++){
        int tmp = arr[2*n-1];
        for(int j=2*n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = tmp;
    }

    for(int i=0; i<2*n; i++){
        if(i == n){
            std::cout << '\n';
        }
        std::cout << arr[i] << ' ';
    }

    return 0;
}