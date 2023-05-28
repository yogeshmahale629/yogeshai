#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_set>

using namespace std;
void bfs(vector<vector<int>>& graph,int start){
    unordered_set<int> visited;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int vertex=q.front();
        q.pop();
        if(visited.find(vertex)==visited.end()){
            cout<<vertex<<" ";
            visited.insert(vertex);
        }
        for(int neigbhour:graph[vertex]){
            if(visited.find(neigbhour)==visited.end()){
                q.push(neigbhour);
            }
        }

    }  
}


int main(){
    vector<vector<int>> graph={
        {1, 2},         // Node 0
        {0, 3, 4},      // Node 1
        {0, 5},         // Node 2
        {1},            // Node 3
        {1, 5},         // Node 4
        {2, 4}          //
    };
    cout<<"enter a starting vertex"<<endl;
    int start;
    cin>>start;
    cout << "BFS Traversal: "<<" ";

    bfs(graph, start);
    cout << endl;
    return 0;


}