#include<iostream>
#include<array>

int main()
{
    std::array<int, 5> a = {5, 4, -1, 7, 8};
    std::array<int, 5> b = a;
    int n = a.size();
    // std::cout<<n<<std::endl;
    for(int i=0; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            for(int k=j; k<=n; k++){
                std::cout<<a[k]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    return 0;
}