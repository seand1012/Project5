CS537, Operating Systems, UW-Madison SP 2024

In this lab, we will delve into the intricacies of priority inversion within the context of xv6, a simple, Unix-like teaching operating system that has been extended to support threads. You will be tasked with implementing key features to explore and mitigate the effects of priority inversion. This lab includes creating a sleeplock for use in user space, introducing a `nice` system call to adjust the caller process's nice value (thus indirectly its priority), and modifying the xv6 scheduler to prioritize processes based on their effective priority, which considers both their nice value and the dynamics of priority inversion. Through these exercises, you will gain hands-on experience with advanced operating system concepts, enhancing the xv6 scheduler to more adeptly handle priority inversion and improve overall system performance and fairness.

## Objectives

- To understand priority inversion and priority inheritance. 
- To understand `sleeplock` implementation in xv6
- To understand context switches in xv6
- To implement system calls which modify process state

## Project Details

In this project, you are tasked with enhancing the xv6 operating system by introducing mechanisms to mitigate priority inversion. Specifically, you will:

1. Implement a sleep lock that can be used in user-space,
2. Develop a `nice` system call to adjust the nice value of the current program, influencing its scheduling priority, and
3. Modify the xv6 scheduler to account for both the nice value of processes and priority inheritance.

### New System Call: `clone()`

A [modified version of xv6](https://git.doit.wisc.edu/cdis/cs/courses/cs537/spring24/public/p5/-/tree/main/xv6-public?ref_type=heads) is provided, featuring a new system call, `clone`, which facilitates the creation of threads. 
