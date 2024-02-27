#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+5;
vector<int>G[mx];
bool vis[mx];

bool BFS(int src,int des){

  for(int i=0;i<mx;i++){
    vis[i]=0;
  }

  queue<int>Q;
  Q.push(src);
  vis[src]=1;

  while(!Q.empty()){
    int u=Q.front();
    Q.pop();
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis[v]==0){
            vis[v]=1;
            Q.push(v);
        }
    }
  }

return vis[des];
}


int main(){

   int nodes,edges;
   scanf("%d%d",&nodes,&edges);
   while(edges--){
      int u,v;
      scanf("%d%d",&u,&v);
      G[u].push_back(v);
      G[v].push_back(u);
   }
   int src,des;
   scanf("%d%d",&src,&des);

   bool res=BFS(src,des);

   if(res){
     printf("true\n");
   }
   else{
     printf("false\n");
   }

return 0;
}
