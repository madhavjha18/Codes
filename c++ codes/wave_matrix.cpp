
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//    vector<vector<int>>matrix={{3,6,4,2},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
//    int j=0;
//    for(int i=0;i<matrix.size();i++)
//    {
//        if(j==0 || j==-1)
//        {
//            for(j=0;j<matrix[0].size();j++)
//            {
//                cout<<matrix[j][i]<<" ";
               
//            }
           
//            continue;
//        }
//        if(j==matrix[0].size())
//        {
//            for(j=matrix[0].size()-1;j>=0; j--)
//            {
//                cout<<matrix[j][i]<<" ";
              
//            }
//        }   
//    }

//     return 0;
// }
int main()
{
	vector<vector<int>>matrix= {{3,6,4,2},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
	int j=0;
	for(int i=0; i<matrix.size(); i++)
	{
		if(i%2==0)
		{
			for(j=0; j<matrix[0].size(); j++)
			{
				cout<<matrix[j][i]<<" ";

			}

			
		}
		else
		{
			for(j=matrix[0].size()-1; j>=0; j--)
			{
				cout<<matrix[j][i]<<" ";

			}
		}
	}

	return 0;
}