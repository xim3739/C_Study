/*/
#include <stdio.h>
#include <stdbool.h>

#define COMMAND_PLAY 1
#define COMMAND_STOP 2
#define COMMAND_PUASE 3

#define STATE_PLAY 1
#define STATE_STOP 2
#define STATE_PUASE 3

int handle_play(int command);
int handle_stop(int command);
int handle_puase(int command);
int currentState = STATE_STOP;

int main() {
    
    int command = 0;
    int nextState = 0;
    
    while(true){
        
        printf("input state : ");
        scanf("%d", &command);
        
        switch (currentState) {
            case STATE_PLAY:
                nextState = handle_play(command);
                break;
            case STATE_STOP:
                nextState = handle_stop(command);
                break;
            case STATE_PUASE:
                nextState = handle_puase(command);
                break;
        }
        currentState = nextState;
    }
    
    
    return 0;
}

int handle_play(int command) {
    switch (command) {
        case COMMAND_STOP:
            printf("stop\n");
            return STATE_STOP;
        case COMMAND_PUASE:
            printf("puase\n");
            return STATE_PUASE;
        default:
            printf("play\n");
            return STATE_PLAY;
    }
}

int handle_stop(int command) {
    switch (command) {
        case COMMAND_PLAY:
            printf("play\n");
            return STATE_PLAY;
        default:
            printf("stop\n");
            return STATE_STOP;
    }
}

int handle_puase(int command) {
    switch (command) {
        case COMMAND_STOP:
            printf("stop\n");
            return STATE_STOP;
        case COMMAND_PLAY:
            printf("play\n");
            return STATE_PLAY;
        default:
            printf("puase\n");
            return STATE_PUASE;
    }
}


//*/
