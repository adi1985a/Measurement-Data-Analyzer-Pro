# 🔬📊 Measurement Data Analyzer Pro 📈
_A C++ console application for reading, displaying, and statistically analyzing numerical measurement data from a file, with operation logging._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📋 Table of Contents
1.  [Project Description](#-project-description)
2.  [Key Features](#-key-features)
3.  [Screenshots](#-screenshots)
4.  [System Requirements](#-system-requirements)
5.  [Input Data Format (`measurement.txt`)](#-input-data-format-measurementtxt)
6.  [Installation and Running](#️-installation-and-running)
7.  [How to Use](#️-how-to-use)
8.  [Logging](#-logging)
9.  [Technical Details & Program Logic](#-technical-details--program-logic)
10. [Contributing](#-contributing)
11. [Author](#️-author)
12. [License](#-license)

## 📝 Project Description

**Measurement Data Analyzer Pro** is a practical C++ console application designed for the straightforward analysis of numerical measurement data. The program reads data points from an external file (`measurement.txt`), allows users to display the loaded measurements, and calculates key descriptive statistics including the average, minimum, and maximum values. All significant operations and any encountered errors are meticulously logged to `program.log` with timestamps. It features a colorful user interface for enhanced clarity and user experience. While it includes a "Save results" option, this is currently a placeholder for future development.

## ✨ Key Features

*   📄 **Data Input from File**: Reads numerical measurement data from a specified text file (`measurement.txt`).
*    Lined_list_view_data **Display Measurements**: Clearly lists all loaded measurement data points.
*   📊 **Statistical Calculations**:
    *   Computes the **average** (mean) of the measurements.
    *   Identifies the **minimum** value in the dataset.
    *   Finds the **maximum** value in the dataset.
*   💾 **Save Results (Placeholder)**: Includes a menu option for saving results, though the core saving functionality might be a work-in-progress or basic.
*   ✍️ **Comprehensive Logging**: All major operations (file reading, calculations, menu choices) and errors (e.g., file not found, invalid data in file) are logged with timestamps to `program.log`.
*   🌈 **Colorful Console Interface**: Utilizes colored text for menus, prompts, and output, improving readability and user interaction (Windows-specific).
*   ✔️ **Error Handling**: Basic error management for issues like file access problems or non-numeric data in the input file.
*   📋 **Menu-Driven Operation**: User-friendly menu for easy navigation through the program's functionalities.

## 🖼️ Screenshots

**Coming soon!**

_This section will be updated with screenshots showcasing the main menu, data display, statistical output, and examples of the `program.log` and `measurement.txt` files._

## ⚙️ System Requirements

*   **Operating System**: Windows (due to the use of `windows.h` for console color manipulation and `conio.h` for functions like `_getch()`).
*   **C++ Compiler**: Any modern C++ compiler that supports C++11 or newer (e.g., g++, MinGW, Clang, MSVC).
*   **Input File**: A text file named `measurement.txt` must be present in the same directory as the executable, containing numerical data.

## 📄 Input Data Format (`measurement.txt`)

The program expects an input file named `measurement.txt` located in the same directory as the executable.
*   Each line in this file should contain a single numerical value (integer or floating-point).
*   Empty lines or lines with non-numeric data may be skipped or cause an error to be logged, depending on the implementation's robustness.

**Example `measurement.txt`:**
10.5
22.1
15.0
8.75
30.2

## 🛠️ Installation and Running

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    ```
    (Replace `<repository-url>` with the actual URL of your repository)

2.  **Navigate to the Project Directory**:
    ```bash
    cd <repository-directory>
    ```
    (Replace `<repository-directory>` with the name of the cloned folder)

3.  **Prepare `measurement.txt`**:
    Create a `measurement.txt` file in the project directory and populate it with your numerical data, one number per line.

4.  **Compile the Program**:
    Open a terminal (like Command Prompt or PowerShell) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ main.cpp -o measurement_analysis.exe -static-libgcc -static-libstdc++
    ```
    *(Assuming your main source code file is `main.cpp` and any utility functions for color/logging are either within `main.cpp` or a standard library. If you have separate utility files, include them in the compilation command.)*

5.  **Run the Application**:
    After successful compilation, execute the generated program:
    ```bash
    ./measurement_analysis.exe
    ```
    or simply in CMD:
    ```bash
    measurement_analysis.exe
    ```

## ▶️ How to Use

Upon launching **Measurement Data Analyzer Pro**, you will be presented with a main menu:

1.  **Read measurements from file**:
    *   Attempts to open and read numerical data from `measurement.txt`.
    *   Logs the success or failure of this operation.
2.  **Display measurements**:
    *   Shows all the measurement values currently loaded into the program.
3.  **Calculate statistics**:
    *   Computes and displays the average, minimum, and maximum of the loaded measurements.
    *   Requires data to be loaded first (via option 1).
4.  **Save results**:
    *   *(Currently a placeholder functionality in the described version. If implemented, it would save the calculated statistics or processed data to a file.)*
5.  **Exit**:
    *   Terminates the application.

## ✍️ Logging

All significant actions performed by the user, successful operations (like data loading), and any errors encountered (e.g., `measurement.txt` not found, invalid data within the file) are logged with a timestamp to a file named `program.log`. This log file is created in the same directory as the executable and is useful for tracking program execution and diagnosing issues.

## 💡 Technical Details & Program Logic

*   **Data Storage**: Loaded measurements are typically stored in a dynamic array, such as `std::vector<double>` or `std::vector<float>`.
*   **File Input**: Uses C++ file streams (`std::ifstream`) to read data from `measurement.txt`. Error handling for file opening and data conversion (e.g., `std::stod`, `std::stof`) is important.
*   **Statistical Functions**: Implements basic algorithms to calculate the sum (for average), find the minimum, and find the maximum value within the loaded dataset.
*   **Logging Mechanism**: A dedicated logging function (or class) writes formatted messages with timestamps to `program.log` using `std::ofstream`.
*   **Console Manipulation**: Employs Windows-specific functions from `windows.h` (like `SetConsoleTextAttribute`) for colored text output and `conio.h` (e.g., `_getch()`) for simple "press any key" prompts. The program likely includes utility functions for these operations.

## 🤝 Contributing

Contributions to **Measurement Data Analyzer Pro** are welcome! If you have ideas for implementing the "Save results" feature, adding more advanced statistical calculations (e.g., standard deviation, median), supporting different input file formats, or enhancing the UI:

1.  Fork the repository.
2.  Create a new branch for your feature: `git checkout -b feature/your-analysis-enhancement`
3.  Implement your changes and commit them: `git commit -m "Feature: Add your analysis enhancement"`
4.  Push your changes to your branch: `git push origin feature/your-analysis-enhancement`
5.  Open a Pull Request.

Please ensure your code is well-commented and adheres to the project's existing style.

## ✍️ Author

**Adrian Lesniak**
_C++ Developer & Data Analysis Enthusiast_

## 📃 License

This project is licensed under the **MIT License**.
The full text of the license is available at: [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

---
🔍 _Transforming raw data into meaningful insights._
