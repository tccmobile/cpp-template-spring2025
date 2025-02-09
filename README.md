# C++ Hello World Project

A modern C++ Hello World project template featuring CMake build system, Google Test integration, and GitHub Copilot support.

## Features

- Modern C++17 setup
- CMake build system
- Google Test integration
- GitHub Codespaces support
- GitHub Actions CI
- GitHub Copilot enabled
- MIT Licensed

## Prerequisites

- CMake 3.14 or higher
- C++17 compatible compiler
- Git
- Visual Studio Code (recommended)
- GitHub Copilot subscription (optional)

## Getting Started

### Using GitHub Codespaces (Recommended)

1. Click the green "Code" button on the repository
2. Select "Create codespace on main"
3. Wait for the environment to initialize
4. Once VS Code loads in your browser, you're ready to go!

The Codespace comes pre-configured with:
- C++ development tools
- CMake
- GitHub Copilot
- Required VS Code extensions

### Building the Project

#### Create build directory
```bash
mkdir build && cd build
```

#### Configure and build
```bash
cmake ..
make    
```
### Running the Project
```bash
./main
```

### Testing the Project
```bash
ctest --output-on-failure
```
or run the test directly
```bash
./hello_test
```

## Debugging

### In GitHub Codespaces or VS Code

1. Open the project in VS Code
2. Install recommended extensions
3. Select the "CMake: [Debug]" configuration
4. Set breakpoints in your code
5. Press F5 to start debugging

## License

This project is licensed under the MIT License - see the LICENSE file for details.



