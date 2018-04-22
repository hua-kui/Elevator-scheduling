# Elevator-scheduling#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
using namespace std;
queue<int>destination; 
int cfloor=0;
int ji=1;
int indicator;//changxiang 1shang 0xia 
int dtime=0;
int n;
struct hehe{
	int time;
	int kai;
	int qu;
	int zhuang;
}cheng[1004];
void stop(){//停靠 /kaimen
    cout<<dtime<<" "<<cfloor<<endl;
	dtime++;
	destination.pop();
	//update();
}
void gofloor(int x){//去第X层 
	dtime+=abs(destination.front()-cfloor);
	cfloor=destination.front();
	stop();
}
void update(){//更新 
    
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
    cin>>cheng[i].time>>cheng[i].kai>>cheng[i].qu;
    destination.push(cheng[i].kai);
    destination.push(cheng[i].qu);   
     }
    while(destination.size()>0){
	if(cfloor==destination.front())
	destination.pop();
	else
	gofloor(destination.front());
	}

	return 0;
 } 
