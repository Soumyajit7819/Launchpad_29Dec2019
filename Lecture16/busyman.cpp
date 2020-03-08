#include <iostream>
#include <vector>
using namespace std;
int maxActivities(vector<pair <int, int> >activities, int n){

	int numberOfActi = 1;
	int lastActivityEndTime = activities[0].first;
	for (int i = 1; i < n; ++i)
	{
		if(activities[i].second >= lastActivityEndTime){
			numberOfActi++;
			lastActivityEndTime = activities[i].first;
		}
	}
	return numberOfActi;

}
int main(int argc, char const *argv[])
{	
	int testcases;
	cin>>testcases;
	while(testcases-- ){
		int n;
		cin>>n;
		vector<pair <int, int> >activities;
		for (int i = 0; i < n; ++i)
		{
			int startTime, endTime;
			cin>>startTime>>endTime;
			activities.push_back(make_pair(endTime, startTime));
		}
		sort(activities.begin(), activities.end());
		cout<<maxActivities(activities, n)<<endl;

	}
	




	return 0;
}