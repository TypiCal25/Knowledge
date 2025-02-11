The operating system can be seen in two scopes
1. A resource allocation program for the hardware of a computer.
2. An abstraction layer for the user-side which provides a clean and abstract interface to the users. In this case, the users may also reference the programmers who are creating applications on the computer systems.
# Hardware Organisation in a Computer
A modern general purpose contains multiple CPUs and a number of device controllers connected through a common bus that provides access between components and shared memory.
## Device Controllers
A device controller consists of some local buffer storage as well as some special purpose registers. It is the responsibility of the Device Controllers to move data between the peripheral devices and this local buffer storage.
## Device Driver
The device driver is a piece of software that understands the device controller and provides the rest of the operating system with a better and more abstract interface for the device.


