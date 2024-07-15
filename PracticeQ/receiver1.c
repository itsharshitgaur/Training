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

    key = ftok("receiver1.c", 65);

    msgid = msgget(key, 0666 | IPC_CREAT);

    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    printf("Receiver process started. Press Ctrl+C to exit.\n");

    while (1) {
        if (msgrcv(msgid, (void *)&message, MAX_SIZE, 3, IPC_NOWAIT) != -1) {
            printf("High Priority Message Received: %s\n", message.msg_text);
        } else if (msgrcv(msgid, (void *)&message, MAX_SIZE, 2, IPC_NOWAIT) != -1) {
            printf("Medium Priority Message Received: %s\n", message.msg_text);
        } else if (msgrcv(msgid, (void *)&message, MAX_SIZE, 1, IPC_NOWAIT) != -1) {
            printf("Low Priority Message Received: %s\n", message.msg_text);
        } else {
            usleep(100000);
        }
    }

    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}


