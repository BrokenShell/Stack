#include <iostream>
#include "Stack.hpp"


int main() {
    using F = Containers::Monad<short>;
    const std::vector<F> list {F(1), F(2), F(3)};

    // FILO : First In Last Out
    Containers::Stack<F> stack;
    for (const auto& val : list) {
        stack.push(val);
    }
    std::cout << "FILO Stack: " << stack.size() << '\n';
    std::cout << stack.pop().get() << " removed" << '\n';
    for (const auto& val : stack) {
        std::cout << val.get() << " viewed" << '\n';
    }

    std::cout << '\n';

    // FIFO : First In First Out
    Containers::Queue<F> queue;
    for (const auto& val : list) {
        queue.push(val);
    }
    std::cout << "FIFO Queue: " << queue.size() << '\n';
    std::cout << queue.pop().get() << " removed" << '\n';
    for (const auto& val : queue) {
        std::cout << val.get() << " viewed" << '\n';
    }
}