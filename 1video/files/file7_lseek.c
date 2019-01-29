//
//  file7_lseek.c
//  
//
//  Created by James Chao on 1/24/19.
//

#include <stdio.h>

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main()
{
    int num;
    int file=0;
    if((file=open("reuter",O_RDONLY)) < -1)
        return 1;
    
    char buffer[19];
    if(read(file,buffer,19) != 19)  return 1;
    /*
    printf("%d     %s\n",file, buffer);
    */
    if(lseek(file,10,SEEK_END) < 0) return 1;
    
    num = lseek(file,-19,SEEK_END);
    printf("\n111:  %d", num);
    
    if(read(file,buffer,19) != 19)  return 1;
    printf("\n%s\n",buffer);
    
    return 0;
}
