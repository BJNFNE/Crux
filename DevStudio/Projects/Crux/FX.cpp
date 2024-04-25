#include <stdio.h>

void fx_callback(int chan) {
    printf("Placeholder for fx_callback(%d)\n", chan);
}

void fx_play_any(char *name) {
    printf("Placeholder for fx_play_any(\"%s\")\n", name);
}

void att_equals_d(int att) {
    printf("att=%d\n", att);
}

void fx_play(char *name) {
    printf("Placeholder for fx_play(\"%s\")\n", name);
}

void waitchan(int chan) {
    printf("Placeholder for waitchan(%d)\n", chan);
}

void fx_play_0(char *name) {
    printf("Placeholder for fx_play_0(\"%s\")\n", name);
}

void fx_loop(char *name) {
    printf("Placeholder for fx_loop(\"%s\")\n", name);
}

void fx_stoploop() {
    printf("Placeholder for fx_stoploop()\n");
}

void fx_stopplay() {
    printf("Placeholder for fx_stopplay()\n");
}

void fx_pause() {
    printf("Placeholder for fx_pause()\n");
}

void fx_resume() {
    printf("Placeholder for fx_resume()\n");
}

void fx_setvol(int vol) {
    printf("Placeholder for fx_setvol(%d)\n", vol);
}
