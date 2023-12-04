#include "headers.h"
typedef u_int16_t ProcessID;
typedef u_int16_t Time;
typedef u_int16_t Priority;

typedef enum
{
    RUN,
    BLOCKED,
    READY
} State;

typedef struct
{
    State state;
    ProcessID processID;
    ProcessID mappedProcessID;
    Time arrivalTime;
    Time startTime;
    Time remainingTime;
    Time finishTime;
    Priority priority;

} PCB;

typedef void (*Algorithm)(PCB *);

static void *createPCBEntry(Process *newProcess)
{
    PCB *newPCBEntry = (PCB *)malloc(sizeof(PCB));
    newPCBEntry->arrivalTime = newProcess->arrivalTime;
    newPCBEntry->remainingTime = newProcess->runTime;
    newPCBEntry->priority = newProcess->priority;
    newPCBEntry->processID = newProcess->id;
    return newPCBEntry;
}

static void deletePCBEnrty(PCB *pcbEntry)
{
    free(pcbEntry);
}

static void addToRR(PCB *pcbEntry)
{
}

static void addToHPF(PCB *pcbEntry)
{
    // 2 5 7 8
    // insertion
}

static void addToSRTN(PCB *pcbEntry)
{
    // if as8ar call function handle
}

static void processRR(PCB *pcbEntry)
{
}

static void processHPF(PCB *pcbEntry)
{
    // 2 5 7 8
    // insertion
}

static void processSRTN(PCB *pcbEntry)
{
    // if as8ar call function handle
}

static void handleProcesses(Algorithm algorithm)
{
    key_t key_id;
    int rec_val, msgq_id;

    key_id = ftok("keyfile", 65);               // create unique key
    msgq_id = msgget(key_id, 0666 | IPC_CREAT); // create message queue and return id

    if (msgq_id == -1)
    {
        perror("Error in create");
        exit(-1);
    }
    Process receivedProcess;
    while (true)
    {
        // not sure of process size
        rec_val = msgrcv(msgq_id, &receivedProcess, sizeof(Process), 0, IPC_NOWAIT);
        if (rec_val != -1)
        {
            PCB *newPCBEntry = createPCBEntry(&receivedProcess);
            algorithm(newPCBEntry);
        }
    }
}

int main(int argc, char *argv[])
{
    initClk();

    // TODO implement the scheduler :)
    // while (1) {
    // 1. read queue if there are any new processes
    // case (algorithm)
    // HFP:
    // addToHPF(pcbEntry)
    // SRTN:
    // addToSRTN(pcbEntry)
    // RR:
    // addToRR(pcbEntry)
    // check kol cycle
    // check lw galy signal enha 5lst

    // upon termination release the clock resources.

    destroyClk(true);
}
