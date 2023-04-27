#include "gtk4_example_inc/win.h"

#include "gtk4_example_inc/app.h"
#include "gtk4_example_inc/macros.h"

struct _ExampleWin {
    GtkApplicationWindow parent;

    // 致敬经典，嘿嘿
    GtkWidget *hello_world;
};

G_DEFINE_TYPE(ExampleWin, example_win, GTK_TYPE_APPLICATION_WINDOW)

static void example_win_class_init(ExampleWinClass *class)
{
	g_print("window.ui path = %s", GET_LAYOUT_RES(window.ui));
	gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(class),
						    GET_LAYOUT_RES(window.ui));

	gtk_widget_class_bind_template_child(GTK_WIDGET_CLASS(class),
					     ExampleWin, hello_world);
}

static void example_win_init(ExampleWin *self)
{
	gtk_widget_init_template(GTK_WIDGET(self));
}

ExampleWin *example_win_new(ExampleApp *application)
{
    return g_object_new(EXAMPLE_TYPE_WIN, "application", application, NULL);
}