static const char norm_fg[] = "#deafbd";
static const char norm_bg[] = "#16101b";
static const char norm_border[] = "#9b7a84";

static const char sel_fg[] = "#deafbd";
static const char sel_bg[] = "#BF556B";
static const char sel_border[] = "#deafbd";

static const char urg_fg[] = "#deafbd";
static const char urg_bg[] = "#91567B";
static const char urg_border[] = "#91567B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
