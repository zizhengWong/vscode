#include<iostream>
#include<string>
#include<vector>


int main(){
    int b = 1;
    auto a = b+1;
    std::cout << a << std::endl;
    std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code"};
    int len = msg.size();
    std::cout << "长度" << len << std::endl;
    for (int i=0; i<4; i++){
        // ms.push_back("a");
        std::cout << i << std::endl;
    }

    return 0;
}