/*
'/r' is an artifact from typewriting this carrage return escape sequences moves the cursor to the start of the line while allowing you to overwrite the data on that line...can be used for neat terminal animating

what does it mean to be ANSI standardized?
	ANSI - the American National Standards Institute (private + non-profit)	
	"oversees the development of voluntary consensus standards in the United Sates"
	if something is ANSI standardized, it follows a recognized set of rules or guidelines that have been agreed upon by experts, manufacturers, and other stakeholders to ensure quality, safety, performance, and interoperability.
	ANSI C, which refers to a version of the C programming language that complies with ANSI standards for consistency across compilers.
	ANSI is also the U.S. representative to ISO (International Organization for Standardization)

a difference on GNU/linux
	no #include <conio.h> or getch() in standard libraries
	input is canonical be default (line-buffered)
	so we need to temporarily disable canonical mode and echo, to mimic getch()

why windows uses '\r' and linux uses '\n'
	windows typically uses CRLF (\r\n) for line endings, and hitting Enter can sent '\r' first
	unix/linux system just use LF (\n), so pressing Enter usually sends newline ('\n') only
*/
#include <stdio.h>
#include <stdlib.h>

#define DEBUGMODE 1

int main(){
	
	return 0;
}
