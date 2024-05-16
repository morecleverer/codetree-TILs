#include <iostream>
#include <vector>


int n,m;
std::vector<int> v;

void f(int cur, int cnt){
    if(cnt > m )
        return;
    if(cur > n){
        if(cnt== m){
            for(int i=0; i< v.size(); i++){
                std::cout << v[i] << ' ';
            }
            std::cout << '\n';
        }
        return;
    }

    v.push_back(cur);
    f(cur+1, cnt+1);
    v.pop_back();

    f(cur+1,cnt);
        
}

int main() {


    std::cin >> n >> m;

    f(1,0);
    
    

    return 0;
}