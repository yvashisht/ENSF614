#include <iostream>
#include <functions.h> // Include the header file

int main() {
    char dest[100] = "ABC"; // Initialize dest with "ABC"
    char source[] = "WXYZ"; // Initialize source with "WXYZ"

    std::cout << "Before reverse_strcat: " << dest << std::endl;

    // Call the reverse_strcat function to append source to dest in reverse order
    reverse_strcat(dest, source);

    std::cout << "After reverse_strcat: " << dest << std::endl;

    return 0;
}

char* reverse_strcat(char* dest, char* source) {
    // Find the end of the dest string
    char* dest_end = dest;
    while (*dest_end != '\0') {
        dest_end++;
    }

    // Find the end of the source string
    char* source_end = source;
    while (*source_end != '\0') {
        source_end++;
    }

    // Append characters from source to dest in reverse order
    while (source_end > source) {
        source_end--;
        dest_end--;
        *dest_end = *source_end;
    }

    return dest;
}