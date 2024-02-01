# OS Scheduler with Memory Allocation

## Overview

The OS Scheduler with Memory Allocation is dedicated to implementing a CPU scheduler for operating systems. This project orchestrates the execution order of processes, employing an efficient data structure to monitor process statuses within the system. Additionally, it integrates dynamic memory allocation, optimizing memory usage by allocating and deallocating memory space for processes as they enter and exit the system.

## Features
- **Scheduling Algorithms:**
    - Round Robin, Priority Scheduling
    - Non-preemptive Highest Priority First (HPF)
    - Shortest Remaining Time Next (SRTN).
- **Memory Allocation Algorithm:**
    - Buddy system

## Getting Started

### Prerequisites

- linux or WSL
- gcc:
```bash
  sudo apt install build-essential
  sudo apt install gcc
```
- git:
```bash
  sudo apt install git
```

### Installation

1- Clone the repository
```bash
  git clone https://github.com/moa234/OS-Scheduler.git
  cd src
```

2- Compile the program
```bash
  make build 
```
## Usage
1- Generate testcases
```bash
./test_generator.out
```

2- run the program
```bash
  make run
```
3- choose the algorithm you want to run

| number to choose | algorithm |
| -------- | -------- |
| 1  |Non-preemptive Highest Priority First (HPF).  |
| 2  |Shortest Remaining time Next (SRTN). |
| 3  | Round Robin (RR).|

## Output

- The program will generate a file called "scheduler.log" that contains the following information:
    - The order of execution of the processes.
    - The waiting time for each process.
    - the remaining time for each process.
    - The turnaround time for each process.
    - The weighted turnaround time for each process.
  
  ![HPF_Log.png](imgs%2FHPF_Log.png)

- The program will generate a file called "scheduler.perf" that contains the following information:
    - The CPU utilization.
    - The average waiting time for all processes.
    - The average weighted turnaround time for all processes.
    - The standard deviation for the average weighted turnaround time for all processes.

  ![HPF_Perf.png](imgs%2FHPF_Perf.png)

- The program will generate a file called "memory.log" that contains the following information:
    - The order of allocation of the processes.
    - The order of deallocation of the processes.

    ![Memory_Log.png](imgs%2FMemory_Log.png)

## Contributors
* Moaaz Tarek
* Salah Mohamed
* Omar Sherif
* Hussein Mostafa

##  References
* [Cairo University - Computer Engineering Department Project Description Phase 1](https://drive.google.com/file/d/1xLsjpW6XlT5z21D40qF28aI3HL9CCXJ4/view?usp=sharing)
* [Cairo University - Computer Engineering Department Project Description Phase 2](https://drive.google.com/file/d/1zu90RukKdmQYhljyZxpipP1v25mPjzaa/view?usp=sharing)
