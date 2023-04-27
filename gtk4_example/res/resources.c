#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.org"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[937]; const double alignment; void * const ptr;}  org_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0006, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 
  0005, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 0004, 0000, 0364, 0273, 0003, 0000, 0000, 0000, 
  0310, 0000, 0000, 0000, 0011, 0000, 0166, 0000, 0330, 0000, 0000, 0000, 0156, 0003, 0000, 0000, 
  0113, 0120, 0220, 0013, 0002, 0000, 0000, 0000, 0156, 0003, 0000, 0000, 0004, 0000, 0114, 0000, 
  0164, 0003, 0000, 0000, 0170, 0003, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 
  0170, 0003, 0000, 0000, 0001, 0000, 0114, 0000, 0174, 0003, 0000, 0000, 0200, 0003, 0000, 0000, 
  0100, 0362, 0101, 0261, 0004, 0000, 0000, 0000, 0200, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 
  0210, 0003, 0000, 0000, 0214, 0003, 0000, 0000, 0123, 0323, 0022, 0231, 0005, 0000, 0000, 0000, 
  0214, 0003, 0000, 0000, 0015, 0000, 0114, 0000, 0234, 0003, 0000, 0000, 0240, 0003, 0000, 0000, 
  0237, 0113, 0231, 0115, 0001, 0000, 0000, 0000, 0240, 0003, 0000, 0000, 0003, 0000, 0114, 0000, 
  0244, 0003, 0000, 0000, 0250, 0003, 0000, 0000, 0167, 0151, 0156, 0144, 0157, 0167, 0056, 0165, 
  0151, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0206, 0002, 0000, 0000, 0000, 0000, 0000, 0000, 
  0074, 0077, 0170, 0155, 0154, 0040, 0166, 0145, 0162, 0163, 0151, 0157, 0156, 0075, 0042, 0061, 
  0056, 0060, 0042, 0040, 0145, 0156, 0143, 0157, 0144, 0151, 0156, 0147, 0075, 0042, 0125, 0124, 
  0106, 0055, 0070, 0042, 0077, 0076, 0012, 0074, 0151, 0156, 0164, 0145, 0162, 0146, 0141, 0143, 
  0145, 0076, 0074, 0164, 0145, 0155, 0160, 0154, 0141, 0164, 0145, 0040, 0143, 0154, 0141, 0163, 
  0163, 0075, 0042, 0105, 0170, 0141, 0155, 0160, 0154, 0145, 0127, 0151, 0156, 0042, 0040, 0160, 
  0141, 0162, 0145, 0156, 0164, 0075, 0042, 0107, 0164, 0153, 0101, 0160, 0160, 0154, 0151, 0143, 
  0141, 0164, 0151, 0157, 0156, 0127, 0151, 0156, 0144, 0157, 0167, 0042, 0076, 0074, 0160, 0162, 
  0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 0164, 0151, 0164, 
  0154, 0145, 0042, 0076, 0107, 0164, 0153, 0064, 0040, 0105, 0170, 0141, 0155, 0160, 0154, 0145, 
  0074, 0057, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 0074, 0160, 0162, 0157, 0160, 
  0145, 0162, 0164, 0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 0144, 0145, 0146, 0141, 0165, 
  0154, 0164, 0055, 0167, 0151, 0144, 0164, 0150, 0042, 0076, 0066, 0060, 0060, 0074, 0057, 0160, 
  0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 0074, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 
  0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0055, 
  0150, 0145, 0151, 0147, 0150, 0164, 0042, 0076, 0064, 0070, 0060, 0074, 0057, 0160, 0162, 0157, 
  0160, 0145, 0162, 0164, 0171, 0076, 0074, 0143, 0150, 0151, 0154, 0144, 0076, 0074, 0157, 0142, 
  0152, 0145, 0143, 0164, 0040, 0143, 0154, 0141, 0163, 0163, 0075, 0042, 0107, 0164, 0153, 0102, 
  0157, 0170, 0042, 0076, 0074, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 0141, 
  0155, 0145, 0075, 0042, 0157, 0162, 0151, 0145, 0156, 0164, 0141, 0164, 0151, 0157, 0156, 0042, 
  0076, 0166, 0145, 0162, 0164, 0151, 0143, 0141, 0154, 0074, 0057, 0160, 0162, 0157, 0160, 0145, 
  0162, 0164, 0171, 0076, 0074, 0143, 0150, 0151, 0154, 0144, 0076, 0074, 0157, 0142, 0152, 0145, 
  0143, 0164, 0040, 0143, 0154, 0141, 0163, 0163, 0075, 0042, 0107, 0164, 0153, 0114, 0141, 0142, 
  0145, 0154, 0042, 0040, 0151, 0144, 0075, 0042, 0150, 0145, 0154, 0154, 0157, 0137, 0167, 0157, 
  0162, 0154, 0144, 0042, 0076, 0074, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 
  0141, 0155, 0145, 0075, 0042, 0155, 0141, 0162, 0147, 0151, 0156, 0055, 0163, 0164, 0141, 0162, 
  0164, 0042, 0076, 0061, 0062, 0074, 0057, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 
  0074, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 
  0155, 0141, 0162, 0147, 0151, 0156, 0055, 0145, 0156, 0144, 0042, 0076, 0061, 0062, 0074, 0057, 
  0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 0074, 0160, 0162, 0157, 0160, 0145, 0162, 
  0164, 0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 0155, 0141, 0162, 0147, 0151, 0156, 0055, 
  0164, 0157, 0160, 0042, 0076, 0061, 0062, 0074, 0057, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 
  0171, 0076, 0074, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 0141, 0155, 0145, 
  0075, 0042, 0155, 0141, 0162, 0147, 0151, 0156, 0055, 0142, 0157, 0164, 0164, 0157, 0155, 0042, 
  0076, 0061, 0062, 0074, 0057, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 0074, 0160, 
  0162, 0157, 0160, 0145, 0162, 0164, 0171, 0040, 0156, 0141, 0155, 0145, 0075, 0042, 0154, 0141, 
  0142, 0145, 0154, 0042, 0076, 0110, 0145, 0154, 0154, 0157, 0040, 0127, 0157, 0162, 0154, 0144, 
  0041, 0074, 0057, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0171, 0076, 0074, 0057, 0157, 0142, 
  0152, 0145, 0143, 0164, 0076, 0074, 0057, 0143, 0150, 0151, 0154, 0144, 0076, 0074, 0057, 0157, 
  0142, 0152, 0145, 0143, 0164, 0076, 0074, 0057, 0143, 0150, 0151, 0154, 0144, 0076, 0074, 0057, 
  0164, 0145, 0155, 0160, 0154, 0141, 0164, 0145, 0076, 0074, 0057, 0151, 0156, 0164, 0145, 0162, 
  0146, 0141, 0143, 0145, 0076, 0012, 0000, 0000, 0050, 0165, 0165, 0141, 0171, 0051, 0157, 0162, 
  0147, 0057, 0000, 0000, 0005, 0000, 0000, 0000, 0057, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 
  0154, 0141, 0171, 0157, 0165, 0164, 0057, 0000, 0000, 0000, 0000, 0000, 0147, 0164, 0153, 0064, 
  0137, 0145, 0170, 0141, 0155, 0160, 0154, 0145, 0057, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0154, 0171, 0057, 0000, 0004, 0000, 0000, 0000
} };

static GStaticResource static_resource = { org_resource_data.data, sizeof (org_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *org_get_resource (void);
GResource *org_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(orgresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(orgresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(orgresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(orgresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void orgresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void orgresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
