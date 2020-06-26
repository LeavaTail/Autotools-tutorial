#include <stdio.h>
#include <locale.h>
#include <libintl.h>
#include "func.h"

#define _(String) gettext(String)

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "");
	bindtextdomain (PACKAGE, LOCALEDIR);
	textdomain (PACKAGE);

	func(_("Hello,World!\n"));
	return 0;
}
