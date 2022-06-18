#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "const.h"
#include "filehandle.h"
#include "login.h"
#include "register.h"
#include "handles.h"

int main(int argc, char const *argv[])
{
	// Welcome
	title();
	// Main VIew
	main_view();
	return 0;
}