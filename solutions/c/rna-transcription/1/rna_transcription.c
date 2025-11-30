#include "rna_transcription.h"

char *to_rna(const char *dna)
{
    int len = strlen(dna);
    char *seq = malloc(len+1);
    if(len==0)
    {
        strcpy(seq, "");
        return seq;
    }
    for(int i=0;dna[i]!='\0';i++)
    {
        switch(dna[i])
        {
            case 'G':
                seq[i]='C';
                break;
            case 'C':
                seq[i]='G';
                break;
            case 'T':
                seq[i]='A';
                break;
            case 'A':
                seq[i]='U';
                break;
        }
    }
    seq[len] = '\0';
    return seq;
}
