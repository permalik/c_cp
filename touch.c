#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// TODO: create multiple files
// TODO:

int create_file(char *filename) {
    int fd;
    const char *filepath = filename;

    fd = open(filepath, O_CREAT | O_WRONLY, 0644);
    if (fd == -1) {
        perror("open");
        printf("Error code: %d\n", errno);
        return 1;
    }

    const char *text = "Hello Earl\n";
    if (write(fd, text, 11) == -1) {
        perror("write");
        close(fd);
        return 1;
    }

    if (close(fd) == -1) {
        perror("close");
        printf("Error code: %d\n", errno);
        return 1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Input minimum one file.");
    } else {
        for (int i = 1; i <= argc; i++) {
            create_file(argv[i]);
        }
    }
    // if (argc < 2) {
    //     printf("Input minimum one file.");
    // } else if (argc == 2) {
    //     create_file(argv[1]);
    // } else {
    //     for (int i = 0; i < argc; i++) {
    //         create_file(argv[i]);
    //     }
    // }

    return 0;
}
