# File Utility Suite

This is a collection of simple C programs designed to perform various file-related tasks using system calls.

## Task 1: Custom File Copy Utility

### Objective:
Develop a program to copy the contents of one file to another using system calls.

### Instructions:
- Your program should accept two arguments: the source file path and the destination file path.
- Use the `read` and `write` functions to transfer the content byte by byte.
- Ensure all data is properly flushed to the destination file using `fsync`.
- Provide error handling for common issues like missing files or access permissions.

#### Advanced Challenge:
Implement a progress bar that updates in real time as the file is being copied.

## Task 2: Basic File Editor

### Objective:
Create a program that acts as a simple text editor.

### Instructions:
- Open "my_info.txt" (or a file of your choice).
- Read and display the contents.
- Let the user edit the text.
- Write the changes back to the file.

#### Challenges:
- How will you handle overwriting vs. appending?

## Task 3: Basic Symbol Counter

### Objective:
Develop a C program that counts the occurrence of each symbol (character) in a text file and outputs the results.

### Instructions:
- Read Input: Your program should accept a single command-line argument specifying the path to the text file to be analyzed.
- Process File:
  - Open and read the file using appropriate system calls (`open`, `read`).
  - Count the occurrence of each ASCII character (considering characters from 0 to 127).
- Output Results:
  - Display the frequency of each character that appears in the file. For characters that do not appear, no output is needed.
  - Format the output as follows: `Character 'a': 20 occurrences`.
- Error Handling: Ensure your program gracefully handles common error scenarios such as missing files or access permissions.

---

Feel free to use, modify, and share these programs as needed! If you have any questions or need further assistance, don't hesitate to ask.
