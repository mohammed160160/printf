#include <unistd.h>
#include "main.h"
/**
 * unsignedselector - selects which form of unsigned int should be written
 * @cu: The form in question
 * Return: The number of characters printed
 */
int (*unsignedselector(char cu))(unsigned int)
{

if (cu == 'b')
{
return (printbinary);
}

if (cu == 'u')
{
return (printunsignedint);
}

return (0);

}
