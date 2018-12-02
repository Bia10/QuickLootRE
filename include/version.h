#ifndef	QUICKLOOTRE_VERSION_INCLUDED
#define QUICKLOOTRE_VERSION_INCLUDED

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define QUICKLOOTRE_VERSION_MAJOR		1
#define QUICKLOOTRE_VERSION_MINOR		13
#define QUICKLOOTRE_VERSION_PATCH		0
#define QUICKLOOTRE_VERSION_BETA		0
#define QUICKLOOTRE_VERSION_VERSTRING	STR(QUICKLOOTRE_VERSION_MAJOR) "." STR(QUICKLOOTRE_VERSION_MINOR) "." STR(QUICKLOOTRE_VERSION_PATCH) "." STR(QUICKLOOTRE_VERSION_BETA)

#endif
