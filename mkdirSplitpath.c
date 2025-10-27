#include "types.h"

extern struct NODE* root;
extern struct NODE* cwd;

//make directory
void mkdir(char pathName[]){

    // TO BE IMPLEMENTED
    //
    // YOUR CODE TO REPLACE THE PRINTF FUNCTION BELOW

    printf("TO BE IMPLEMENTED\n");

    return;
}

//handles tokenizing and absolute/relative pathing options
struct NODE* splitPath(char* pathName, char* baseName, char* dirName){

    // TO BE IMPLEMENTED
    // NOTE THAT WITHOUT COMPLETING THIS FUNCTION CORRECTLY
    // rm, rmdir, ls, cd, touch COMMANDS WILL NOT EXECUTE CORRECTLY
    // SEE THE PROVIDED SOLUTION EXECUTABLE TO SEE THEIR EXPECTED BEHAVIOR

    // YOUR CODE HERE
    //
    return NULL;


	int delimiterNum;
    for(int i=0; i<strlen(pathName); i++) {
    if(pathName[i]="/") {
	delimiterNum+=1;
    
    }

    
    
    }




    for(int j; j<delimiterNum; j++){
	*baseName=strtok(pathName, "/");
    }

	
	*dirName=strtok(pathName, *baseName);

	return *baseName, *dirName;


}
