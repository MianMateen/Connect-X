#include <iosteam>
#include <array>
#include <vector>

using namespace std;

class grid{
public:
	int setx(int num){
		x = num;
	}

	int setx(int num){
		y = num;
	}

	vector<string> setx(vector<string> outlay){
		layout = outlay;
	}



private:
	int x = 0;
	int y = 0;
	vector<string> layout;
};
