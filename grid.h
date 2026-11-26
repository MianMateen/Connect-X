#include <iosteam>
#include <array>
#include <vector>
#include <string>

class grid{
public:
  int getx(){
    return x;
  }

  int gety(){
    return y;
  }

  grid(){
    int grid_size = 0;
    std::cout << "choose how large you want the grid";
    std::cin>> grid_size;
  }



private:
	int x = 0;
	int y = 0;
  bool mute = false;
  std::vector<std::vector<std::string>> layout;
};
