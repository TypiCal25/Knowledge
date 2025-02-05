There are different types of processes. These are the ones that run in user space and the ones that run in kernel space. The ones that run in kernel space are privileged and perform operations that require critical permissions or read/write access to locations in memory that a user should not have direct access to.

This is done through *system calls* or **trap-function calls**. Usually this is done using a library procedure which wraps on top of the raw system call, in order to provide simplicity to the user (in this case, user refers to a programmer).

The POSIX standard lists about 100 system calls in i