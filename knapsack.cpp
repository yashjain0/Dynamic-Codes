#include<bits/stdc++.h>

int static dp[102][1002];
memset(t, -1, sizeof(t));

int knapsack(int n, int W, int wt[], int val[])
{
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<W+1;j++)
		{
			if(wt[i-1]<=j)
			t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
			//for subset sum-> t[i][j]=t[i][j-arr[i-1]]||t[i-1][j];first column '1' and first row '0'
			//for counting subset of same sum-> t[i][j]=t[i][j-arr[i-1]]+t[i-1][j];
			else
			t[i][j]=t[i-1][j]
		}
	}
	return t[n][W];
}

int main()
{
	for(int i=0;i<n;i++)
	{
		dp[i][0]=0;
	}
	for(int j=0;j<W;j++)
	{
		dp[0][j]=0;
	}
}
