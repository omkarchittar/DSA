// Rat in a maze problem

// 1 -> open path
// 0 -> closed path

// source = (0, 0)
// destination = (n-1, n-1)

// up -> (x--, y)
// down -> (x++, y)
// left -> (x, y--)
// right -> (x, y++)

// visited array

// conditions for movement 
// 1. matrix ke andar hona chahiye
// 2. m[k][l] = 1
// 3. visited[k][l] = 0

// move - visited[k][l] = true;
// when function call returns - visited[k][l] = false;

#include<iostream>
#include<vector>
#include<string>
#include<array>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m) {
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1) {
        return true;
    }
    else {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path) {
    // you have reached x,y here
    // base case
    if(x==n-1 && y==n-1) {
        ans.push_back(path);
        return ;
    }

    visited[x][y] = 1;
    // 4 choices - D,L,R,U

    //down 
    int newx = x+1;
    int newy = y;
    if(isSafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); 
    }

    //left 
    newx = x;
    newy = y-1;
    if(isSafe(newx, newy, n, visited, m)) {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); 
    }

    //Right 
    newx = x;
    newy = y+1;
    if(isSafe(newx, newy, n, visited, m)) {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); 
    }

    //up 
    newx = x-1;
    newy = y;
    if(isSafe(newx, newy, n, visited, m)) {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back(); 
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;

    if(m[0][0] == 0) {
        return ans;
    }

    int srcx = 0;
    int srcy = 0;

    // creating a visited array
    vector<vector<int>> visited = m;
    // initialize it with zeroes
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            visited[i][j] = 0;
        }
    }  

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<vector<int>> m = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans {};

    ans = findPath(m, 4);

    for(int i=0; i<4; i++) {
            cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}