#ifndef VGA_H
#define VGA_H
#define redpin 23
#define bluepin 24
#define greenpin 25
#include <stdint.h>


void draw(uint8_t *fb);
void cleanfb();
void initrc();

#endif