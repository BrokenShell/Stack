#pragma once

#include <vector>
#include <cassert>
#include <cmath>


namespace Containers {

    template<typename T>
    class Monoid {
        T value {T()};
    public:
        Monoid() = default;
        explicit Monoid(T val) : value(val) {}

        auto get() const -> T {
            return value;
        }

        auto set(T val) -> Monoid<T> {
            value = std::move(val);
            return *this;
        }
    };

    template<typename T>
    class Monad {
        T value;
    public:
        explicit Monad(T val) : value(val) {}

        auto get() const -> T {
            return value;
        }

        auto set(T val) const -> Monad<T> {
            return Monad(std::move(val));
        }
    };

    template<typename T>
    class Stack {
        std::vector<T> data;
    public:
        Stack() = default;

        template<typename UT>
        void push(UT&& value) {
            // Perfect Forwarding by Universal Reference &&
            data.push_back(std::forward<UT>(value));
        }

        auto pop() -> T {
            assert(!data.empty());
            auto result {data.back()};
            data.pop_back();
            return result;
        }

        auto size() const {
            return data.size();
        }

        auto begin() const {
            return data.crbegin();
        }

        auto end() const {
            return data.crend();
        }
    };

    template<typename T>
    class Queue {
        std::vector<T> data;
    public:
        Queue() = default;

        template<typename UT>
        void push(UT&& value) {
            // Perfect Forwarding by Universal Reference &&
            data.insert(data.begin(), std::forward<UT>(value));
        }

        auto pop() -> T {
            assert(!data.empty());
            auto result {data.back()};
            data.pop_back();
            return result;
        }

        auto size() const {
            return data.size();
        }

        auto begin() const {
            return data.crbegin();
        }

        auto end() const {
            return data.crend();
        }
    };

} // end namespace
