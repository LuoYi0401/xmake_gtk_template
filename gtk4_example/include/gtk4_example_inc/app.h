#ifndef ORG_LY_GTK4_EXAMPLE_APP_H_
#define ORG_LY_GTK4_EXAMPLE_APP_H_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define EXAMPLE_TYPE_APP (example_app_get_type())
G_DECLARE_FINAL_TYPE(ExampleApp, example_app, EXAMPLE, APP, GtkApplication)

ExampleApp *example_app_new(void);

G_END_DECLS

#endif /* ORG_LY_GTK4_EXAMPLE_APP_H_ */