#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MAX_SIZE 1024

struct msg_buffer {
    long msg_type;
    char msg_text[MAX_SIZE];
};

int main() {
    key_t key;
    int msgid;
    struct msg_buffer message;

    key = ftok("sender1.c", 65);

    msgid = msgget(key, 0666 | IPC_CREAT);

    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    printf("Enter lines of text, ^D to quit:\n");

    while (fgets(message.msg_text, MAX_SIZE, stdin) != NULL) {
        if (message.msg_text[0] == '1') {
            message.msg_type = 1;
        } else if (message.msg_text[0] == '2') {
            message.msg_type = 2;
        } else if (message.msg_text[0] == '3') {
            message.msg_type = 3;
        } else {
            fprintf(stderr, "Invalid priority format. Use 1, 2, or 3 followed by a space.\n");
            continue;
        }

        if (msgsnd(msgid, (void *)&message, MAX_SIZE, 0) == -1) {
            perror("msgsnd");
            exit(1);
        }
    }

    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}

