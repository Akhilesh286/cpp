
# C++ File Handling Documentation

## Overview
File handling in C++ allows programs to read, write, and manipulate files. C++ provides several classes and methods through the `<fstream>` library to handle file input and output (I/O) operations. This documentation will cover different methods of accessing files, various use cases, and problems to help you deepen your understanding of file handling.

### Common Classes for File Handling
C++ uses three main classes for file handling:
1. **`ifstream`**: For reading files.
2. **`ofstream`**: For writing files.
3. **`fstream`**: For both reading and writing files.

These classes are part of the `<fstream>` library.

### Basic File Operations

1. **Opening a File**  
   Files are opened using the `open()` method or by passing the filename as a constructor argument to `ifstream`, `ofstream`, or `fstream`.

   Example:
   ```cpp
   #include <iostream>
   #include <fstream>

   int main() {
       std::ifstream file("example.txt");  // Open file for reading
       if (file.is_open()) {
           std::cout << "File opened successfully!" << std::endl;
           file.close();
       } else {
           std::cerr << "Failed to open file." << std::endl;
       }
       return 0;
   }
   ```

2. **Reading from a File**  
   Data can be read from a file using methods like `>>` for formatted data or `getline()` for line-by-line reading.

   Example:
   ```cpp
   #include <iostream>
   #include <fstream>

   int main() {
       std::ifstream file("example.txt");
       std::string line;
       if (file.is_open()) {
           while (getline(file, line)) {
               std::cout << line << std::endl;
           }
           file.close();
       } else {
           std::cerr << "Failed to open file." << std::endl;
       }
       return 0;
   }
   ```

3. **Writing to a File**  
   Data can be written to a file using the `<<` operator.

   Example:
   ```cpp
   #include <iostream>
   #include <fstream>

   int main() {
       std::ofstream file("output.txt");
       if (file.is_open()) {
           file << "Hello, World!" << std::endl;
           file.close();
       } else {
           std::cerr << "Failed to open file." << std::endl;
       }
       return 0;
   }
   ```

4. **Appending to a File**  
   Use the `std::ios::app` mode to append data to a file.

   Example:
   ```cpp
   #include <iostream>
   #include <fstream>

   int main() {
       std::ofstream file("output.txt", std::ios::app);
       if (file.is_open()) {
           file << "Appending some data." << std::endl;
           file.close();
       } else {
           std::cerr << "Failed to open file." << std::endl;
       }
       return 0;
   }
   ```

### Different Ways of Accessing Files
- **Text mode** (default): Files are opened as text files by default.
- **Binary mode**: For working with binary files, use the `std::ios::binary` mode.
- **Append mode**: Use `std::ios::app` to append to a file.
- **Truncate mode**: Use `std::ios::trunc` to erase contents of a file before writing.

### Use Cases
1. **Reading Configuration Files**: Reading a file to load configuration settings.
2. **Writing Logs**: Writing runtime logs to a file.
3. **Storing and Retrieving User Data**: Writing user inputs to a file for later use.
4. **Binary File Operations**: Handling binary files like images or serialized data.

---

## Problems for Practicing File Handling

### Problem 1: Read and Count Lines in a File
**Description**: Write a program that opens a text file, reads its contents, and counts the number of lines in the file.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input.txt");
    std::string line;
    int lineCount = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            lineCount++;
        }
        file.close();
        std::cout << "Total lines: " << lineCount << std::endl;
    } else {
        std::cerr << "Failed to open file." << std::endl;
    }

    return 0;
}
```
**Explanation**: This solution uses `getline()` to read each line and increments a counter.

</details>

---

### Problem 2: Write User Data to a File
**Description**: Create a program that takes a user’s name and age, and writes this information to a file.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("userdata.txt");
    std::string name;
    int age;

    if (file.is_open()) {
        std::cout << "Enter your name: ";
        getline(std::cin, name);
        std::cout << "Enter your age: ";
        std::cin >> age;

        file << "Name: " << name << std::endl;
        file << "Age: " << age << std::endl;
        file.close();

        std::cout << "Data written to file." << std::endl;
    } else {
        std::cerr << "Failed to open file." << std::endl;
    }

    return 0;
}
```
**Explanation**: The user’s input is written to `userdata.txt` using the `<<` operator.

</details>

---

### Problem 3: Copy Contents from One File to Another
**Description**: Write a program that reads data from `input.txt` and copies it to `output.txt`.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");
    std::string line;

    if (inputFile.is_open() && outputFile.is_open()) {
        while (getline(inputFile, line)) {
            outputFile << line << std::endl;
        }
        inputFile.close();
        outputFile.close();
        std::cout << "File copied successfully." << std::endl;
    } else {
        std::cerr << "Failed to open file(s)." << std::endl;
    }

    return 0;
}
```
**Explanation**: This solution reads each line from the input file and writes it to the output file.

</details>

---

### Problem 4: Read and Write Binary Data
**Description**: Create a program that writes and reads binary data to/from a file.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
#include <fstream>

struct Data {
    int id;
    double value;
};

int main() {
    Data data = {1, 99.99};

    // Writing binary data
    std::ofstream outFile("data.bin", std::ios::binary);
    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char*>(&data), sizeof(Data));
        outFile.close();
    }

    // Reading binary data
    Data readData;
    std::ifstream inFile("data.bin", std::ios::binary);
    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char*>(&readData), sizeof(Data));
        inFile.close();

        std::cout << "ID: " << readData.id << ", Value: " << readData.value << std::endl;
    } else {
        std::cerr << "Failed to open file." << std::endl;
    }

    return 0;
}
```
**Explanation**: Binary data is written using `write()` and read using `read()`.

</details>

---

### Problem 5: Append Log Entries to a File
**Description**: Write a program that appends a log entry to `log.txt` every time it is run. The log should include the current time.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    std::ofstream logFile("log.txt", std::ios::app);
    
    if (logFile.is_open()) {
        std::time_t now = std::time(nullptr);
        logFile << "Log entry at: " << std::ctime(&now);
        logFile.close();
        std::cout << "Log entry added." << std::endl;
    } else {
        std::cerr << "Failed to open log file." << std::endl;
    }

    return 0;
}
```
**Explanation**: This solution appends a timestamped log entry to the `log.txt` file using the `std::ios::app` mode.

</details>

---

### Conclusion
By practicing these problems, you will become familiar with different file handling techniques in C++, including working with text and binary files, reading/writing data, and appending to files. These operations are crucial in real-world programming tasks like data persistence, logging, and file-based configurations.