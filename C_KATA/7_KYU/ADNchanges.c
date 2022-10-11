/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
    int i = 0;
    char *p = calloc(strlen(dna),sizeof(size_t));

    while (dna[i] != '\0' )
    {
        if (dna[i] == 'A')
        {
            p[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            p[i] = 'A';
        }
        else if (dna[i] == 'G')
        {
            p[i] = 'C';
        }
        else if (dna[i] == 'C')
        {
            p[i] = 'G';
        }
        i++;
    }
    p[i] = '\0';
    return p;
}