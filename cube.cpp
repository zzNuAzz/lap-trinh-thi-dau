#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void printres(int m[]) {
    for(int i = 0; i < 7; i++) {
        cout << m[i] << " ";
    }
}

int main(){
	vector<int> diffOne;
	for(int i = 0; i < 3; i++){
		int a;
		cin >> a;
		if(a != 1){
			diffOne.push_back(a);
		}
	}
	int m[7];
    memset(m, 0, sizeof(m));
	if(diffOne.size() == 0){
        m[6] = 1;
		printres(m);
	}
	if(diffOne.size()==1){
        m[4] = diffOne[0]-2;
		m[5] = 2;
		printres(m);
	}
	if(diffOne.size()==2){
        m[2] = (diffOne[0]-2)*(diffOne[1]-2);
        m[3] = (diffOne[0]-2)*2+(diffOne[1]-2)*2;
        m[4] = 4;
		printres(m);
	}
	if(diffOne.size()==3){
        m[0] = (diffOne[0] - 2) * (diffOne[1] - 2) * (diffOne[2] - 2);
        m[1] = (diffOne[0] - 2) * (diffOne[1] - 2) * 2
                + (diffOne[1] - 2) * (diffOne[2] - 2) * 2
                + (diffOne[0] - 2) * (diffOne[2] - 2) * 2;
		m[2] = (diffOne[0] - 2) * 4 + (diffOne[1] - 2) * 4 
                + (diffOne[2] - 2 ) * 4;
        m[3] = 8;
        printres(m);
    }
	return 0;
	
	
	
	
	
	
	
	

}