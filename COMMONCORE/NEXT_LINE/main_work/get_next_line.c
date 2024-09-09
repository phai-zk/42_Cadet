#include <fcntl.h>   // for open()
#include <unistd.h>  // for read(), close()
#include <stdio.h>   // for printf()

int main() {
    char buffer[100];
    int fd = open("example.txt", O_RDONLY); // Open the file in read-only mode
    if (fd == -1) {
        // Handle error if the file cannot be opened
        perror("Error opening file");
        return 1;
    }

    ssize_t bytesRead = read(fd, buffer, sizeof(buffer) - 1);
    if (bytesRead == -1) {
        // Handle read error
        perror("Error reading file");
        close(fd);
        return 1;
    }

    // Null-terminate the buffer to safely print it as a string
    buffer[bytesRead] = '\0';

    printf("Data read from file: \n%s\n", buffer);

    close(fd); // Always close the file descriptor
    return 0;
}
