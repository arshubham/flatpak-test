/* Rot13.c generated by valac 0.40.0, the Vala compiler
 * generated from Rot13.vala, do not modify */

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
#include <gobject/gvaluecollector.h>


#define CIPHER_CIPHERS_TYPE_ROT13 (cipher_ciphers_rot13_get_type ())
#define CIPHER_CIPHERS_ROT13(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_CIPHERS_TYPE_ROT13, CipherCiphersRot13))
#define CIPHER_CIPHERS_ROT13_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_CIPHERS_TYPE_ROT13, CipherCiphersRot13Class))
#define CIPHER_CIPHERS_IS_ROT13(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_CIPHERS_TYPE_ROT13))
#define CIPHER_CIPHERS_IS_ROT13_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_CIPHERS_TYPE_ROT13))
#define CIPHER_CIPHERS_ROT13_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_CIPHERS_TYPE_ROT13, CipherCiphersRot13Class))

typedef struct _CipherCiphersRot13 CipherCiphersRot13;
typedef struct _CipherCiphersRot13Class CipherCiphersRot13Class;
typedef struct _CipherCiphersRot13Private CipherCiphersRot13Private;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _CipherCiphersParamSpecRot13 CipherCiphersParamSpecRot13;

struct _CipherCiphersRot13 {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CipherCiphersRot13Private * priv;
};

struct _CipherCiphersRot13Class {
	GTypeClass parent_class;
	void (*finalize) (CipherCiphersRot13 *self);
};

struct _CipherCiphersParamSpecRot13 {
	GParamSpec parent_instance;
};


static gpointer cipher_ciphers_rot13_parent_class = NULL;
static gchar* cipher_ciphers_rot13_hash;
static gchar* cipher_ciphers_rot13_hash = NULL;

gpointer cipher_ciphers_rot13_ref (gpointer instance);
void cipher_ciphers_rot13_unref (gpointer instance);
GParamSpec* cipher_ciphers_param_spec_rot13 (const gchar* name,
                                             const gchar* nick,
                                             const gchar* blurb,
                                             GType object_type,
                                             GParamFlags flags);
void cipher_ciphers_value_set_rot13 (GValue* value,
                                     gpointer v_object);
void cipher_ciphers_value_take_rot13 (GValue* value,
                                      gpointer v_object);
gpointer cipher_ciphers_value_get_rot13 (const GValue* value);
GType cipher_ciphers_rot13_get_type (void) G_GNUC_CONST;
gchar* cipher_ciphers_rot13_encryptROT13 (CipherCiphersRot13* self,
                                          const gchar* plainText);
gchar* cipher_ciphers_rot13_decryptROT13 (CipherCiphersRot13* self,
                                          const gchar* cipherText);
CipherCiphersRot13* cipher_ciphers_rot13_new (void);
CipherCiphersRot13* cipher_ciphers_rot13_construct (GType object_type);
static void cipher_ciphers_rot13_finalize (CipherCiphersRot13 * obj);


static gboolean
string_get_next_char (const gchar* self,
                      gint* index,
                      gunichar* c)
{
	gunichar _vala_c = 0U;
	gboolean result = FALSE;
	gunichar _tmp0_;
#line 1143 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, FALSE);
#line 1144 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	_vala_c = g_utf8_get_char (((gchar*) self) + (*index));
#line 1145 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	_tmp0_ = _vala_c;
#line 1145 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	if (_tmp0_ != ((gunichar) 0)) {
#line 105 "Rot13.c"
		gchar* _tmp1_;
#line 1146 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		_tmp1_ = g_utf8_next_char (((gchar*) self) + (*index));
#line 1146 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		*index = (gint) (_tmp1_ - ((gchar*) self));
#line 1147 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		result = TRUE;
#line 1147 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		if (c) {
#line 1147 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
			*c = _vala_c;
#line 117 "Rot13.c"
		}
#line 1147 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		return result;
#line 121 "Rot13.c"
	} else {
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		result = FALSE;
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		if (c) {
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
			*c = _vala_c;
#line 129 "Rot13.c"
		}
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		return result;
#line 133 "Rot13.c"
	}
#line 1143 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	if (c) {
#line 1143 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		*c = _vala_c;
#line 139 "Rot13.c"
	}
}


static gunichar
string_get_char (const gchar* self,
                 glong index)
{
	gunichar result = 0U;
#line 1154 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, 0U);
#line 1155 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	result = g_utf8_get_char (((gchar*) self) + index);
#line 1155 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	return result;
#line 155 "Rot13.c"
}


