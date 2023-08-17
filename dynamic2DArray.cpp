// Dynamic 2D array - taking no odf rows and col values at run time
// int** arr = new int*[n]
// loop lagake new int[n];

#include<iostream>
#include<array>

int main() {

    int n, m;
    
    std::cout<<"Enter the number of rows: ";
    std::cin>>n;

    std::cout<<"Enter the number of Columns: ";
    std::cin>>m;

    int** arr = new int*[n];

    for(int i = 0; i<n; i++) {
        arr[i] = new int[m];
    }
    // done creating a 2D array

    std::cout<<"Enter the elements of the "<<n<<" x "<<m<<" matrix: ";
    // taking input
    for(int i=0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            std::cin>>arr[i][j];
        }
    } 

    // printing
    for(int i = 0; i<n; i++) {
        for(int j=0; j<m; j++) {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    // releasing memory 
    for(int i = 0; i<n; i++) {
        delete[] arr[i]; 
    }

    delete []arr;
}