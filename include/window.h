/**
 * @file window.h
 * @brief Declares and init a window with resizeable flag using raylib.
 */
#ifdef  WINDOW_H 
#define WINDOW_H

#include "raylib.h"
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
void init_window(uint32_t window_width, uint32_t window_height, bool Flag_window_Resizable, Color background_color, char *window_name);

#endif