static gchar*
g_unichar_to_string (gunichar self)
{
	gchar* result = NULL;
	gchar* str = NULL;
	gchar* _tmp0_;
	const gchar* _tmp1_;
#line 963 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	_tmp0_ = g_new0 (gchar, 7);
#line 963 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	str = (gchar*) _tmp0_;
#line 964 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	_tmp1_ = str;
#line 964 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	g_unichar_to_utf8 (self, _tmp1_);
#line 965 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	result = str;
#line 965 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	return result;
#line 178 "Rot13.c"
}


gchar*
cipher_ciphers_rot13_encryptROT13 (CipherCiphersRot13* self,
                                   const gchar* plainText)
{
	gchar* result = NULL;
	gchar* cipherText = NULL;
	gchar* _tmp0_;
	gunichar character = 0U;
	gunichar c = 0U;
#line 28 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (plainText != NULL, NULL);
#line 29 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	_tmp0_ = g_strdup ("");
#line 29 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	cipherText = _tmp0_;
#line 199 "Rot13.c"
	{
		gint i = 0;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		i = 0;
#line 204 "Rot13.c"
		{
			gboolean _tmp1_ = FALSE;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			_tmp1_ = TRUE;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			while (TRUE) {
#line 211 "Rot13.c"
				gunichar _tmp2_ = 0U;
				gboolean _tmp3_;
				gboolean _tmp4_ = FALSE;
				gboolean _tmp5_ = FALSE;
				gunichar _tmp6_;
				const gchar* _tmp15_;
				gunichar _tmp16_;
				gchar* _tmp17_;
				gchar* _tmp18_;
				gchar* _tmp19_;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (!_tmp1_) {
#line 224 "Rot13.c"
				}
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp1_ = FALSE;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp3_ = string_get_next_char (plainText, &i, &_tmp2_);
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				character = _tmp2_;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (!_tmp3_) {
#line 33 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					break;
#line 236 "Rot13.c"
				}
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp6_ = character;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp6_ > ((gunichar) 96)) {
#line 242 "Rot13.c"
					gunichar _tmp7_;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp7_ = character;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp5_ = _tmp7_ < ((gunichar) 123);
#line 248 "Rot13.c"
				} else {
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp5_ = FALSE;
#line 252 "Rot13.c"
				}
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp5_) {
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp4_ = TRUE;
#line 258 "Rot13.c"
				} else {
					gboolean _tmp8_ = FALSE;
					gunichar _tmp9_;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp9_ = character;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					if (_tmp9_ > ((gunichar) 64)) {
#line 266 "Rot13.c"
						gunichar _tmp10_;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp10_ = character;
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp8_ = _tmp10_ < ((gunichar) 91);
#line 272 "Rot13.c"
					} else {
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp8_ = FALSE;
#line 276 "Rot13.c"
					}
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp4_ = _tmp8_;
#line 280 "Rot13.c"
				}
#line 34 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp4_) {
#line 284 "Rot13.c"
					gunichar _tmp11_;
					const gchar* _tmp12_;
					gunichar _tmp13_;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp11_ = character;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = _tmp11_ - 'A';
#line 36 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp12_ = cipher_ciphers_rot13_hash;
#line 36 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp13_ = c;
#line 36 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = string_get_char (_tmp12_, (glong) ((gint) _tmp13_));
#line 298 "Rot13.c"
				} else {
					gunichar _tmp14_;
#line 38 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp14_ = character;
#line 38 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = _tmp14_;
#line 305 "Rot13.c"
				}
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp15_ = cipherText;
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp16_ = c;
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp17_ = g_unichar_to_string (_tmp16_);
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp18_ = _tmp17_;
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp19_ = g_strconcat (_tmp15_, _tmp18_, NULL);
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_g_free0 (cipherText);
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				cipherText = _tmp19_;
#line 40 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_g_free0 (_tmp18_);
#line 323 "Rot13.c"
			}
		}
	}
#line 42 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	result = cipherText;
#line 42 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return result;
#line 331 "Rot13.c"
}


