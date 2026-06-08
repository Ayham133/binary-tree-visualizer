/**
 * @file window.c
 * @brief All the implemintation of wondow.h, this file will make it easy to init windows and edit them.
 */

#include "../include/window.h"
#include "raylib.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * @brief Initiate a window
 *
 * @param[in] window_width             Initial window width.
 * @param[in] window_height            Initial window height.
 * @param[in] Flag_window_resizable    A boolean to determine if the window can be resized or not.
 * @param[in] background_color         The color of the window in the backgournd
 * @param[in] window_name              Char pointer (string) to name the window. The name will be on the top middle of the secreen.
 */
void init_window(uint32_t window_width, uint32_t window_height, bool Flag_window_Resizable, Color background_color, char *window_name)
{
    if(Flag_window_Resizable)
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(window_width, window_height, window_name);

}