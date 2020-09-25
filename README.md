# Generic Containers


### `Monoid<T>` Chainable Object
- `get() const -> T` getter
- `set(val) -> Monoid<T>` setter

### `Monad<T>` Stateless Chainable Object
- `get() const -> T` getter
- `set(val) const -> Monad<T>` setter

### `Stack<T>` FILO Sequence Container
- `pop() -> T` getter
- `push() -> void` setter
- `size() -> size_t` length
- `begin() -> It` iterator view
- `end() -> It` iterator view

### `Queue<T>` FIFO Sequence Container
- `pop() -> T` getter
- `push() -> void` setter
- `size() -> size_t` length
- `begin() -> It` iterator view
- `end() -> It` iterator view