gchar*
cipher_ciphers_rot13_decryptROT13 (CipherCiphersRot13* self,
                                   const gchar* cipherText)
{
	gchar* result = NULL;
	gchar* plainText = NULL;
	gchar* _tmp0_;
	gunichar character = 0U;
	gunichar c = 0U;
#line 45 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 45 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (cipherText != NULL, NULL);
#line 46 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	_tmp0_ = g_strdup ("");
#line 46 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	plainText = _tmp0_;
#line 352 "Rot13.c"
	{
		gint i = 0;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		i = 0;
#line 357 "Rot13.c"
		{
			gboolean _tmp1_ = FALSE;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			_tmp1_ = TRUE;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			while (TRUE) {
#line 364 "Rot13.c"
				gunichar _tmp2_ = 0U;
				gboolean _tmp3_;
				gboolean _tmp4_ = FALSE;
				gboolean _tmp5_ = FALSE;
				gunichar _tmp6_;
				const gchar* _tmp15_;
				gunichar _tmp16_;
				gchar* _tmp17_;
				gchar* _tmp18_;
				gchar* _tmp19_;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (!_tmp1_) {
#line 377 "Rot13.c"
				}
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp1_ = FALSE;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp3_ = string_get_next_char (cipherText, &i, &_tmp2_);
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				character = _tmp2_;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (!_tmp3_) {
#line 50 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					break;
#line 389 "Rot13.c"
				}
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp6_ = character;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp6_ > ((gunichar) 96)) {
#line 395 "Rot13.c"
					gunichar _tmp7_;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp7_ = character;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp5_ = _tmp7_ < ((gunichar) 123);
#line 401 "Rot13.c"
				} else {
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp5_ = FALSE;
#line 405 "Rot13.c"
				}
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp5_) {
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp4_ = TRUE;
#line 411 "Rot13.c"
				} else {
					gboolean _tmp8_ = FALSE;
					gunichar _tmp9_;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp9_ = character;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					if (_tmp9_ > ((gunichar) 64)) {
#line 419 "Rot13.c"
						gunichar _tmp10_;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp10_ = character;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp8_ = _tmp10_ < ((gunichar) 91);
#line 425 "Rot13.c"
					} else {
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
						_tmp8_ = FALSE;
#line 429 "Rot13.c"
					}
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp4_ = _tmp8_;
#line 433 "Rot13.c"
				}
#line 51 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				if (_tmp4_) {
#line 437 "Rot13.c"
					gunichar _tmp11_;
					const gchar* _tmp12_;
					gunichar _tmp13_;
#line 52 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp11_ = character;
#line 52 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = _tmp11_ - 'A';
#line 53 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp12_ = cipher_ciphers_rot13_hash;
#line 53 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp13_ = c;
#line 53 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = string_get_char (_tmp12_, (glong) ((gint) _tmp13_));
#line 451 "Rot13.c"
				} else {
					gunichar _tmp14_;
#line 55 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					_tmp14_ = character;
#line 55 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
					c = _tmp14_;
#line 458 "Rot13.c"
				}
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp15_ = plainText;
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp16_ = c;
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp17_ = g_unichar_to_string (_tmp16_);
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp18_ = _tmp17_;
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_tmp19_ = g_strconcat (_tmp15_, _tmp18_, NULL);
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_g_free0 (plainText);
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				plainText = _tmp19_;
#line 57 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
				_g_free0 (_tmp18_);
#line 476 "Rot13.c"
			}
		}
	}
#line 60 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	result = plainText;
#line 60 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return result;
#line 484 "Rot13.c"
}


CipherCiphersRot13*
cipher_ciphers_rot13_construct (GType object_type)
{
	CipherCiphersRot13* self = NULL;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	self = (CipherCiphersRot13*) g_type_create_instance (object_type);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return self;
#line 496 "Rot13.c"
}


CipherCiphersRot13*
cipher_ciphers_rot13_new (void)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return cipher_ciphers_rot13_construct (CIPHER_CIPHERS_TYPE_ROT13);
#line 505 "Rot13.c"
}


static void
cipher_ciphers_value_rot13_init (GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	value->data[0].v_pointer = NULL;
#line 514 "Rot13.c"
}


static void
cipher_ciphers_value_rot13_free_value (GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		cipher_ciphers_rot13_unref (value->data[0].v_pointer);
#line 525 "Rot13.c"
	}
}


static void
cipher_ciphers_value_rot13_copy_value (const GValue* src_value,
                                       GValue* dest_value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (src_value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		dest_value->data[0].v_pointer = cipher_ciphers_rot13_ref (src_value->data[0].v_pointer);
#line 538 "Rot13.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		dest_value->data[0].v_pointer = NULL;
#line 542 "Rot13.c"
	}
}


static gpointer
cipher_ciphers_value_rot13_peek_pointer (const GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return value->data[0].v_pointer;
#line 552 "Rot13.c"
}


static gchar*
cipher_ciphers_value_rot13_collect_value (GValue* value,
                                          guint n_collect_values,
                                          GTypeCValue* collect_values,
                                          guint collect_flags)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (collect_values[0].v_pointer) {
#line 564 "Rot13.c"
		CipherCiphersRot13 * object;
		object = collect_values[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		if (object->parent_instance.g_class == NULL) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 571 "Rot13.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 575 "Rot13.c"
		}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = cipher_ciphers_rot13_ref (object);
#line 579 "Rot13.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = NULL;
#line 583 "Rot13.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return NULL;
#line 587 "Rot13.c"
}


