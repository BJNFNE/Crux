#include <stdio.h>

// Error in %s:%d
void error_in_file(const char* file, int line) {
    printf("Error in %s:%d\n", file, line);
}

// File error! ERRORS.TXT is corrupt. Reinstall game if error persists.
void file_error(const char* file) {
    printf("File error! %s is corrupt. Reinstall game if error persists.\n", file);
}

// To get technical support, please write down the following info:
void get_technical_support() {
    printf("To get technical support, please write down the following info:\n");
}

// Write info
void write_info(const char* info) {
    printf("%s\n", info);
}

// Write text
void write_text(const char* text) {
    printf("%s\n", text);
}

// File system corrupt!
void file_system_corrupt_error() {
    printf("File system corrupt!\n");
}

// Out of memory!
void out_of_memory_error() {
    printf("Out of memory!\n");
}

// File not found!
void file_not_found_error(const char* file, int line) {
    printf("File not found! %s:%d\n", file, line);
}

// Out of ani_slots!
void out_of_ani_slots_error() {
    printf("Out of ani_slots!\n");
}

// Invalid number of frames!
void invalid_frames_error(const char* file, int line) {
    printf("Invalid number of frames in %s:%d!\n", file, line);
}

// No more frames!
void no_more_frames_error(const char* file, int line) {
    printf("No more frames in %s:%d!\n", file, line);
}

// Ani was dumped!
void ani_was_dumped_error() {
    printf("Ani was dumped!\n");
}

// Ani is not found in slot!
void ani_not_found_error_in_slot() {
    printf("Ani is not found in slot!\n");
}

// Illegal ani slot!
void illegal_ani_slot_error(int slot) {
    printf("Illegal ani slot: %d!\n", slot);
}

// Invalid frame number!
void invalid_frame_number_error(int frame, const char* ani) {
    printf("Invalid frame number: %d in %s!\n", frame, ani);
}

// Too many sound FX!
void too_many_sound_fx_error() {
    printf("Too many sound FX!\n");
}

// File too short!
void file_too_short_error(const char* file, int line) {
    printf("File too short: %s:%d!\n", file, line);
}

// Too many onscreen animations!
void too_many_onscreen_animations_error() {
    printf("Too many onscreen animations!\n");
}

// Error in directDraw!
void direct_draw_error(const char* error) {
    printf("Error in directDraw: %s!\n", error);
}

// Error in directDraw initialization!
void direct_draw_initialization_error(const char* error) {
    printf("Error in directDraw initialization: %s!\n", error);
}

// Too many scripts!
void too_many_scripts_error() {
    printf("Too many scripts!\n");
}

// Inventory error!
void inventory_error() {
    printf("Inventory error!\n");
}

// Insufficient disk space!
void insufficient_disk_space_error() {
    printf("Insufficient disk space!\n");
}

// Too much data!
void too_much_data_error(const char* data) {
    printf("Too much data: %s!\n", data);
}

// DirectSound error!
void direct_sound_error(const char* error) {
    printf("DirectSound error: %s!\n", error);
}

// DirectSound init error!
void direct_sound_init_error(const char* error) {
    printf("DirectSound init error: %s!\n", error);
}

// Stack over/underflow!
void stack_overflow_underflow_error() {
    printf("Stack over/underflow!\n");
}

// Theme segment too big!
void theme_segment_too_big_error() {
    printf("Theme segment too big!\n");
}

// Uninitialized error!
void uninitialized_error() {
    printf("Uninitialized error!\n");
}

// Unhandled Exception!
void unhandled_exception_error() {
    printf("An unhandled exception has occurred!\n");
}

// Call Stack:
void call_stack_error() {
    printf("Call Stack:\n");
}
