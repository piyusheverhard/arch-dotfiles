const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0a1e", /* black   */
  [1] = "#E83372", /* red     */
  [2] = "#54228F", /* green   */
  [3] = "#5D2391", /* yellow  */
  [4] = "#2A55B2", /* blue    */
  [5] = "#A02FA7", /* magenta */
  [6] = "#D32C98", /* cyan    */
  [7] = "#e699cd", /* white   */

  /* 8 bright colors */
  [8]  = "#a16b8f",  /* black   */
  [9]  = "#E83372",  /* red     */
  [10] = "#54228F", /* green   */
  [11] = "#5D2391", /* yellow  */
  [12] = "#2A55B2", /* blue    */
  [13] = "#A02FA7", /* magenta */
  [14] = "#D32C98", /* cyan    */
  [15] = "#e699cd", /* white   */

  /* special colors */
  [256] = "#0d0a1e", /* background */
  [257] = "#e699cd", /* foreground */
  [258] = "#e699cd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
