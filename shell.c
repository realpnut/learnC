#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    while(0 == 0){
        char cwd[1024];
        getcwd(cwd, sizeof(cwd));
        char cmd[100];
        printf("[%s]> ", cwd);
        fgets(cmd, sizeof(cmd), stdin);
        if (strncmp(cmd, "cd ", 3) == 0) {
            char *path = cmd + 3;
            path[strcspn(path, "\n")] = 0;
            if (chdir(path) != 0) {
                perror("chdir failed");
            }
        } else if (strncmp(cmd, "exit", 4) == 0) {
            break;
        } else {
            system(cmd);
        }
    }
    return 0;
}
