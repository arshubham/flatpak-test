/* Main.c generated by valac 0.40.0, the Vala compiler
 * generated from Main.vala, do not modify */

/*-
 * Copyright (c) 2018 Shubham Arora (https://github.com/arshubham/cipher)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Authored by: Shubham Arora <shubhamarora@protonmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <granite.h>


#define CIPHER_TYPE_APPLICATION (cipher_application_get_type ())
#define CIPHER_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_TYPE_APPLICATION, CipherApplication))
#define CIPHER_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_TYPE_APPLICATION, CipherApplicationClass))
#define CIPHER_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_TYPE_APPLICATION))
#define CIPHER_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_TYPE_APPLICATION))
#define CIPHER_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_TYPE_APPLICATION, CipherApplicationClass))

typedef struct _CipherApplication CipherApplication;
typedef struct _CipherApplicationClass CipherApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



void _vala_main (gchar** args,
                 int args_length1);
GType cipher_application_get_type (void) G_GNUC_CONST;
CipherApplication* cipher_application_new (void);
CipherApplication* cipher_application_construct (GType object_type);


/**
 * Main method. Responsible for starting the {@code Application} class.
 *
 * @see App.Application
 * @return {@code void}
 * @since 0.1.0
 */
void
_vala_main (gchar** args,
            int args_length1)
{
	CipherApplication* app = NULL;
	CipherApplication* _tmp0_;
#line 30 "/home/shubhamarora/cipher/src/Main.vala"
	_tmp0_ = cipher_application_new ();
#line 30 "/home/shubhamarora/cipher/src/Main.vala"
	app = _tmp0_;
#line 31 "/home/shubhamarora/cipher/src/Main.vala"
	granite_application_run ((GraniteApplication*) app, args, args_length1);
#line 29 "/home/shubhamarora/cipher/src/Main.vala"
	_g_object_unref0 (app);
#line 75 "Main.c"
}


int
main (int argc,
      char ** argv)
{
#line 29 "/home/shubhamarora/cipher/src/Main.vala"
	_vala_main (argv, argc);
#line 29 "/home/shubhamarora/cipher/src/Main.vala"
	return 0;
#line 87 "Main.c"
}


