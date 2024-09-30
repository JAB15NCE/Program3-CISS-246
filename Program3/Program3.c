#include <stdio.h>
#include "Assembler.h"
#include "Assembler.c"
#include "InstructionOpcodes.h"
#include "RegisterSet.h"

void main()
{
    //executeAssembler("AssemblyCodeInstructions_01.aci", "MachineCodeInstructions_01.mci");
    //executeAssembler("AssemblyCodeInstructions_02.aci", "MachineCodeInstructions_02.mci");
    //executeAssembler("AssemblyCodeInstructions_03.aci", "MachineCodeInstructions_03.mci");
    //executeAssembler("AssemblyCodeInstructions_04.aci", "MachineCodeInstructions_04.mci");
 
    executeAssembler("machincodemine.aci", "machincodemine.mci");

    printf("Press the enter key to continue...");

	int c = getchar();
}