#include "gtk4_example_inc/app.h"

#include "gtk4_example_inc/macros.h"
#include "gtk4_example_inc/win.h"

struct _ExampleApp {
    GtkApplication parent;
};

G_DEFINE_TYPE(ExampleApp, example_app, GTK_TYPE_APPLICATION)

static void example_app_activate(GApplication *application)
{
    ExampleWin *win = example_win_new(EXAMPLE_APP(application));
    gtk_window_present(GTK_WINDOW(win));
}

static void example_app_class_init(ExampleAppClass *class)
{
    G_APPLICATION_CLASS(class)->activate = example_app_activate;
}

static void example_app_init(ExampleApp *self)
{
}

ExampleApp *example_app_new(void)
{
    return g_object_new(EXAMPLE_TYPE_APP, "application-id", __APP_ID__, NULL);
}