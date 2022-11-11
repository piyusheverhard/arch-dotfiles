const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04060C", /* black   */
  [1] = "#4A586F", /* red     */
  [2] = "#536179", /* green   */
  [3] = "#923B4A", /* yellow  */
  [4] = "#3F5F86", /* blue    */
  [5] = "#596986", /* magenta */
  [6] = "#687691", /* cyan    */
  [7] = "#b3bac7", /* white   */

  /* 8 bright colors */
  [8]  = "#7d828b",  /* black   */
  [9]  = "#4A586F",  /* red     */
  [10] = "#536179", /* green   */
  [11] = "#923B4A", /* yellow  */
  [12] = "#3F5F86", /* blue    */
  [13] = "#596986", /* magenta */
  [14] = "#687691", /* cyan    */
  [15] = "#b3bac7", /* white   */

  /* special colors */
  [256] = "#04060C", /* background */
  [257] = "#b3bac7", /* foreground */
  [258] = "#b3bac7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
