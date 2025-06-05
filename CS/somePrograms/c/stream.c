/*
data can come from some location external to the program. data moved from an external location into RAM, where the program can access it, is called input.
data can also be sent to a location external to the program; this is called output. the most common destination for output are the screen, a printer, and disk files.
input sources and output destination are collectively referred to as devices. the keyboard is a device, the screen is a device, and so on. some devices are input only, others are for ouput only, C carries out all input and output via steams!

WHAT IS A STEAM?	
A steam is a sequence of characters. More exactly, it is a sequences of bytes of data. A sequence of bytes flowing into a program is an input steam; a sequence of bytes flowing out of a program is an output steam. By focusing on steams, you do not have to worry as much about wher ethey are going or where they originated. The major advantage of streams, therefore, is that input/output programming is device-independent. Programmers do not need to write special input/output functions for each device (keyboard, disk, and so on). The program sees input/output as a continuous stream of bytes no matter where the input comes from or goes to.

Every C stream is connected to a file. In this context, the term file does not refer to a disk file. Rather, it is an intermediate step between the stream that your program deals with and the actual physical device used for input or output. For the most part, the beginning C programmer does not need to be concerned with these files because the details of interactions amoung streams, files, and devices are taken care of automatically by the C library functions and the operating system.

TEXT VERSUS BINARY STREAMS
C streams fall into two modes: text and binary. A text stream consists only of characters, such as a text data sent to the screen. Text streams are organized into lines, which can be up to 255 characters long and are terminated by and EOL, or newline, character. Certain characters in a text stream are recognized as having special meaning, such as the newline character. This lesson deals with text streams.

A binary stream can handle any sort of data, including, but not limited to, text data. Bytes of data in a binary stream are not translated or interpreted in any special way; they are read and written exactly as-is. Binary streams are used primarily with disk files, which are covered later...

PREDEFINED STREAMS
The ANSI standard for C has three predefined streams, also referred to as the standard input/output files. These streams are automatically opened when a C program starts executing and are closed when the program terminates. The programmer does not need to take any special action to make these streams available.

NOTE: all standard streams are text-mode streams
	stdin keyboard
	stdout screen 
	stderr screen
*/

#include <stdio.h>

int main(){
	char buffer[256];
	puts(fgets(buffer, sizeof(buffer), stdin));
	return 0;
}