static gchar*
cipher_ciphers_value_rot13_lcopy_value (const GValue* value,
                                        guint n_collect_values,
                                        GTypeCValue* collect_values,
                                        guint collect_flags)
{
	CipherCiphersRot13 ** object_p;
	object_p = collect_values[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (!object_p) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 603 "Rot13.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (!value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		*object_p = NULL;
#line 609 "Rot13.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		*object_p = value->data[0].v_pointer;
#line 613 "Rot13.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		*object_p = cipher_ciphers_rot13_ref (value->data[0].v_pointer);
#line 617 "Rot13.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return NULL;
#line 621 "Rot13.c"
}


GParamSpec*
cipher_ciphers_param_spec_rot13 (const gchar* name,
                                 const gchar* nick,
                                 const gchar* blurb,
                                 GType object_type,
                                 GParamFlags flags)
{
	CipherCiphersParamSpecRot13* spec;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (g_type_is_a (object_type, CIPHER_CIPHERS_TYPE_ROT13), NULL);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return G_PARAM_SPEC (spec);
#line 641 "Rot13.c"
}


gpointer
cipher_ciphers_value_get_rot13 (const GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ROT13), NULL);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return value->data[0].v_pointer;
#line 652 "Rot13.c"
}


void
cipher_ciphers_value_set_rot13 (GValue* value,
                                gpointer v_object)
{
	CipherCiphersRot13 * old;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ROT13));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	old = value->data[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (v_object) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CIPHERS_TYPE_ROT13));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = v_object;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		cipher_ciphers_rot13_ref (value->data[0].v_pointer);
#line 675 "Rot13.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = NULL;
#line 679 "Rot13.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (old) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		cipher_ciphers_rot13_unref (old);
#line 685 "Rot13.c"
	}
}


void
cipher_ciphers_value_take_rot13 (GValue* value,
                                 gpointer v_object)
{
	CipherCiphersRot13 * old;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ROT13));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	old = value->data[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (v_object) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CIPHERS_TYPE_ROT13));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = v_object;
#line 707 "Rot13.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		value->data[0].v_pointer = NULL;
#line 711 "Rot13.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (old) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		cipher_ciphers_rot13_unref (old);
#line 717 "Rot13.c"
	}
}


static void
cipher_ciphers_rot13_class_init (CipherCiphersRot13Class * klass)
{
	gchar* _tmp0_;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	cipher_ciphers_rot13_parent_class = g_type_class_peek_parent (klass);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	((CipherCiphersRot13Class *) klass)->finalize = cipher_ciphers_rot13_finalize;
#line 26 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	_tmp0_ = g_strdup ("NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm");
#line 26 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	cipher_ciphers_rot13_hash = _tmp0_;
#line 734 "Rot13.c"
}


static void
cipher_ciphers_rot13_instance_init (CipherCiphersRot13 * self)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	self->ref_count = 1;
#line 743 "Rot13.c"
}


static void
cipher_ciphers_rot13_finalize (CipherCiphersRot13 * obj)
{
	CipherCiphersRot13 * self;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_CIPHERS_TYPE_ROT13, CipherCiphersRot13);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_signal_handlers_destroy (self);
#line 755 "Rot13.c"
}


GType
cipher_ciphers_rot13_get_type (void)
{
	static volatile gsize cipher_ciphers_rot13_type_id__volatile = 0;
	if (g_once_init_enter (&cipher_ciphers_rot13_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { cipher_ciphers_value_rot13_init, cipher_ciphers_value_rot13_free_value, cipher_ciphers_value_rot13_copy_value, cipher_ciphers_value_rot13_peek_pointer, "p", cipher_ciphers_value_rot13_collect_value, "p", cipher_ciphers_value_rot13_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (CipherCiphersRot13Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cipher_ciphers_rot13_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CipherCiphersRot13), 0, (GInstanceInitFunc) cipher_ciphers_rot13_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType cipher_ciphers_rot13_type_id;
		cipher_ciphers_rot13_type_id = g_type_register_fundamental (g_type_fundamental_next (), "CipherCiphersRot13", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&cipher_ciphers_rot13_type_id__volatile, cipher_ciphers_rot13_type_id);
	}
	return cipher_ciphers_rot13_type_id__volatile;
}


gpointer
cipher_ciphers_rot13_ref (gpointer instance)
{
	CipherCiphersRot13 * self;
	self = instance;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	g_atomic_int_inc (&self->ref_count);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	return instance;
#line 784 "Rot13.c"
}


void
cipher_ciphers_rot13_unref (gpointer instance)
{
	CipherCiphersRot13 * self;
	self = instance;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		CIPHER_CIPHERS_ROT13_GET_CLASS (self)->finalize (self);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Rot13.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 799 "Rot13.c"
	}
}



