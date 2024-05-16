#include <iostream>
#include <vector>

int n;
std::vector<int> v;
std::vector<int> check;


void f(int a){

    if(a>n){
        for(int i=0; i<n; i++){
            std::cout << v[i] << ' ';
        }
        std::cout << '\n';
    }


    for(int i=1; i<= n; i++){

        if(check[i-1]==0)
        continue;

        v.push_back(i);
        check[i-1] = 0;
        f(a+1);
        v.pop_back();
        check[i-1] = 1;
    }
}

int main() {
    
    std::cin >> n;

    for(int i=0; i<n; i++){
        check.push_back(1);
    }

    f(1);

    return 0;
}