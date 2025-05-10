# Measurement Data Analysis Program

## Description
A C++ console application for analyzing measurement data. Reads data from a file, displays measurements, calculates statistics (average, min, max), and logs operations. Features a colorful interface and error handling.

## Features
- Read measurements from `measurement.txt`
- Display measurement data
- Calculate statistics (average, minimum, maximum)
- Save results (placeholder functionality)
- Log operations to `program.log`

## Requirements
- Windows OS (uses `windows.h` and `conio.h`)
- C++ compiler (e.g., g++)
- Input file `measurement.txt` with one number per line

## Installation
1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Compile the program:
   ```bash
   g++ main.cpp -o measurement_analysis
   ```

## Usage
1. Create a `measurement.txt` file with numerical data (one number per line).
2. Run the program:
   ```bash
   ./measurement_analysis
   ```
3. Choose options 1-5 from the menu:
   - 1: Read measurements
   - 2: Display measurements
   - 3: Calculate statistics
   - 4: Save results
   - 5: Exit

## Logging
- All operations and errors are logged to `program.log` with timestamps.

## Author
Adrian Lesniak

## License
MIT License