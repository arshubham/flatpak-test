/* AsciiView.c generated by valac 0.40.0, the Vala compiler
 * generated from AsciiView.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <granite.h>
#include <gio/gio.h>


#define CIPHER_VIEWS_TYPE_ASCII_VIEW (cipher_views_ascii_view_get_type ())
#define CIPHER_VIEWS_ASCII_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiView))
#define CIPHER_VIEWS_ASCII_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiViewClass))
#define CIPHER_VIEWS_IS_ASCII_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_VIEWS_TYPE_ASCII_VIEW))
#define CIPHER_VIEWS_IS_ASCII_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_VIEWS_TYPE_ASCII_VIEW))
#define CIPHER_VIEWS_ASCII_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiViewClass))

typedef struct _CipherViewsAsciiView CipherViewsAsciiView;
typedef struct _CipherViewsAsciiViewClass CipherViewsAsciiViewClass;
typedef struct _CipherViewsAsciiViewPrivate CipherViewsAsciiViewPrivate;
enum  {
	CIPHER_VIEWS_ASCII_VIEW_0_PROPERTY,
	CIPHER_VIEWS_ASCII_VIEW_NUM_PROPERTIES
};
static GParamSpec* cipher_views_ascii_view_properties[CIPHER_VIEWS_ASCII_VIEW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define CIPHER_CIPHERS_TYPE_ASCII (cipher_ciphers_ascii_get_type ())
#define CIPHER_CIPHERS_ASCII(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_CIPHERS_TYPE_ASCII, CipherCiphersAscii))
#define CIPHER_CIPHERS_ASCII_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_CIPHERS_TYPE_ASCII, CipherCiphersAsciiClass))
#define CIPHER_CIPHERS_IS_ASCII(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_CIPHERS_TYPE_ASCII))
#define CIPHER_CIPHERS_IS_ASCII_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_CIPHERS_TYPE_ASCII))
#define CIPHER_CIPHERS_ASCII_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_CIPHERS_TYPE_ASCII, CipherCiphersAsciiClass))

typedef struct _CipherCiphersAscii CipherCiphersAscii;
typedef struct _CipherCiphersAsciiClass CipherCiphersAsciiClass;
typedef struct _Block4Data Block4Data;
#define _cipher_ciphers_ascii_unref0(var) ((var == NULL) ? NULL : (var = (cipher_ciphers_ascii_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _CipherViewsAsciiView {
	GtkGrid parent_instance;
	CipherViewsAsciiViewPrivate * priv;
};

struct _CipherViewsAsciiViewClass {
	GtkGridClass parent_class;
};

struct _CipherViewsAsciiViewPrivate {
	GtkTextView* plainTextTextView;
	GtkTextView* cipherTextTextView;
	GtkScrolledWindow* plainTextScrolledWindow;
	GtkScrolledWindow* cipherTextScrolledWindow;
	GtkButton* enchiperButton;
	GtkButton* dechiperButton;
	GtkBox* topBox;
	GtkLabel* labelPlainText;
	GtkLabel* labelCipherText;
	GtkLabel* labelTitle;
	gchar* plainText;
	gchar* cipherText;
};

struct _Block4Data {
	int _ref_count_;
	CipherViewsAsciiView* self;
	CipherCiphersAscii* ascii;
};


static gpointer cipher_views_ascii_view_parent_class = NULL;

GType cipher_views_ascii_view_get_type (void) G_GNUC_CONST;
#define CIPHER_VIEWS_ASCII_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiViewPrivate))
CipherViewsAsciiView* cipher_views_ascii_view_new (void);
CipherViewsAsciiView* cipher_views_ascii_view_construct (GType object_type);
static GObject * cipher_views_ascii_view_constructor (GType type,
                                               guint n_construct_properties,
                                               GObjectConstructParam * construct_properties);
gpointer cipher_ciphers_ascii_ref (gpointer instance);
void cipher_ciphers_ascii_unref (gpointer instance);
GParamSpec* cipher_ciphers_param_spec_ascii (const gchar* name,
                                             const gchar* nick,
                                             const gchar* blurb,
                                             GType object_type,
                                             GParamFlags flags);
void cipher_ciphers_value_set_ascii (GValue* value,
                                     gpointer v_object);
void cipher_ciphers_value_take_ascii (GValue* value,
                                      gpointer v_object);
gpointer cipher_ciphers_value_get_ascii (const GValue* value);
GType cipher_ciphers_ascii_get_type (void) G_GNUC_CONST;
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
CipherCiphersAscii* cipher_ciphers_ascii_new (void);
CipherCiphersAscii* cipher_ciphers_ascii_construct (GType object_type);
static void _cipher_views_ascii_view___lambda14_ (CipherViewsAsciiView* self);
static void __cipher_views_ascii_view___lambda14__gtk_button_clicked (GtkButton* _sender,
                                                               gpointer self);
static void _cipher_views_ascii_view___lambda15_ (Block4Data* _data4_);
gchar* cipher_ciphers_ascii_encryptAscii (CipherCiphersAscii* self,
                                          const gchar* plainText);
static void __cipher_views_ascii_view___lambda15__gtk_button_clicked (GtkButton* _sender,
                                                               gpointer self);
static void _cipher_views_ascii_view___lambda16_ (Block4Data* _data4_);
gchar* cipher_ciphers_ascii_decryptAscii (CipherCiphersAscii* self,
                                          const gchar* cipherText);
static void __cipher_views_ascii_view___lambda16__gtk_button_clicked (GtkButton* _sender,
                                                               gpointer self);
static void cipher_views_ascii_view_finalize (GObject * obj);


CipherViewsAsciiView*
cipher_views_ascii_view_construct (GType object_type)
{
	CipherViewsAsciiView * self = NULL;
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self = (CipherViewsAsciiView*) g_object_new (object_type, NULL);
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	return self;
#line 148 "AsciiView.c"
}


CipherViewsAsciiView*
cipher_views_ascii_view_new (void)
{
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	return cipher_views_ascii_view_construct (CIPHER_VIEWS_TYPE_ASCII_VIEW);
#line 157 "AsciiView.c"
}


static Block4Data*
block4_data_ref (Block4Data* _data4_)
{
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_atomic_int_inc (&_data4_->_ref_count_);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	return _data4_;
#line 168 "AsciiView.c"
}


static void
block4_data_unref (void * _userdata_)
{
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
#line 179 "AsciiView.c"
		CipherViewsAsciiView* self;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		self = _data4_->self;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_cipher_ciphers_ascii_unref0 (_data4_->ascii);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_g_object_unref0 (self);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		g_slice_free (Block4Data, _data4_);
#line 189 "AsciiView.c"
	}
}


static void
_cipher_views_ascii_view___lambda14_ (CipherViewsAsciiView* self)
{
	GError * _inner_error_ = NULL;
	{
#line 115 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		g_app_info_launch_default_for_uri ("https://en.wikipedia.org/wiki/ASCII", NULL, &_inner_error_);
#line 115 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 203 "AsciiView.c"
			goto __catch4_g_error;
		}
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* e = NULL;
		GError* _tmp0_;
		const gchar* _tmp1_;
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		e = _inner_error_;
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_inner_error_ = NULL;
#line 117 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_tmp0_ = e;
#line 117 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_tmp1_ = _tmp0_->message;
#line 117 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		g_warning ("AsciiView.vala:117: %s", _tmp1_);
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		_g_error_free0 (e);
#line 225 "AsciiView.c"
	}
	__finally4:
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		g_clear_error (&_inner_error_);
#line 114 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
		return;
#line 236 "AsciiView.c"
	}
}


static void
__cipher_views_ascii_view___lambda14__gtk_button_clicked (GtkButton* _sender,
                                                          gpointer self)
{
#line 113 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_cipher_views_ascii_view___lambda14_ ((CipherViewsAsciiView*) self);
#line 247 "AsciiView.c"
}


static void
_cipher_views_ascii_view___lambda15_ (Block4Data* _data4_)
{
	CipherViewsAsciiView* self;
	GtkTextView* _tmp0_;
	GtkTextBuffer* _tmp1_;
	GtkTextBuffer* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	GtkTextView* _tmp6_;
	GtkTextBuffer* _tmp7_;
	GtkTextBuffer* _tmp8_;
	CipherCiphersAscii* _tmp9_;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
#line 121 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self = _data4_->self;
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp0_ = self->priv->plainTextTextView;
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp1_ = gtk_text_view_get_buffer (_tmp0_);
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp2_ = _tmp1_;
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_get (_tmp2_, "text", &_tmp3_, NULL);
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp4_ = _tmp3_;
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->plainText);
#line 122 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->plainText = _tmp4_;
#line 123 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp5_ = g_strdup ("");
#line 123 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->cipherText);
#line 123 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->cipherText = _tmp5_;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp6_ = self->priv->cipherTextTextView;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp7_ = gtk_text_view_get_buffer (_tmp6_);
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp8_ = _tmp7_;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp9_ = _data4_->ascii;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp10_ = self->priv->plainText;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp11_ = cipher_ciphers_ascii_encryptAscii (_tmp9_, _tmp10_);
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp12_ = _tmp11_;
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set (_tmp8_, "text", _tmp12_, NULL);
#line 124 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (_tmp12_);
#line 308 "AsciiView.c"
}


static void
__cipher_views_ascii_view___lambda15__gtk_button_clicked (GtkButton* _sender,
                                                          gpointer self)
{
#line 121 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_cipher_views_ascii_view___lambda15_ (self);
#line 318 "AsciiView.c"
}


static void
_cipher_views_ascii_view___lambda16_ (Block4Data* _data4_)
{
	CipherViewsAsciiView* self;
	GtkTextView* _tmp0_;
	GtkTextBuffer* _tmp1_;
	GtkTextBuffer* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	GtkTextView* _tmp6_;
	GtkTextBuffer* _tmp7_;
	GtkTextBuffer* _tmp8_;
	CipherCiphersAscii* _tmp9_;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
#line 127 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self = _data4_->self;
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp0_ = self->priv->cipherTextTextView;
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp1_ = gtk_text_view_get_buffer (_tmp0_);
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp2_ = _tmp1_;
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_get (_tmp2_, "text", &_tmp3_, NULL);
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp4_ = _tmp3_;
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->cipherText);
#line 128 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->cipherText = _tmp4_;
#line 130 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp5_ = g_strdup ("");
#line 130 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->plainText);
#line 130 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->plainText = _tmp5_;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp6_ = self->priv->plainTextTextView;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp7_ = gtk_text_view_get_buffer (_tmp6_);
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp8_ = _tmp7_;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp9_ = _data4_->ascii;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp10_ = self->priv->cipherText;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp11_ = cipher_ciphers_ascii_decryptAscii (_tmp9_, _tmp10_);
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp12_ = _tmp11_;
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set (_tmp8_, "text", _tmp12_, NULL);
#line 132 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (_tmp12_);
#line 379 "AsciiView.c"
}


static void
__cipher_views_ascii_view___lambda16__gtk_button_clicked (GtkButton* _sender,
                                                          gpointer self)
{
#line 127 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_cipher_views_ascii_view___lambda16_ (self);
#line 389 "AsciiView.c"
}


static GObject *
cipher_views_ascii_view_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	CipherViewsAsciiView * self;
	Block4Data* _data4_;
	GtkLabel* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	GtkLabel* _tmp3_;
	GtkLabel* _tmp4_;
	GtkLabel* _tmp5_;
	GtkLabel* _tmp6_;
	GtkStyleContext* _tmp7_;
	GtkButton* button = NULL;
	GtkButton* _tmp8_;
	GtkButton* _tmp9_;
	GtkStyleContext* _tmp10_;
	GtkBox* _tmp11_;
	GtkBox* _tmp12_;
	GtkLabel* _tmp13_;
	GtkBox* _tmp14_;
	GtkButton* _tmp15_;
	GtkLabel* _tmp16_;
	GtkLabel* _tmp17_;
	GtkLabel* _tmp18_;
	GtkLabel* _tmp19_;
	GtkLabel* _tmp20_;
	GtkTextView* _tmp21_;
	GtkTextView* _tmp22_;
	GtkTextView* _tmp23_;
	GtkScrolledWindow* _tmp24_;
	GtkScrolledWindow* _tmp25_;
	GtkScrolledWindow* _tmp26_;
	GtkStyleContext* _tmp27_;
	GtkScrolledWindow* _tmp28_;
	GtkTextView* _tmp29_;
	GtkButton* _tmp30_;
	GtkButton* _tmp31_;
	GtkButton* _tmp32_;
	GtkLabel* _tmp33_;
	GtkLabel* _tmp34_;
	GtkLabel* _tmp35_;
	GtkLabel* _tmp36_;
	GtkLabel* _tmp37_;
	GtkTextView* _tmp38_;
	GtkTextView* _tmp39_;
	GtkTextView* _tmp40_;
	GtkScrolledWindow* _tmp41_;
	GtkScrolledWindow* _tmp42_;
	GtkScrolledWindow* _tmp43_;
	GtkStyleContext* _tmp44_;
	GtkScrolledWindow* _tmp45_;
	GtkTextView* _tmp46_;
	GtkButton* _tmp47_;
	GtkButton* _tmp48_;
	GtkButton* _tmp49_;
	GtkBox* _tmp50_;
	GtkSeparator* _tmp51_;
	GtkSeparator* _tmp52_;
	GtkLabel* _tmp53_;
	GtkScrolledWindow* _tmp54_;
	GtkButton* _tmp55_;
	GtkSeparator* _tmp56_;
	GtkSeparator* _tmp57_;
	GtkLabel* _tmp58_;
	GtkScrolledWindow* _tmp59_;
	GtkButton* _tmp60_;
	CipherCiphersAscii* _tmp61_;
	GtkButton* _tmp62_;
	GtkButton* _tmp63_;
	GtkButton* _tmp64_;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	parent_class = G_OBJECT_CLASS (cipher_views_ascii_view_parent_class);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiView);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_data4_ = g_slice_new0 (Block4Data);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_data4_->_ref_count_ = 1;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_data4_->self = g_object_ref (self);
#line 50 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new ("Ascii Encoding");
#line 50 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp0_);
#line 50 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelTitle);
#line 50 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->labelTitle = _tmp0_;
#line 51 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp1_ = self->priv->labelTitle;
#line 51 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp1_, GTK_ALIGN_CENTER);
#line 52 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp2_ = self->priv->labelTitle;
#line 52 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_margin_top ((GtkWidget*) _tmp2_, 6);
#line 53 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp3_ = self->priv->labelTitle;
#line 53 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp3_, 6);
#line 54 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp4_ = self->priv->labelTitle;
#line 54 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_margin_start ((GtkWidget*) _tmp4_, 24);
#line 55 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp5_ = self->priv->labelTitle;
#line 55 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_margin_end ((GtkWidget*) _tmp5_, 24);
#line 56 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp6_ = self->priv->labelTitle;
#line 56 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp7_ = gtk_widget_get_style_context ((GtkWidget*) _tmp6_);
#line 56 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_style_context_add_class (_tmp7_, GRANITE_STYLE_CLASS_H1_LABEL);
#line 58 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp8_ = (GtkButton*) gtk_button_new_from_icon_name ("dialog-information-symbolic", (GtkIconSize) GTK_ICON_SIZE_BUTTON);
#line 58 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp8_);
#line 58 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	button = _tmp8_;
#line 59 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp9_ = button;
#line 59 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) _tmp9_);
#line 59 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_style_context_add_class (_tmp10_, "info_button");
#line 61 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp11_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 61 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp11_);
#line 61 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->topBox);
#line 61 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->topBox = _tmp11_;
#line 62 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp12_ = self->priv->topBox;
#line 62 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp13_ = self->priv->labelTitle;
#line 62 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_box_set_center_widget (_tmp12_, (GtkWidget*) _tmp13_);
#line 63 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp14_ = self->priv->topBox;
#line 63 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp15_ = button;
#line 63 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_box_pack_end (_tmp14_, (GtkWidget*) _tmp15_, FALSE, FALSE, (guint) 0);
#line 65 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp16_ = (GtkLabel*) gtk_label_new ("<b>Plain Text</b>");
#line 65 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp16_);
#line 65 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelPlainText);
#line 65 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->labelPlainText = _tmp16_;
#line 66 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp17_ = self->priv->labelPlainText;
#line 66 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_label_set_use_markup (_tmp17_, TRUE);
#line 67 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp18_ = self->priv->labelPlainText;
#line 67 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp18_, "margin", 6, NULL);
#line 68 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp19_ = self->priv->labelPlainText;
#line 68 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp19_, GTK_ALIGN_START);
#line 69 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp20_ = self->priv->labelPlainText;
#line 69 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_label_set_line_wrap (_tmp20_, TRUE);
#line 71 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp21_ = (GtkTextView*) gtk_text_view_new ();
#line 71 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp21_);
#line 71 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->plainTextTextView);
#line 71 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->plainTextTextView = _tmp21_;
#line 72 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp22_ = self->priv->plainTextTextView;
#line 72 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_text_view_set_left_margin (_tmp22_, 1);
#line 73 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp23_ = self->priv->plainTextTextView;
#line 73 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_text_view_set_wrap_mode (_tmp23_, GTK_WRAP_WORD);
#line 74 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp24_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
#line 74 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp24_);
#line 74 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->plainTextScrolledWindow);
#line 74 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->plainTextScrolledWindow = _tmp24_;
#line 75 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp25_ = self->priv->plainTextScrolledWindow;
#line 75 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp25_, "expand", TRUE, NULL);
#line 76 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp26_ = self->priv->plainTextScrolledWindow;
#line 76 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp27_ = gtk_widget_get_style_context ((GtkWidget*) _tmp26_);
#line 76 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_style_context_add_class (_tmp27_, GTK_STYLE_CLASS_VIEW);
#line 77 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp28_ = self->priv->plainTextScrolledWindow;
#line 77 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp29_ = self->priv->plainTextTextView;
#line 77 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_container_add ((GtkContainer*) _tmp28_, (GtkWidget*) _tmp29_);
#line 79 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp30_ = (GtkButton*) gtk_button_new_with_label ("Enchiper");
#line 79 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp30_);
#line 79 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->enchiperButton);
#line 79 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->enchiperButton = _tmp30_;
#line 80 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp31_ = self->priv->enchiperButton;
#line 80 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp31_, "margin", 6, NULL);
#line 81 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp32_ = self->priv->enchiperButton;
#line 81 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp32_, GTK_ALIGN_END);
#line 83 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp33_ = (GtkLabel*) gtk_label_new ("<b>Cipher Text</b>");
#line 83 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp33_);
#line 83 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelCipherText);
#line 83 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->labelCipherText = _tmp33_;
#line 84 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp34_ = self->priv->labelCipherText;
#line 84 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_label_set_use_markup (_tmp34_, TRUE);
#line 85 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp35_ = self->priv->labelCipherText;
#line 85 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp35_, "margin", 6, NULL);
#line 86 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp36_ = self->priv->labelCipherText;
#line 86 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp36_, GTK_ALIGN_START);
#line 87 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp37_ = self->priv->labelCipherText;
#line 87 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_label_set_line_wrap (_tmp37_, TRUE);
#line 89 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp38_ = (GtkTextView*) gtk_text_view_new ();
#line 89 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp38_);
#line 89 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->cipherTextTextView);
#line 89 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->cipherTextTextView = _tmp38_;
#line 90 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp39_ = self->priv->cipherTextTextView;
#line 90 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_text_view_set_left_margin (_tmp39_, 1);
#line 91 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp40_ = self->priv->cipherTextTextView;
#line 91 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_text_view_set_wrap_mode (_tmp40_, GTK_WRAP_WORD);
#line 92 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp41_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
#line 92 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp41_);
#line 92 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->cipherTextScrolledWindow);
#line 92 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->cipherTextScrolledWindow = _tmp41_;
#line 93 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp42_ = self->priv->cipherTextScrolledWindow;
#line 93 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp42_, "expand", TRUE, NULL);
#line 94 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp43_ = self->priv->cipherTextScrolledWindow;
#line 94 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp44_ = gtk_widget_get_style_context ((GtkWidget*) _tmp43_);
#line 94 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_style_context_add_class (_tmp44_, GTK_STYLE_CLASS_VIEW);
#line 95 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp45_ = self->priv->cipherTextScrolledWindow;
#line 95 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp46_ = self->priv->cipherTextTextView;
#line 95 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_container_add ((GtkContainer*) _tmp45_, (GtkWidget*) _tmp46_);
#line 97 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp47_ = (GtkButton*) gtk_button_new_with_label ("Dechiper");
#line 97 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp47_);
#line 97 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->dechiperButton);
#line 97 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv->dechiperButton = _tmp47_;
#line 98 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp48_ = self->priv->dechiperButton;
#line 98 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_set ((GtkWidget*) _tmp48_, "margin", 6, NULL);
#line 99 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp49_ = self->priv->dechiperButton;
#line 99 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp49_, GTK_ALIGN_END);
#line 101 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp50_ = self->priv->topBox;
#line 101 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp50_, 0, 0, 1, 1);
#line 102 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp51_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
#line 102 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp51_);
#line 102 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp52_ = _tmp51_;
#line 102 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp52_, 0, 1, 1, 1);
#line 102 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (_tmp52_);
#line 103 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp53_ = self->priv->labelPlainText;
#line 103 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp53_, 0, 2, 1, 1);
#line 104 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp54_ = self->priv->plainTextScrolledWindow;
#line 104 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp54_, 0, 4, 1, 1);
#line 105 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp55_ = self->priv->enchiperButton;
#line 105 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp55_, 0, 5, 1, 1);
#line 106 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp56_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
#line 106 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_object_ref_sink (_tmp56_);
#line 106 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp57_ = _tmp56_;
#line 106 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp57_, 0, 6, 1, 1);
#line 106 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (_tmp57_);
#line 107 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp58_ = self->priv->labelCipherText;
#line 107 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp58_, 0, 7, 1, 1);
#line 108 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp59_ = self->priv->cipherTextScrolledWindow;
#line 108 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp59_, 0, 8, 1, 1);
#line 109 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp60_ = self->priv->dechiperButton;
#line 109 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp60_, 0, 9, 1, 1);
#line 111 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp61_ = cipher_ciphers_ascii_new ();
#line 111 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_data4_->ascii = _tmp61_;
#line 113 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp62_ = button;
#line 113 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_signal_connect_object (_tmp62_, "clicked", (GCallback) __cipher_views_ascii_view___lambda14__gtk_button_clicked, self, 0);
#line 121 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp63_ = self->priv->enchiperButton;
#line 121 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_signal_connect_data (_tmp63_, "clicked", (GCallback) __cipher_views_ascii_view___lambda15__gtk_button_clicked, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
#line 127 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_tmp64_ = self->priv->dechiperButton;
#line 127 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_signal_connect_data (_tmp64_, "clicked", (GCallback) __cipher_views_ascii_view___lambda16__gtk_button_clicked, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (button);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	block4_data_unref (_data4_);
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_data4_ = NULL;
#line 48 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	return obj;
#line 778 "AsciiView.c"
}


static void
cipher_views_ascii_view_class_init (CipherViewsAsciiViewClass * klass)
{
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	cipher_views_ascii_view_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	g_type_class_add_private (klass, sizeof (CipherViewsAsciiViewPrivate));
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	G_OBJECT_CLASS (klass)->constructor = cipher_views_ascii_view_constructor;
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	G_OBJECT_CLASS (klass)->finalize = cipher_views_ascii_view_finalize;
#line 793 "AsciiView.c"
}


static void
cipher_views_ascii_view_instance_init (CipherViewsAsciiView * self)
{
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self->priv = CIPHER_VIEWS_ASCII_VIEW_GET_PRIVATE (self);
#line 802 "AsciiView.c"
}


static void
cipher_views_ascii_view_finalize (GObject * obj)
{
	CipherViewsAsciiView * self;
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_VIEWS_TYPE_ASCII_VIEW, CipherViewsAsciiView);
#line 30 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->plainTextTextView);
#line 31 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->cipherTextTextView);
#line 33 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->plainTextScrolledWindow);
#line 34 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->cipherTextScrolledWindow);
#line 36 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->enchiperButton);
#line 37 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->dechiperButton);
#line 39 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->topBox);
#line 41 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelPlainText);
#line 42 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelCipherText);
#line 43 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_object_unref0 (self->priv->labelTitle);
#line 45 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->plainText);
#line 46 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	_g_free0 (self->priv->cipherText);
#line 29 "/home/shubhamarora/cipher/src/views/AsciiView.vala"
	G_OBJECT_CLASS (cipher_views_ascii_view_parent_class)->finalize (obj);
#line 838 "AsciiView.c"
}


GType
cipher_views_ascii_view_get_type (void)
{
	static volatile gsize cipher_views_ascii_view_type_id__volatile = 0;
	if (g_once_init_enter (&cipher_views_ascii_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CipherViewsAsciiViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cipher_views_ascii_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CipherViewsAsciiView), 0, (GInstanceInitFunc) cipher_views_ascii_view_instance_init, NULL };
		GType cipher_views_ascii_view_type_id;
		cipher_views_ascii_view_type_id = g_type_register_static (gtk_grid_get_type (), "CipherViewsAsciiView", &g_define_type_info, 0);
		g_once_init_leave (&cipher_views_ascii_view_type_id__volatile, cipher_views_ascii_view_type_id);
	}
	return cipher_views_ascii_view_type_id__volatile;
}



