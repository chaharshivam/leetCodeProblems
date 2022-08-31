class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
		queue<pair<int,int>>q;
	set<vector<int>>ans;
	map<pair<int,int>,bool>atlantic,pacific;

	for(int count=0;count<heights[0].size();++count)
		atlantic[{0,count}]=true,q.push({0,count});

		for(int count =0;count<heights.size();++count)
				atlantic[{count,0}]=true,q.push({count,0});


	int dir[4][2]={{0,1},{1,0},{-1,0},{0,-1}};

	while(!q.empty())
	{
		int x = q.front().first;
		int y =  q.front().second;

		for(int count =0;count<4;++count)
		{
			int i = x+dir[count][0];
			int j = y+dir[count][1];

			if(i>=0 && j>=0 && i<heights.size() && j<heights[0].size() && !atlantic[{i,j}] && heights[i][j]>=heights[x][y])
			{
				atlantic[{i,j}]=1;
				q.push({i,j});
			}
		}
		q.pop();
	}

	 for(int count=0;count<heights[0].size();++count)
		pacific[{heights.size()-1,count}]=true,q.push({heights.size()-1,count});

	 for(int count=0;count<heights.size();++count)
	 pacific[{count,heights[0].size()-1}]=true,q.push({count,heights[0].size()-1});


	  while(!q.empty())
	{
		int x = q.front().first;
		int y =  q.front().second;
		if(atlantic[{x,y}])
			ans.insert({x,y});
		for(int count =0;count<4;++count)
		{
			int i = x+dir[count][0];
			int j = y+dir[count][1];

			if(i>=0 && j>=0 && i<heights.size() && j<heights[0].size() && !pacific[{i,j}] && heights[i][j]>=heights[x][y])
			{


				pacific[{i,j}]=1;
				q.push({i,j});
			}
		}
		q.pop();
	}

	return {ans.begin(),ans.end()};
} 

};