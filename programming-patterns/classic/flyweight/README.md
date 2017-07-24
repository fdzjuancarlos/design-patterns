#  Flyweight Pattern

Flyweight pattern allow us to store every shareable and immutable information with a single reference,
saving memory.

# Problem

We need to make a 20x20 playing board. "[ ]" will represent an empty space. "[X]" will represent water.

We must implement this with and without optimisation.

# Conclusion

After profiling both solutions, we can check that bad Flyweight solution over bad
Implementation can improve exponentially the memory usage of our program.