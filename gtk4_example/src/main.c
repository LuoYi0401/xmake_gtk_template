#include <gtk/gtk.h>

#include "gtk4_example_inc/app.h"

int main(int argc, char **argv)
{
	return g_application_run(G_APPLICATION(example_app_new()), argc, argv);
}