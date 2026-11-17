#ifndef QUEUE_H
#define QUEUE_H

#define NMax 5

typedef int infotype;

struct Queue {
    infotype info[NMax];
    int head, tail;
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif