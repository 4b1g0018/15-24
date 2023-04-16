#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
	string input,save;
	vector<string> count;
	
	getline(cin,input);
	istringstream cutStr(input);
	while(getline(cutStr,save,' '))
	{
		for(int j=0;j<save.length();j++)
		{
			save[j]=tolower(save[j]);
		}
		count.push_back(save); 
	}
	for(int i=count.size()-1;i>0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(count[i]==count[j]){count.erase(count.begin()+i);break;}
		}
	}
	for(int i=0;i<count.size();i++) 
	{
		if(i==count.size()-1)cout<<count[i]<<endl;
		else cout<<count[i]<<" ";
	}
	return 0;
	} 
