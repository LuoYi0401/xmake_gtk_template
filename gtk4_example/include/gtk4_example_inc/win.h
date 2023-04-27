#ifndef ORG_LY_GTK4_EXAMPLE_WIN_H_
#define ORG_LY_GTK4_EXAMPLE_WIN_H_

#include <gtk/gtk.h>

#include "app.h"

G_BEGIN_DECLS

#define EXAMPLE_TYPE_WIN (example_win_get_type())
G_DECLARE_FINAL_TYPE(ExampleWin, example_win, EXAMPLE, WIN, GtkApplicationWindow)

ExampleWin *example_win_new(ExampleApp *application);

G_END_DECLS

#endif /* ORG_LY_GTK4_EXAMPLE_WIN_H_ */