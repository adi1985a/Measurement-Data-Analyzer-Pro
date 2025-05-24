
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
