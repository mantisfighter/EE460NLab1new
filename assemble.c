#include <stdlib.h>
#include <stdio.h>
#include <string.h> /* String operations library */


// Part 1: Writing the assembler

// format:  labe opcode operands ; comments

// Define LC3b components

FILE* infile = NULL;
FILE* outfile = NULL;

#define MAX_LABEL_LEN 20
#define MAX_SYMBOLS 255
#define MAX_LINE_LENGTH 255
typedef struct {
	int address;
	char label[MAX_LABEL_LEN + 1];	/* Question for the reader: Why do we need to add 1? */
} TableEntry;
TableEntry symbolTable[MAX_SYMBOLS];


char *opCodes[32] = {"ADD", "AND", "BR", "BRP", "BRZ", "BRZP", "BRN", "BRNP", "BRNZ",
"BRNZP","HALT", "JMP", "JSR", "JSRR", "LDB", "LDW",
"LEA", "NOP", "NOT", "RET", "LSHF", "RSHFL", "RSHFA", "RTI", "STB", "STW", "TRAP", "XOR", };
char *registers[8] = {"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7"};

int pcounter;
char* isOpcode(char *ptr){
		return 'a';
	}
enum
	{
	   DONE, OK, EMPTY_LINE
	};

func() 
	{
	   printf("made it \n");
	   char lLine[MAX_LINE_LENGTH + 1], *lLabel, *lOpcode, *lArg1,
	        *lArg2, *lArg3, *lArg4;

	   int lRet;

	   FILE * lInfile;

	   lInfile = fopen( "data.in", "r" );	/* open the input file */

	   do
	   {
		lRet = readAndParse( lInfile, lLine, &lLabel,
			&lOpcode, &lArg1, &lArg2, &lArg3, &lArg4 );
		if( lRet != DONE && lRet != EMPTY_LINE )
		{
			
		}
	   } while( lRet != DONE );
	}

int readAndParse( FILE * pInfile, char * pLine, char ** pLabel, char
	** pOpcode, char ** pArg1, char ** pArg2, char ** pArg3, char ** pArg4){
    printf("made it again \n");
    char * lRet, * lPtr;
	   int i;
    if (isOpcode (lPtr) == -1 && lPtr[0] != '.') // found a label
    {
        *pLabel = lPtr;
        if( !( lPtr = strtok( NULL, "\t\n ,"))) return( OK);
    }

    *pOpcode = lPtr;

    if ( !( lPtr = strtok( NULL, "\t\n ,"))) return ( OK);

    *pArg1 = lPtr;
    if ( !( lPtr = strtok( NULL, "\t\n ,"))) return ( OK);

    *pArg2 = lPtr;
    if ( !( lPtr = strtok( NULL, "\t\n ,"))) return ( OK);

    *pArg3 = lPtr;
    if ( !( lPtr = strtok( NULL, "\t\n ,"))) return ( OK);

    *pArg4 = lPtr;
    
    return( OK);
}
// Defining hash map


int fileOpen(int argc, char* argv[]) {
	
     /* open the source file */
     infile = fopen(argv[1], "r");
     outfile = fopen(argv[2], "w");
		 
     if (!infile) {
       printf("Error: Cannot open file %s\n", argv[1]);
       exit(4);
		 }
     if (!outfile) {
       printf("Error: Cannot open file %s\n", argv[2]);
       exit(4);
     }

     func();

     fclose(infile);
     fclose(outfile);
}

// Parsing cmd line arguements
 int Arguements(int argc, char* argv[]) {

     char *prgName   = NULL;
     char *iFileName = NULL;
     char *oFileName = NULL;

     prgName   = argv[0];
     iFileName = argv[1];
     oFileName = argv[2];

     printf("program name = '%s'\n", prgName);
     printf("input file name = '%s'\n", iFileName);
     printf("output file name = '%s'\n", oFileName);
}

int main(){
char* argv[3];
int args = 2;
char* inputFile = "Input.asm";
char* outputFile = "Output.obj";
argv[0] = inputFile;
argv[1] = outputFile;

fileOpen(args, argv);


}

// isOpCode
int isOpcode(char *inst ){
    int pair = 0;
    for(pair = 0; pair < 32; pair++){
        if(strcomp(inst, Opcode[pair]) == 0){
            return 1;   // we have a pair (opcode)
        }
    }
            return 0; // not a pair, not an opcode
}



