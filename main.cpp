#include <iostream>
#include "Stack.hpp"


int main() {
    using Type = short;
    const std::vector<Type> list {1, 2, 3};

    // FILO : First In Last Out
    Containers::Stack<Type> stack;
    for (const auto& val : list) {
        stack.push(val);
    }
    std::cout << "FILO Stack: " << stack.size() << '\n';
    std::cout << stack.pop() << " removed" << '\n';
    for (const auto& val : stack) {
        std::cout << val << " viewed" << '\n';
    }

    std::cout << '\n';

    // FIFO : First In First Out
    Containers::Queue<Type> queue;
    for (const auto& val : list) {
        queue.push(val);
    }
    std::cout << "FIFO Queue: " << queue.size() << '\n';
    std::cout << queue.pop() << " removed" << '\n';
    for (const auto& val : queue) {
        std::cout << val << " viewed" << '\n';
    }

    std::cout << '\n';

    // Generic Monoid
    std::cout << "Monoid: ";
    Containers::Monoid<int> monoid{0};
    monoid = monoid.set(42).set(86);
    std::cout << monoid.get() << '\n';

    // Generic Monad
    std::cout << "Monad: ";
    Containers::Monad<int> monad{0};
    monad = monad.set(42).set(86);
    std::cout << monad.get() << '\n';
}
