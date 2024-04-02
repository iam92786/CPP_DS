# LKD 

## CH01
### What are the different between Userspace C Programming and Kernel space C Programming?
- lib c V/S GNU C


1. . Hardware devices generate interrupts asynchronously with respect to the processor clock—they can occur at any time.exceptions are often discussed at the same time as interrupts. Unlike inter-rupts, exceptions occur synchronously with respect to the processor clock.
2. alue associated with each interrupt. he operating system can service each interrupt with its corresponding handler.
These interrupt values are often called interrupt request (IRQ) lines. Each IRQ line is assigned a numeric value—for example, on the classic PC, IRQ zero is the timer inter-rupt and IRQ one is the keyboard interrupt.
3. 
