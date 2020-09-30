#include <iostream>
#include "Stack.hpp"
#include "MonkeyTimer.hpp"

/*
        Example Container Usage
*/

int main() {
    using namespace Containers;
    std::cout << std::endl;

    { MonkeyTimer::ScopeTimer timer("\nContainers::Stack<Monad> Timer", 6);
        // FILO : First In Last Out
        const std::vector<Monad<short>> list {
                Monad<short>(1),
                Monad<short>(2),
                Monad<short>(3),
        };
        Stack<Monad<short>> stack;
        for (auto val : list) {
            stack.push(val);
        }
        std::cout << "FILO Stack: " << stack.size() << '\n';
        std::cout << stack.pop().get() << " removed" << '\n';
        for (const auto& val : stack) {
            std::cout << val.get() << " viewed" << '\n';
        }
    }

    std::cout << '\n';

    { MonkeyTimer::ScopeTimer timer("\nContainers::Stack<Monoid> Timer", 6);
        // FILO : First In Last Out
        const std::vector<Monoid<short>> list {
                Monoid<short>(1),
                Monoid<short>(2),
                Monoid<short>(3),
        };
        Stack<Monoid<short>> stack;
        for (auto val : list) {
            stack.push(val);
        }
        std::cout << "FILO Stack: " << stack.size() << '\n';
        std::cout << stack.pop().get() << " removed" << '\n';
        for (const auto& val : stack) {
            std::cout << val.get() << " viewed" << '\n';
        }
    }

    std::cout << '\n';

    { MonkeyTimer::ScopeTimer timer("\nContainers::Queue<Monad> Timer", 6);
        // FIFO : First In First Out
        const std::vector<Monad < short>> list {
                Monad<short>(1),
                Monad<short>(2),
                Monad<short>(3),
        };
        Queue <Monad<short>> queue;
        for (auto val : list) {
            queue.push(val);
        }
        std::cout << "FIFO Queue: " << queue.size() << '\n';
        std::cout << queue.pop().get() << " removed" << '\n';
        for (const auto& val : queue) {
            std::cout << val.get() << " viewed" << '\n';
        }
    }

    std::cout << '\n';

    { MonkeyTimer::ScopeTimer timer("\nContainers::Queue<Monoid> Timer", 6);
        // FIFO : First In First Out
        const std::vector<Monoid < short>> list {
                Monoid<short>(1),
                Monoid<short>(2),
                Monoid<short>(3),
        };
        Queue <Monoid<short>> queue;
        for (auto val : list) {
            queue.push(val);
        }
        std::cout << "FIFO Queue: " << queue.size() << '\n';
        std::cout << queue.pop().get() << " removed" << '\n';
        for (const auto& val : queue) {
            std::cout << val.get() << " viewed" << '\n';
        }
    }

}