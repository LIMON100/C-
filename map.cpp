#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
	map<string,int>m;
	map<string,int>::iterator it;
	m["limon"]=18;
	m["Asif"]=41;
	
	m.insert(make_pair("socco",16));
	
	///cout<<m["socco"]<<endl;
	
	for(it=m.begin();it!=m.end();++it)
	{
	      cout<<it->first<<" "<<it->second<<endl;
     }
	return 0;
	
}
