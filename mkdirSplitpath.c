#include "types.h"
#include "string.h"
extern struct NODE* root;
extern struct NODE* cwd;
//make directory
void mkdir(char pathName[]){
    // TO BE IMPLEMENTED
    //
    // YOUR CODE TO REPLACE THE PRINTF FUNCTION BELOW
        if (strlen(pathName)==1){
        printf("MKDIR ERROR: no path provided");
	return;
        }
        char baseName[30];
        char dirName[30];

	struct NODE* NewNode;
	NewNode=splitPath(pathName,baseName,dirName);


	


			if(pathName==dirName){
                printf("MKDIR ERROR: directory %s already exists", dirName);
                return;child
        }
       


    printf("TO BE IMPLEMENTED\n");





	//splitpathoutput.childPtr=NULL;
	//splitpathoutput.siblingPtr=NULL;
	
	



	printf("MKDIR SUCCESS: node %s successfully created",NewNode)



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
    //
    //
        struct NODE* directory;
        if (pathName[0]=='/'){
        directory=root;

}
        else{
        directory=cwd;
        }
        //currentNode = cwd; // if it's a relative path, or root if it's an absolute path
        //currentDirName = firstToken; // refer to the tokenization example at /u/pa/nb/tolgacan/210/spring25/strtokex.c
        char* token=strtok(pathName, '/');
        
                                    
                                      
        while (token!=NULL) { // while there are still tokens
                struct NODE* child = directory->childPtr;
                 while (child!=NULL) {
                        if (strcmp(child->name,token)!=0) {
                                child = child->siblingPtr;
                        }
                        else break; // target child directory is found among the children of currentNode
                }
                        if (child==NULL) // not found
                        {       
                                printf("ERROR: directory %s does not exist", token);
                                return NULL;
                        }
                directory = child; // we traverse the tree to the next depth with this assignment
                                   
                token=strtok(NULL,'/');
                //currentDir = get next token; // now in the next iteration look for the next directory name
        }




        int delimiterNum;
    for(int i=0; i<strlen(pathName); i++) {
    if(pathName[i]=='/') {
        delimiterNum=i;
    
    }
    
    }
    //for(int j; j<delimiterNum; j++){
        //*baseName=strtok(pathName, "/");
    //}
        strncpy(dirName, pathName, delimiterNum);
        strncpy(baseName, pathName+delimiterNum+1,\0);
        //*dirName=strtok(pathName, *baseName);
	

	struct NODE* outputPtr=directory->parentPtr;


	
        return outputPtr;
}

