/* WelcomeView.c generated by valac 0.40.0, the Vala compiler
 * generated from WelcomeView.vala, do not modify */

/*-
 * Copyright (character) 2018 Shubham Arora (https://github.com/arshubham/cipher)
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
#include <gtk/gtk.h>
#include <granite.h>
#include <gio/gio.h>


#define CIPHER_VIEWS_TYPE_WELCOME_VIEW (cipher_views_welcome_view_get_type ())
#define CIPHER_VIEWS_WELCOME_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_VIEWS_TYPE_WELCOME_VIEW, CipherViewsWelcomeView))
#define CIPHER_VIEWS_WELCOME_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_VIEWS_TYPE_WELCOME_VIEW, CipherViewsWelcomeViewClass))
#define CIPHER_VIEWS_IS_WELCOME_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_VIEWS_TYPE_WELCOME_VIEW))
#define CIPHER_VIEWS_IS_WELCOME_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_VIEWS_TYPE_WELCOME_VIEW))
#define CIPHER_VIEWS_WELCOME_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_VIEWS_TYPE_WELCOME_VIEW, CipherViewsWelcomeViewClass))

typedef struct _CipherViewsWelcomeView CipherViewsWelcomeView;
typedef struct _CipherViewsWelcomeViewClass CipherViewsWelcomeViewClass;
typedef struct _CipherViewsWelcomeViewPrivate CipherViewsWelcomeViewPrivate;
enum  {
	CIPHER_VIEWS_WELCOME_VIEW_0_PROPERTY,
	CIPHER_VIEWS_WELCOME_VIEW_NUM_PROPERTIES
};
static GParamSpec* cipher_views_welcome_view_properties[CIPHER_VIEWS_WELCOME_VIEW_NUM_PROPERTIES];
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CipherViewsWelcomeView {
	GtkGrid parent_instance;
	CipherViewsWelcomeViewPrivate * priv;
};

struct _CipherViewsWelcomeViewClass {
	GtkGridClass parent_class;
};


extern GtkImage* cipher_views_image;
GtkImage* cipher_views_image = NULL;
static gpointer cipher_views_welcome_view_parent_class = NULL;

GType cipher_views_welcome_view_get_type (void) G_GNUC_CONST;
CipherViewsWelcomeView* cipher_views_welcome_view_new (void);
CipherViewsWelcomeView* cipher_views_welcome_view_construct (GType object_type);
static GObject * cipher_views_welcome_view_constructor (GType type,
                                                 guint n_construct_properties,
                                                 GObjectConstructParam * construct_properties);
static void _cipher_views_welcome_view___lambda4_ (CipherViewsWelcomeView* self,
                                            gint index);
static void __cipher_views_welcome_view___lambda4__granite_widgets_welcome_activated (GraniteWidgetsWelcome* _sender,
                                                                               gint index,
                                                                               gpointer self);


CipherViewsWelcomeView*
cipher_views_welcome_view_construct (GType object_type)
{
	CipherViewsWelcomeView * self = NULL;
#line 26 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	self = (CipherViewsWelcomeView*) g_object_new (object_type, NULL);
#line 26 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	return self;
#line 87 "WelcomeView.c"
}


CipherViewsWelcomeView*
cipher_views_welcome_view_new (void)
{
#line 26 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	return cipher_views_welcome_view_construct (CIPHER_VIEWS_TYPE_WELCOME_VIEW);
#line 96 "WelcomeView.c"
}


static void
_cipher_views_welcome_view___lambda4_ (CipherViewsWelcomeView* self,
                                       gint index)
{
	GError * _inner_error_ = NULL;
#line 34 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	if (index == 0) {
#line 107 "WelcomeView.c"
		{
#line 36 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			g_app_info_launch_default_for_uri ("https://github.com/arshubham/cipher", NULL, &_inner_error_);
#line 36 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 113 "WelcomeView.c"
				goto __catch0_g_error;
			}
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* e = NULL;
			GError* _tmp0_;
			const gchar* _tmp1_;
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			e = _inner_error_;
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			_inner_error_ = NULL;
#line 38 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			_tmp0_ = e;
#line 38 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			_tmp1_ = _tmp0_->message;
#line 38 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			g_warning ("WelcomeView.vala:38: %s", _tmp1_);
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			_g_error_free0 (e);
#line 135 "WelcomeView.c"
		}
		__finally0:
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			g_clear_error (&_inner_error_);
#line 35 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
			return;
#line 146 "WelcomeView.c"
		}
	}
}


static void
__cipher_views_welcome_view___lambda4__granite_widgets_welcome_activated (GraniteWidgetsWelcome* _sender,
                                                                          gint index,
                                                                          gpointer self)
{
#line 33 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_cipher_views_welcome_view___lambda4_ ((CipherViewsWelcomeView*) self, index);
#line 159 "WelcomeView.c"
}


static GObject *
cipher_views_welcome_view_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	CipherViewsWelcomeView * self;
	GraniteWidgetsWelcome* welcome = NULL;
	GraniteWidgetsWelcome* _tmp0_;
	GraniteWidgetsWelcome* _tmp1_;
	GraniteWidgetsWelcome* _tmp2_;
	GraniteWidgetsWelcome* _tmp3_;
#line 28 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	parent_class = G_OBJECT_CLASS (cipher_views_welcome_view_parent_class);
#line 28 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 28 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_VIEWS_TYPE_WELCOME_VIEW, CipherViewsWelcomeView);
#line 30 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_tmp0_ = granite_widgets_welcome_new ("Cipher", "Encode and decode text");
#line 30 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	g_object_ref_sink (_tmp0_);
#line 30 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	welcome = _tmp0_;
#line 31 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_tmp1_ = welcome;
#line 31 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	granite_widgets_welcome_append (_tmp1_, "text-x-source", "Contribute more Ciphers ...", "... and sharpen your coding skills.");
#line 33 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_tmp2_ = welcome;
#line 33 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	g_signal_connect_object (_tmp2_, "activated", (GCallback) __cipher_views_welcome_view___lambda4__granite_widgets_welcome_activated, self, 0);
#line 44 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_tmp3_ = welcome;
#line 44 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp3_);
#line 28 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	_g_object_unref0 (welcome);
#line 28 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	return obj;
#line 204 "WelcomeView.c"
}


static void
cipher_views_welcome_view_class_init (CipherViewsWelcomeViewClass * klass)
{
#line 26 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	cipher_views_welcome_view_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/shubhamarora/cipher/src/views/WelcomeView.vala"
	G_OBJECT_CLASS (klass)->constructor = cipher_views_welcome_view_constructor;
#line 215 "WelcomeView.c"
}


static void
cipher_views_welcome_view_instance_init (CipherViewsWelcomeView * self)
{
}


GType
cipher_views_welcome_view_get_type (void)
{
	static volatile gsize cipher_views_welcome_view_type_id__volatile = 0;
	if (g_once_init_enter (&cipher_views_welcome_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CipherViewsWelcomeViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cipher_views_welcome_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CipherViewsWelcomeView), 0, (GInstanceInitFunc) cipher_views_welcome_view_instance_init, NULL };
		GType cipher_views_welcome_view_type_id;
		cipher_views_welcome_view_type_id = g_type_register_static (gtk_grid_get_type (), "CipherViewsWelcomeView", &g_define_type_info, 0);
		g_once_init_leave (&cipher_views_welcome_view_type_id__volatile, cipher_views_welcome_view_type_id);
	}
	return cipher_views_welcome_view_type_id__volatile;
}


