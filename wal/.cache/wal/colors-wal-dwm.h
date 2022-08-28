static const char norm_fg[] = "#e699cd";
static const char norm_bg[] = "#0d0a1e";
static const char norm_border[] = "#a16b8f";

static const char sel_fg[] = "#e699cd";
static const char sel_bg[] = "#54228F";
static const char sel_border[] = "#e699cd";

static const char urg_fg[] = "#e699cd";
static const char urg_bg[] = "#E83372";
static const char urg_border[] = "#E83372";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
