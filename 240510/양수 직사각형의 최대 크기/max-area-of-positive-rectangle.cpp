#include <iostream>

int main() {
    int n,m;
    std::cin >> n >> m;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            std::cin >> arr[i][j];
        }
    }

    int mx = 0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){

            if(arr[i][j] < 0){
                continue;
            }
            
            

            for(int c = 1; c<=m-i; c++){
                for(int r=1; r<=n-j; r++){

                    bool isOk = true;

                    for(int s = i; s<i+c; s++){
                        for(int w = j; w<j+r; w++){
                            if(arr[s][w] < 0){
                                isOk = false;
                                break;
                            }
                        }
                    }

                    if(isOk){
                        mx = std::max( mx , c*r);
                    }





                }
            }





        }
    }
    if(mx > 0)
        std::cout << mx;
    else
        std::cout << -1;
    return 0;
}