/* user and group to drop privileges to */
static const char *user  = "quiet";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",
	[INPUT] =  "#005577",
	[FAILED] = "#CC3333",
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

