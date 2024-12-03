The following note describes the boot up process of a computer in short detail. It is still interesting to note this though.

Every PC contains a motherboard which contains the CPU, slots for the main memory, as well as PCIe plug in cards. It also holds a small **flash memory** on which the **BIOS** is loaded. *The name BIOS is redundant but still followed for the sake of convention*. 

When the computer is booted, it first waits for the signal that the power supply has stabilized. The CPU then starts executing instructions. It uses the **reset vector** which is simply just a mapping to the flash memory in order to load the BIOS/UEFI from the flash memory. This then gets to know what all devices are connected to the device. Because of this, it then initializes all of these devices.

After this, the boot-up procedure that we are more comfortable with starts.
## Boot-Up Using BIOS
In this method, the BIOS checks the list of devices for booting from the CMOS memory. This list can be changed as well (as we usually can edit this list in the BIOS settings). It then selects the device from which it should boot.

The first sector of that storage device is then read and this is usually known as the **Master Boot Record (MBR)** of the disk. It contains a program which can determine which partition is active by scanning the partition table that is stored at the end of the sector. It then loads another loader from this partition.

This loader is responsible for loading the operating system itself. The operating system which gets loaded asks for the configurations of the devices present on the system. If any device does not have a driver, then the operating system prompts for the user to download it from the internet.

Once it has all the information about all the drivers present, it initializes its tables, creates the background processes required, and starts the login/GUI for the users to use.
## Boot-Up Using UEFI
When booting up from UEFI, the first change is that it looks for the partition from the second sector rather than the first sector. This is the main change that is important and differs it from the BIOS. 

The UEFI Standard states that there should be at least support for one of the three filesystems FAT-12, FAT-16, or FAT-32. One such filesystem is placed in the EFI partition. As such, it can now make use of a proper file system containing programs, configuration files, etc. which may or may not be useful during boot. 

The firmware must be able to execute the programs in a format called the PE File format (Portable Executable)