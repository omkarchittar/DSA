// two pointers approach

// this code won't work cos elements in a vector are pushed
// Issues
// Indexing error: In the merge function, you are using the wrong indices when accessing elements from vectors a and b. 
// Instead of a[j] and b[j], it should be a[i] and b[j] respectively.

// Incorrect condition: In the merge function, the condition a[j] < b[j] should be a[i] < b[j] because you are comparing elements from different vectors.

// Incorrect indexing for vector c: In the merge function, you are trying to assign values to vector c using the index c[k]. 
// However, since c is initially empty, you should use the push_back function to add elements to the end of the vector.

//SOLUTION : define size of the vect
#include<iostream>
#include<vector>

std::vector<int> merge(std::vector<int>& a, int n, std::vector<int>& b, int m) {
    std::vector<int> c(10);
    int i = 0, j = 0;
    int k = 0;

    while(i<n && j<m) {
        if(a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        }
        else {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    
    // remaining elements from first array:
    while(i<n) {
        c[k]=a[i];
        k++;
        i++;
    }

    // remaining elements from second array
    while(j<m) {
        c[k]=b[j];
        k++;
        j++;
    }
    return c;
}

void print(std::vector<int>& v) {
    for(int i:v) {
        std::cout<<i<<" "; 
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> a{1,3,5,7,9};
    std::vector<int> b{2,4,6};
    std::vector<int> c(10);

    c = merge(a, a.size(), b, b.size());

    print(c);
}