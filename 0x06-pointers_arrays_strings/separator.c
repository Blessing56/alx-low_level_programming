#include "main.h"
#include <stdio.h>


/**
 *  * separator - checks if character is a seperator
 *   * @c: character to be checked
 *    * Return: if seperator return 1. Otherwise return 0;
 *     */

int separator(char c)
{
		/*Delcaring condition switch*/
		switch (c)
				{
						case ' ':
								case '\t':
								case '\n':
								case ',':
								case ';':
								case '.':
								case '!':
								case '?':
								case '"':
								case '(':
								case ')':
								case '{':
								case '}':
									return (1);

										default:
											return (0);
												}

}
