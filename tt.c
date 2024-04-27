#include <iostream>

struct A{
    A(){

    }

    void aa(){
        std::cout << "aa" << std::endl;

    };

    int c = 5;
};

void foo(A in){
    in.aa();

}

#include <vector>
std::vector<std::pair<int, int>> N;

int main(){
    auto a = A();

    a.aa();

    auto j = N;

    auto b = &a;

    foo(*b);

}