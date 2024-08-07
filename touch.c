// #include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void create_file(char *file) {
    char *response = NULL;
    size_t len;

    printf("%s", file);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("input filename");
    } else {
        create_file(argv[1]);
    }
    // int fd;
    // const char *filepath = "./test.txt";

    // fd = open(filepath, O_CREAT | O_WRONLY, 0644);
    // if (fd == -1) {
    //     perror("open");
    //     printf("Error code: %d\n", errno);
    //     return 1;
    // }

    // const char *text = "Hello Earl\n";
    // if (write(fd, text, 11) == -1) {
    //     perror("write");
    //     close(fd);
    //     return 1;
    // }

    // if (close(fd) == -1) {
    //     perror("close");
    //     printf("Error code: %d\n", errno);
    //     return 1;
    // }

    return 0;
}
