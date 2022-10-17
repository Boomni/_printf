
#include "main.h"

/* vim: set tabstop=4 shiftwidth=4 fileencoding=utf-8 noexpandtab: */
   

int _printf(const char *format, ...){
	const char *i;
	va_list args;
	int x = 0, count;
	char *s = "";

	va_start(args,format); /* start adding new arguments to the list args */
	
	for (i = format; *i != '\0'; i++){
		if (*i == '%'){ /* if there is a percent, go through all the checks with the next character */
			i++;
			
			if (*i == 'd'){ /* prints an integer */
				x = va_arg(args,int);
				print_integer(x,10,"");
			}
			if (*i == 'i'){ /* prints an integer */
				x = va_arg(args,int);
				print_integer(x,10,"");
			}
			else if (*i == 'x'){ /* prints an integer in hexadecimal format */
				x = va_arg(args,int);
				print_integer(x,16,"0x");
			}
			else if (*i == 'b'){ /* prints an integer in binary */
				x = va_arg(args,int);
				print_integer(x,2,"0b");
			}
			else if (*i == 's'){ /* prints a string by going through the loop of characters */
				s = va_arg(args,char *);
				for (count = 0; s[count] != '\0'; count++){
					fputc(s[count],stdout);
				}
			}
			else if (*i == 'c'){ /* prints a character */
			 	x = va_arg(args,int);
				fputc(x,stdout);
			}
			else if (*i == '%'){ /* prints a percent if there is "%%" in the string */
			 	fputc('%',stdout);
			}
			else{ /* if all else fails then just print the original percent */
				fputc('%',stdout);
				i--;
			}
		}
		else{ /* if no percent just print character in string */
			fputc(*i,stdout);
		}

	}
	va_end(args); /* end adding arguments to the array args */
	return 0;
}

