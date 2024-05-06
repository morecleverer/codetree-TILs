#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cin >> arr[i][j];
        }
    }

    int m=0;

    for(int i=0; i<n-2; i++){
        for(int j=0; j<n-2; j++){
            int s = arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i+2][j+1] + arr[i][j+2] + arr[i+1][j+2] + arr[i+2][j+2];
            
            m = std::max(m, s);
        }
    }

    std::cout << m;
    return 0;
}