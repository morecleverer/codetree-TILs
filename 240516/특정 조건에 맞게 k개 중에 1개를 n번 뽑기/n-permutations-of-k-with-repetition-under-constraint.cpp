#include <iostream>
#include <vector>

int k,n,s=1;
std::vector<int> v;


void f(int a){

    if(a>n){
        for(int i=0; i<v.size(); i++){
            std::cout << v[i] << ' ';
            
        }
        std::cout << '\n';
        return;
    }

    for(int i=1; i<=k; i++){
        
        if(a > 2){
            if(v[a-2] == i && v[a-3] == i){
                continue;
            }
        }

        v.push_back(i);
        f(a+1);
        v.pop_back();
    }

    return;


}



int main() {
    

    std::cin >> k >> n;

    f(1);


    


    return 0;
}