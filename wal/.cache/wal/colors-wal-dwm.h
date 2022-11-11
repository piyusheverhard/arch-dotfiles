static const char norm_fg[] = "#b3bac7";
static const char norm_bg[] = "#04060C";
static const char norm_border[] = "#7d828b";

static const char sel_fg[] = "#b3bac7";
static const char sel_bg[] = "#536179";
static const char sel_border[] = "#b3bac7";

static const char urg_fg[] = "#b3bac7";
static const char urg_bg[] = "#4A586F";
static const char urg_border[] = "#4A586F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
