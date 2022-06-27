const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#16101b", /* black   */
  [1] = "#91567B", /* red     */
  [2] = "#BF556B", /* green   */
  [3] = "#A66376", /* yellow  */
  [4] = "#676987", /* blue    */
  [5] = "#955C81", /* magenta */
  [6] = "#A56586", /* cyan    */
  [7] = "#deafbd", /* white   */

  /* 8 bright colors */
  [8]  = "#9b7a84",  /* black   */
  [9]  = "#91567B",  /* red     */
  [10] = "#BF556B", /* green   */
  [11] = "#A66376", /* yellow  */
  [12] = "#676987", /* blue    */
  [13] = "#955C81", /* magenta */
  [14] = "#A56586", /* cyan    */
  [15] = "#deafbd", /* white   */

  /* special colors */
  [256] = "#16101b", /* background */
  [257] = "#deafbd", /* foreground */
  [258] = "#deafbd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
