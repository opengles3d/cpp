#include <iostream>

void f() {}

template<typename T> 
void g(T x) {
    std::cout << x << " "; 
}

template<typename T, typename... Tails>
void f(T head, Tails... tail) {
    g(head);
    f(tail...);
}

int main(int argc, char** argv) {
    f(1, 2.2, "hello");
    std::cout << std::endl;
    f(0.2, 'c', "world");
    std::cout << std::endl;
}