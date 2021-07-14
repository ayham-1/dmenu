/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const unsigned int border_width = 5; /* Size of the window border */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[]      = "#bbbbbb";
static char normbgcolor[]      = "#222222";
static char normfghighlight[]  = "#005577";
static char normbghighlight[]  = "#005577";
static char selfgcolor[]       = "#eeeeee";
static char selbgcolor[]       = "#005577";
static char selfghighlight[]   = "#005577";
static char selbghighlight[]   = "#005577";

static char *colors[SchemeLast][2] = {
	/*     		fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight] = { selfghighlight, selbghighlight },
	[SchemeNormHighlight] = { normfghighlight, normbghighlight },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
//ResourcePref resources[] = {
//	{ "font",        STRING, &font },
//	{ "normfgcolor", STRING, &normfgcolor },
//	{ "normbgcolor", STRING, &normbgcolor },
//	{ "selfgcolor",  STRING, &selfgcolor },
//	{ "selbgcolor",  STRING, &selbgcolor },
//	{ "prompt",      STRING, &prompt },
//};
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "foreground", STRING, &normfgcolor },
	{ "background", STRING, &normbgcolor },
	{ "color0",  STRING, &selfgcolor },
	{ "color4",  STRING, &selbgcolor },

	{ "foreground",  STRING, &selfghighlight },
	{ "color4",  STRING, &selbghighlight },

	{ "color4",  STRING, &normfghighlight },
	{ "background",  STRING, &normbghighlight },

	{ "prompt",      STRING, &prompt },
};
