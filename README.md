# cpp_contracts_concepts

This repository explores the concept of **Contracts** in C++, inspired by the upcoming features in **C++26**. Although contracts are set to be fully introduced in C++26, this project demonstrates how similar concepts can be applied using current C++ standards. This approach provides a foundation for developing safer and more robust code by implementing **preconditions**, **postconditions**, and **assertions** in C++.

## Overview

Contracts allow developers to specify conditions that must hold true for functions or classes to function correctly. These are usually defined as:
- **Preconditions**: Conditions that must be true before a function is executed.
- **Postconditions**: Conditions that must be true after a function has executed.
- **Assertions**: Conditions that should hold true at a specific point in the code.

This repository includes various examples illustrating how to emulate these contracts in C++ by using `assert` statements and other techniques available in the current C++ standard.

## Inspiration

The idea for this project is based on an article by **ModernesCpp** titled ["Contracts in C++26"](https://www.modernescpp.com/index.php/contracts-in-c26/). Although full support for contracts will be introduced in C++26, this repository provides a preview of how contracts work and can be used to improve code reliability and maintainability.

## Contents

- **Basic Contracts**: Demonstrates how to use preconditions, postconditions, and assertions in C++.
- **Advanced Use Cases**: Shows more complex examples, such as contract assertions in class methods and template functions.
- **Error Handling**: Illustrates handling failed conditions and possible ways to manage exceptions.

## Usage

To run the examples, compile each file with a C++ compiler. For example, using g++:

```bash
g++ -std=c++17 example.cpp -o example
./example
```

Make sure to enable assertions if needed for your development environment. Use the -DNDEBUG flag to disable assertions in release mode.

## License

This project is licensed under the MIT License. See the [LICENSE](/LICENSE) file for details.

Acknowledgments

Thanks to ModernesCpp for the insightful article and resources on upcoming C++ features.
