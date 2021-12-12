/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "DejaVu Sans Mono:size=10:antialias=true:autohint=true";
static char font2[] = "Noto Color Emoji:pixelsize=10:antialias=true:autohint=true";
static const char *fonts[] = {
	font,
	font2,
};
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "font2",       STRING, &font2 },
	{ "color4",      STRING, &normfgcolor },
	{ "color0",      STRING, &normbgcolor },
	{ "color0",      STRING, &selfgcolor },
	{ "color4",      STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};
