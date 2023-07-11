/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 0;       /* -F  option; if 1, dmenu uses fuzzy matching */
static int centered = 0;    /* -c  option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
static char *prompt = NULL; /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"NotoColorEmoji:pixelsize=10:antialias=true:autohint=true",
};

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
 	/*               fg           bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff"   },
 };

static float alpha = 0.8;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
static const ResourcePref resources[] = {
	{ "font",          STRING, &font },
	{ "borderwidth",   STRING, &border_width },
	{ "foreground",    STRING, &normfgcolor },
	{ "background",    STRING, &normbgcolor },
	{ "foregroundSel", STRING, &selfgcolor },
	{ "backgroundSel", STRING, &selbgcolor },
	{ "alpha",         FLOAT,  &alpha }
};
