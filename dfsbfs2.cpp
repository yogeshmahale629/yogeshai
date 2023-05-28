#include<iostream>
#include<vector>
#include<stack>
#include<unordered_set>
using namespace std;
void dfs(vector<vector<int>>& graph,int start){
    unordered_set<int> visited;
    stack<int> stk;
    stk.push(start);
    while(!stk.empty()){
        int vertex=stk.top();
        stk.pop();
        if(visited.find(vertex)==visited.end()){
            cout<<vertex<<" ";
            visited.insert(vertex);
        }
        for(int neigbhour:graph[vertex]){
                    if(visited.find(neigbhour)==visited.end()){
                        stk.push(neigbhour);
                        
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
        {2, 4}   
    };
    cout<<"enter starting vertex";
    int start;
    cin>>start;
    cout<<"dfs traversal is"<<" ";
    dfs(graph,start);
    return 0;

}