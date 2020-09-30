# Generic Containers


## Objects
### `Monoid<T>` Chainable Object
- `get() const -> T` getter
- `set(T val) -> Monoid<T>` chainable setter

### `Monad<T>` Pure Chainable Object
- `get() const -> T` getter
- `set(T val) const -> Monad<T>` chainable const setter


## Sequences
### `Stack<T>` FILO Sequence
- `pop() -> T` remove and return the top value
- `push(T val) -> void` push a value to the top
- `size() -> size_t` returns the number of values

### `Queue<T>` FIFO Sequence
- `pop() -> T` remove and return the top value
- `push(T val) -> void` push a value to the bottom
- `size() -> size_t` returns the number of values
