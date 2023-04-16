#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main()
{
	string input,save;
	int wordsNum=0;
	map<char,int> wF;
	string w="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	
	getline(cin,input);
	istringstream cutStr(input);
	while(getline(cutStr,save,' '))
	{
		wordsNum++;//計算單字數 
		for(int j=0;j<save.length();j++)//統計字數 
		{
			if(wF.count(save[j])==0){wF.insert(make_pair(save[j],1));}
			else wF[save[j]]+=1;
		}
	}
	cout<<wordsNum<<endl;//輸出單字數 
	for(int k=0;k<52;k++)//調整為題目輸出順序(原順序為先大寫再小寫) 
	{
		for(map<char,int>::iterator p=wF.begin();p!=wF.end();p++)
		{
		if(w[k]==p->first&&p->second!=0)
		cout<<p->first<<" "<<":"<<" "<<p->second<<endl;
		}
	}
	return 0;
}
