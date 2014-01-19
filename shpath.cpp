#include <cstdio>
using namespace std;
struct node
{
	char name[100];
	int p;
}city;
typedef struct node node;
node citylist[10001];
int adjlist[10001][10001];
int weight[10001][10001];
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i = 1; i <= n; i++)
		{
			scanf("%s",city.name);
			scanf("%d",city.p);
			citylist[i] = city;
			for(j = 0; j < city.p; j++)
			{
				scanf("%d",&adjlist[i][j]);
				scanf("%d",&weight[i][adjlist[i][j]]);
			}
		}
	}
}