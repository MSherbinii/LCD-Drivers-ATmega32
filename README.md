
LCD Screen Driver for ATmega32 Microcontroller
==============================================

This project includes multiple files written in C language, which are used in the development of drivers for an LCD Screen to be used with an Atmega32 Microcontroller. The flashing of the files was done using the libusb drivers for the USBasp.

Standard Files/ Macros
----------------------

The standard files contain definitions and data types commonly used in the project. The following are the standard files included in the project:

### STD_types.h

This file contains the typedefs for commonly used data types, such as unsigned and signed 8, 16, and 32-bit integers, and floating-point numbers with 32 and 64-bit precision. These typedefs make it easier to use these data types throughout the code, reducing the chances of making errors.

### BIT_Math.h

This file contains the macro definitions for frequently used bit manipulation functions, such as setting a bit, clearing a bit, toggling a bit, and getting the value of a bit. These macros provide an easy and efficient way to perform bit manipulation, making the code more readable and compact.

DIO Files
---------

The DIO (Digital Input/Output) files contain definitions and functions related to digital input and output operations, such as setting the direction of a pin, setting the value of a pin, and reading the value of a pin. The following are the DIO files included in the project:

### DIO_int.h

This file contains the definitions for the digital input/output operations, such as the port and pin numbers, input/output direction, and high/low values. These definitions provide an abstraction layer between the hardware and the software, making the code more readable and easier to maintain.

### DIO_private.h

This file contains the memory addresses for the digital input/output registers, such as the direction, input, and output registers for the PORTA, PORTB, PORTC, and PORTD ports. These addresses are used by the DIO functions to access and manipulate the hardware.

### DIO_prog.c

This file contains the implementation of the digital input/output operations, such as setting the direction of a pin, setting the value of a pin, and reading the value of a pin. These functions use the definitions and memory addresses from the DIO_int.h and DIO_private.h files to perform the digital input/output operations.

LCD Drivers Files:
---------

The LCD Drivers files contain the necessary code to initialize and display data on the LCD screen.

LCD_int.h:
This file is the header file for the LCD Driver functions. It contains the definitions for the various commands and modes used by the LCD. It also defines the ports and pins used for the data and control lines of the LCD.

LCD_config.h:
This file contains the configuration settings for the LCD. It defines the number of rows and columns, the type of the LCD (8-bit or 4-bit), and the data pins used.

LCD_private.h:
This file contains the private definitions used by the LCD driver. It defines the ports and registers used to control the data and control lines of the LCD.

LCD_prog.c:
This file contains the implementation of the functions defined in the LCD_int.h file. These functions are used to initialize the LCD, write characters to the LCD, and set the cursor position on the LCD. The functions also handle the low-level details of sending commands and data to the LCD.

Main File
---------

The main file is the starting point of the project, it contains the code that calls and uses the functions from the other files to perform the required operations. The main file will depend on the specific requirements of the project, such as writing a message to the LCD screen, reading input from the user, and performing specific tasks based on the input.


The initializations of memory registers was defined using the ATmega32 datasheet and the LCD pins I/O Modules was also defined using its datasheet.
