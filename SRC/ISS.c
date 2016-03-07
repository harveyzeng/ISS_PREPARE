#include <stdio.h>
#include <stdlib.h>
#define INSTRUCTION_MEMORY_SIZE 1000
void run(int );
void decode(int );
void execute(int );
int pc=0;

int main(){

  int cpu_instruction_memory[INSTRUCTION_MEMORY_SIZE];
  FILE *fp2;

  //read file to memory
  fp2 = fopen("../testpattern/nop.hex","r");
  int j;
	for ( j=0;j<INSTRUCTION_MEMORY_SIZE;j++ )
      		{
        	 cpu_instruction_memory[j]=0;
       		}
	for ( j=0;j<INSTRUCTION_MEMORY_SIZE;j++ )
      		{
        	fscanf(fp2,"%x",&cpu_instruction_memory[j]);
        	//printf("%x\n",cpu_instruction_memory[j]);
       		}
	fclose(fp2);
//run pc
while(1)
  {
  if(cpu_instruction_memory[pc/4]==0) return 0;
  run(cpu_instruction_memory[pc/4]);
  }

  return 0;

}


void run(int instructions)
{
  decode(instructions);
  execute(instructions);

}


void decode(int instructions)
{
  //printf("to be implemented\n");
  printf("decode %x\n",instructions);

}

void execute(int instructions)
{

  //printf("to be implemented\n");
  printf("execute %x\n",instructions);
  pc=pc+4;


}