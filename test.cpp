#include <iostream>
#include <functional>

using type_id = std::function<void()>;


void func1() {
    std::cout << "func1" << std::endl;
}

void func2() {
    std::cout << "func2" << std::endl;
}


int main(int argc, char *argv[]){
    std::cout << "Hello world" << std::endl;
    
    type_id id1 = func1; //std::function包装函数
    id1(); 

    return 0;
}