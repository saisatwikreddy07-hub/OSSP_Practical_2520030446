#include <stdio.h>
#include <unistd.h>
int main(
{
pid_t = fork();
if(pid == 0)
{
printf("Child Exiting\n");
return 0;
}
else{
sleep(15);
printf("Parent Finished\n");
}
return 0;
} 
