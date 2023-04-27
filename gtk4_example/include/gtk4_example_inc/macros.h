#ifndef ORG_LY_GTK4_EXAMPLE_MACROS_H_
#define ORG_LY_GTK4_EXAMPLE_MACROS_H_

#define __APP_ID__ "org.ly.gtk4_example"

#define RES_ROOT_PATH "/org/ly/gtk4_example/"
#define RES_LAYOUT_PATH RES_ROOT_PATH"layout/"
#define RES_DRAWABLE_PATH RES_ROOT_PATH"drawable/"
#define RES_ASSERTS_PATH RES_ROOT_PATH"asserts/"

#define GET_RES(__res_path__, __res_name__) (__res_path__ #__res_name__)
#define GET_ROOT_RES(__res_name__) GET_RES(RES_ROOT_PATH, __res_name__)
#define GET_LAYOUT_RES(__res_name__) GET_RES(RES_LAYOUT_PATH, __res_name__)
#define GET_DRAWABLE_RES(__res_name__) GET_RES(RES_DRAWABLE_PATH, __res_name__)
#define GET_ASSERTS_RES(__res_name__) GET_RES(RES_RAW_PATH, __res_name__)

#define GET_STRING(str) (#str)

#endif /* ORG_LY_GTK4_EXAMPLE_MACROS_H_ */
