#include <iostream>
#include <vector>
using namespace std;


void reOrderArray(vector<int> &array) {
        int j;
        for(int i=0;i<array.size();i++)
            {
            if(array[i]%2==1)continue;
            for(j=i;j<array.size();j++)
                {
                if(array[j]%2==0)continue;
                else
					{
						int temp=array[j];
						for(int k=j;k>i;k--)
                    {
						array[k]=array[k-1];
					}
					array[i]=temp;
					break;
					}
            }
            if(j==array.size()) break;
        }
    }

int main()
{
	vector<int> A;
	for(int i=1;i<8;i++)
	{
		A.insert(A.end(),i);
	}
	reOrderArray(A);
	for(int i=0;i<7;i++)
	{
		cout<<A[i]<<" ";
	}
	
	return 0;

}
