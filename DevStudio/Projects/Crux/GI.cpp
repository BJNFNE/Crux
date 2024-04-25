#include <stdio.h>

// Calculate region
void gi_calc_region(void) {
    printf("Placeholder for gi_calc_region()\n");
}

// GI initialization
void gi_init() {
    printf("Placeholder for gi_init()\n");
}

// Wait for GI initialization
void gi_wait_init() {
    printf("Placeholder for gi_wait_init()\n");
}

// Set GI write mode
void gi_write_mode(char mode) {
    printf("Placeholder for gi_write_mode('%c')\n", mode);
}

// Set GI buffer mode
void gi_buffer_mode(int mode) {
    printf("Placeholder for gi_buffer_mode(%d)\n", mode);
}

// Put image to GI
void gi_put_img(int x, int y, uchar *img) {
    printf("Placeholder for gi_put_img(%d, %d, <img>)\n", x, y);
}

// Put image to screen
void gi_put_img_to_screen(int x, int y, uchar *img) {
    printf("Placeholder for gi_put_img_to_screen(%d, %d, <img>)\n", x, y);
}

// Put image to memory
void gi_put_img_to_mem(uchar *bank, uchar *to, int x, int y, int xsize, int ysize) {
    printf("Placeholder for gi_put_img_to_mem(<bank>, <to>, %d, %d, %d, %d)\n", x, y, xsize, ysize);
}

// Put image cut
void gi_put_img_cut(int x, int y, uchar *img) {
    printf("Placeholder for gi_put_img_cut(%d, %d, <img>)\n", x, y);
}

// Put blank image
void gi_put_img_blank(int x, int y, uchar *img) {
    printf("Placeholder for gi_put_img_blank(%d, %d, <img>)\n", x, y);
}

// Set clipper
void gi_set_clipper(int x1, int y1, int x2, int y2) {
    printf("Placeholder for gi_set_clipper(%d, %d, %d, %d)\n", x1, y1, x2, y2);
}

// Remove clipper
void gi_remove_clipper() {
    printf("Placeholder for gi_remove_clipper()\n");
}

// Show page
void gi_show_page(int miny, int maxy) {
    printf("Placeholder for gi_show_page(%d, %d)\n", miny, maxy);
}

// Repaint seen page
void gi_repaint_seen_page(int x1, int y1, int x2, int y2) {
    printf("Placeholder for gi_repaint_seen_page(%d, %d, %d, %d)\n", x1, y1, x2, y2);
}

// Point
void gi_point(int x, int y) {
    printf("Placeholder for gi_point(%d, %d)\n", x, y);
}

// Plot
void gi_plot(int x, int y, uchar c) {
    printf("Placeholder for gi_plot(%d, %d, %d)\n", x, y, c);
}

// Get image
void gi_get_img(int x, int y, int x1, int y1, uchar *img) {
    printf("Placeholder for gi_get_img(%d, %d, %d, %d, <img>)\n", x, y, x1, y1);
}

// Put indi image
void gi_put_img_indi(int x, int y, uchar *img, uchar xlat_tbl[256]) {
    printf("Placeholder for gi_put_img_indi(%d, %d, <img>, <xlat_tbl>)\n", x, y);
}

// Get image size
void gi_image_size(int x, int y, int x1, int y1) {
    printf("Placeholder for gi_image_size(%d, %d, %d, %d)\n", x, y, x1, y1);
}

// Clear border
void gi_clear_border(int sx, int sy, int ex, int ey) {
    printf("Placeholder for gi_clear_border(%d, %d, %d, %d)\n", sx, sy, ex, ey);
}

// Fill
void gi_fill(int x, int y, int color) {
    printf("Placeholder for gi_fill(%d, %d, %d)\n", x, y, color);
}

// Fill rectangle
void gi_fill_rect(int sx, int sy, int ex, int ey, uchar c) {
    printf("Placeholder for gi_fill_rect(%d, %d, %d, %d, %d)\n", sx, sy, ex, ey, c);
}

// Line
void gi_line(int x1, int y1, int x2, int y2, uchar c) {
    printf("Placeholder for gi_line(%d, %d, %d, %d, %d)\n", x1, y1, x2, y2, c);
}

// Move background
void gi_move_background() {
    printf("Placeholder for gi_move_background()\n");
}
