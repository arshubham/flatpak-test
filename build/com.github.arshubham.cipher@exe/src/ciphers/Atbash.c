/* Atbash.c generated by valac 0.40.0, the Vala compiler
 * generated from Atbash.vala, do not modify */

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


#define CIPHER_CIPHERS_TYPE_ATBASH (cipher_ciphers_atbash_get_type ())
#define CIPHER_CIPHERS_ATBASH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_CIPHERS_TYPE_ATBASH, CipherCiphersAtbash))
#define CIPHER_CIPHERS_ATBASH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_CIPHERS_TYPE_ATBASH, CipherCiphersAtbashClass))
#define CIPHER_CIPHERS_IS_ATBASH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_CIPHERS_TYPE_ATBASH))
#define CIPHER_CIPHERS_IS_ATBASH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_CIPHERS_TYPE_ATBASH))
#define CIPHER_CIPHERS_ATBASH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_CIPHERS_TYPE_ATBASH, CipherCiphersAtbashClass))

typedef struct _CipherCiphersAtbash CipherCiphersAtbash;
typedef struct _CipherCiphersAtbashClass CipherCiphersAtbashClass;
typedef struct _CipherCiphersAtbashPrivate CipherCiphersAtbashPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _CipherCiphersParamSpecAtbash CipherCiphersParamSpecAtbash;

struct _CipherCiphersAtbash {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CipherCiphersAtbashPrivate * priv;
};

struct _CipherCiphersAtbashClass {
	GTypeClass parent_class;
	void (*finalize) (CipherCiphersAtbash *self);
};

struct _CipherCiphersParamSpecAtbash {
	GParamSpec parent_instance;
};


static gpointer cipher_ciphers_atbash_parent_class = NULL;

gpointer cipher_ciphers_atbash_ref (gpointer instance);
void cipher_ciphers_atbash_unref (gpointer instance);
GParamSpec* cipher_ciphers_param_spec_atbash (const gchar* name,
                                              const gchar* nick,
                                              const gchar* blurb,
                                              GType object_type,
                                              GParamFlags flags);
void cipher_ciphers_value_set_atbash (GValue* value,
                                      gpointer v_object);
void cipher_ciphers_value_take_atbash (GValue* value,
                                       gpointer v_object);
gpointer cipher_ciphers_value_get_atbash (const GValue* value);
GType cipher_ciphers_atbash_get_type (void) G_GNUC_CONST;
gchar* cipher_ciphers_atbash_encryptAtbash (CipherCiphersAtbash* self,
                                            const gchar* plainText);
gchar* cipher_ciphers_atbash_decryptAtbash (CipherCiphersAtbash* self,
                                            const gchar* cipherText);
CipherCiphersAtbash* cipher_ciphers_atbash_new (void);
CipherCiphersAtbash* cipher_ciphers_atbash_construct (GType object_type);
static void cipher_ciphers_atbash_finalize (CipherCiphersAtbash * obj);


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
#line 103 "Atbash.c"
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
#line 115 "Atbash.c"
		}
#line 1147 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		return result;
#line 119 "Atbash.c"
	} else {
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		result = FALSE;
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		if (c) {
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
			*c = _vala_c;
#line 127 "Atbash.c"
		}
#line 1149 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		return result;
#line 131 "Atbash.c"
	}
#line 1143 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	if (c) {
#line 1143 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
		*c = _vala_c;
#line 137 "Atbash.c"
	}
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
#line 161 "Atbash.c"
}


gchar*
cipher_ciphers_atbash_encryptAtbash (CipherCiphersAtbash* self,
                                     const gchar* plainText)
{
	gchar* result = NULL;
	gchar* cipherText = NULL;
	gchar* _tmp0_;
	gunichar character = 0U;
	gunichar subtractor = 0U;
#line 26 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 26 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (plainText != NULL, NULL);
#line 27 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	_tmp0_ = g_strdup ("");
#line 27 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	cipherText = _tmp0_;
#line 182 "Atbash.c"
	{
		gint i = 0;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		i = 0;
#line 187 "Atbash.c"
		{
			gboolean _tmp1_ = FALSE;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			_tmp1_ = TRUE;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			while (TRUE) {
#line 194 "Atbash.c"
				gunichar _tmp2_ = 0U;
				gboolean _tmp3_;
				gboolean _tmp4_ = FALSE;
				gunichar _tmp5_;
				const gchar* _tmp16_;
				gunichar _tmp17_;
				gchar* _tmp18_;
				gchar* _tmp19_;
				gchar* _tmp20_;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (!_tmp1_) {
#line 206 "Atbash.c"
				}
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp1_ = FALSE;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp3_ = string_get_next_char (plainText, &i, &_tmp2_);
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				character = _tmp2_;
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (!_tmp3_) {
#line 30 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					break;
#line 218 "Atbash.c"
				}
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp5_ = character;
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (_tmp5_ > ((gunichar) 96)) {
#line 224 "Atbash.c"
					gunichar _tmp6_;
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp6_ = character;
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp4_ = _tmp6_ < ((gunichar) 123);
#line 230 "Atbash.c"
				} else {
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp4_ = FALSE;
#line 234 "Atbash.c"
				}
#line 31 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (_tmp4_) {
#line 238 "Atbash.c"
					gunichar _tmp7_;
					gunichar _tmp8_;
					gunichar _tmp9_;
#line 32 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp7_ = character;
#line 32 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					subtractor = 2 * (_tmp7_ % 97);
#line 33 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp8_ = character;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp9_ = subtractor;
#line 33 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					character = _tmp8_ + (25 - _tmp9_);
#line 252 "Atbash.c"
				} else {
					gboolean _tmp10_ = FALSE;
					gunichar _tmp11_;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp11_ = character;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					if (_tmp11_ > ((gunichar) 64)) {
#line 260 "Atbash.c"
						gunichar _tmp12_;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp12_ = character;
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp10_ = _tmp12_ < ((gunichar) 91);
#line 266 "Atbash.c"
					} else {
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp10_ = FALSE;
#line 270 "Atbash.c"
					}
#line 35 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					if (_tmp10_) {
#line 274 "Atbash.c"
						gunichar _tmp13_;
						gunichar _tmp14_;
						gunichar _tmp15_;
#line 36 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp13_ = character;
#line 36 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						subtractor = 2 * (_tmp13_ % 65);
#line 37 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp14_ = character;
#line 37 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp15_ = subtractor;
#line 37 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						character = _tmp14_ + (25 - _tmp15_);
#line 288 "Atbash.c"
					}
				}
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp16_ = cipherText;
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp17_ = character;
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp18_ = g_unichar_to_string (_tmp17_);
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp19_ = _tmp18_;
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp20_ = g_strconcat (_tmp16_, _tmp19_, NULL);
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_g_free0 (cipherText);
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				cipherText = _tmp20_;
#line 39 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_g_free0 (_tmp19_);
#line 307 "Atbash.c"
			}
		}
	}
#line 41 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	result = cipherText;
#line 41 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return result;
#line 315 "Atbash.c"
}


gchar*
cipher_ciphers_atbash_decryptAtbash (CipherCiphersAtbash* self,
                                     const gchar* cipherText)
{
	gchar* result = NULL;
	gchar* plainText = NULL;
	gchar* _tmp0_;
	gunichar character = 0U;
	gunichar subtractor = 0U;
#line 44 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 44 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (cipherText != NULL, NULL);
#line 45 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	_tmp0_ = g_strdup ("");
#line 45 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	plainText = _tmp0_;
#line 336 "Atbash.c"
	{
		gint i = 0;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		i = 0;
#line 341 "Atbash.c"
		{
			gboolean _tmp1_ = FALSE;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			_tmp1_ = TRUE;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			while (TRUE) {
#line 348 "Atbash.c"
				gunichar _tmp2_ = 0U;
				gboolean _tmp3_;
				gboolean _tmp4_ = FALSE;
				gunichar _tmp5_;
				const gchar* _tmp16_;
				gunichar _tmp17_;
				gchar* _tmp18_;
				gchar* _tmp19_;
				gchar* _tmp20_;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (!_tmp1_) {
#line 360 "Atbash.c"
				}
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp1_ = FALSE;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp3_ = string_get_next_char (cipherText, &i, &_tmp2_);
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				character = _tmp2_;
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (!_tmp3_) {
#line 49 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					break;
#line 372 "Atbash.c"
				}
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp5_ = character;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (_tmp5_ > ((gunichar) 96)) {
#line 378 "Atbash.c"
					gunichar _tmp6_;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp6_ = character;
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp4_ = _tmp6_ < ((gunichar) 123);
#line 384 "Atbash.c"
				} else {
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp4_ = FALSE;
#line 388 "Atbash.c"
				}
#line 50 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				if (_tmp4_) {
#line 392 "Atbash.c"
					gunichar _tmp7_;
					gunichar _tmp8_;
					gunichar _tmp9_;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp7_ = character;
#line 51 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					subtractor = 2 * (_tmp7_ % 97);
#line 52 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp8_ = character;
#line 52 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp9_ = subtractor;
#line 52 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					character = _tmp8_ + (25 - _tmp9_);
#line 406 "Atbash.c"
				} else {
					gboolean _tmp10_ = FALSE;
					gunichar _tmp11_;
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					_tmp11_ = character;
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					if (_tmp11_ > ((gunichar) 64)) {
#line 414 "Atbash.c"
						gunichar _tmp12_;
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp12_ = character;
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp10_ = _tmp12_ < ((gunichar) 91);
#line 420 "Atbash.c"
					} else {
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp10_ = FALSE;
#line 424 "Atbash.c"
					}
#line 54 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
					if (_tmp10_) {
#line 428 "Atbash.c"
						gunichar _tmp13_;
						gunichar _tmp14_;
						gunichar _tmp15_;
#line 55 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp13_ = character;
#line 55 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						subtractor = 2 * (_tmp13_ % 65);
#line 56 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp14_ = character;
#line 56 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						_tmp15_ = subtractor;
#line 56 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
						character = _tmp14_ + (25 - _tmp15_);
#line 442 "Atbash.c"
					}
				}
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp16_ = plainText;
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp17_ = character;
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp18_ = g_unichar_to_string (_tmp17_);
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp19_ = _tmp18_;
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_tmp20_ = g_strconcat (_tmp16_, _tmp19_, NULL);
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_g_free0 (plainText);
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				plainText = _tmp20_;
#line 58 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
				_g_free0 (_tmp19_);
#line 461 "Atbash.c"
			}
		}
	}
#line 61 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	result = plainText;
#line 61 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return result;
#line 469 "Atbash.c"
}


CipherCiphersAtbash*
cipher_ciphers_atbash_construct (GType object_type)
{
	CipherCiphersAtbash* self = NULL;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	self = (CipherCiphersAtbash*) g_type_create_instance (object_type);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return self;
#line 481 "Atbash.c"
}


CipherCiphersAtbash*
cipher_ciphers_atbash_new (void)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return cipher_ciphers_atbash_construct (CIPHER_CIPHERS_TYPE_ATBASH);
#line 490 "Atbash.c"
}


static void
cipher_ciphers_value_atbash_init (GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	value->data[0].v_pointer = NULL;
#line 499 "Atbash.c"
}


static void
cipher_ciphers_value_atbash_free_value (GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		cipher_ciphers_atbash_unref (value->data[0].v_pointer);
#line 510 "Atbash.c"
	}
}


static void
cipher_ciphers_value_atbash_copy_value (const GValue* src_value,
                                        GValue* dest_value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (src_value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		dest_value->data[0].v_pointer = cipher_ciphers_atbash_ref (src_value->data[0].v_pointer);
#line 523 "Atbash.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		dest_value->data[0].v_pointer = NULL;
#line 527 "Atbash.c"
	}
}


static gpointer
cipher_ciphers_value_atbash_peek_pointer (const GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return value->data[0].v_pointer;
#line 537 "Atbash.c"
}


static gchar*
cipher_ciphers_value_atbash_collect_value (GValue* value,
                                           guint n_collect_values,
                                           GTypeCValue* collect_values,
                                           guint collect_flags)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (collect_values[0].v_pointer) {
#line 549 "Atbash.c"
		CipherCiphersAtbash * object;
		object = collect_values[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		if (object->parent_instance.g_class == NULL) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 556 "Atbash.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 560 "Atbash.c"
		}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = cipher_ciphers_atbash_ref (object);
#line 564 "Atbash.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = NULL;
#line 568 "Atbash.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return NULL;
#line 572 "Atbash.c"
}


static gchar*
cipher_ciphers_value_atbash_lcopy_value (const GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
	CipherCiphersAtbash ** object_p;
	object_p = collect_values[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (!object_p) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 588 "Atbash.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (!value->data[0].v_pointer) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		*object_p = NULL;
#line 594 "Atbash.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		*object_p = value->data[0].v_pointer;
#line 598 "Atbash.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		*object_p = cipher_ciphers_atbash_ref (value->data[0].v_pointer);
#line 602 "Atbash.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return NULL;
#line 606 "Atbash.c"
}


GParamSpec*
cipher_ciphers_param_spec_atbash (const gchar* name,
                                  const gchar* nick,
                                  const gchar* blurb,
                                  GType object_type,
                                  GParamFlags flags)
{
	CipherCiphersParamSpecAtbash* spec;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (g_type_is_a (object_type, CIPHER_CIPHERS_TYPE_ATBASH), NULL);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return G_PARAM_SPEC (spec);
#line 626 "Atbash.c"
}


gpointer
cipher_ciphers_value_get_atbash (const GValue* value)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ATBASH), NULL);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return value->data[0].v_pointer;
#line 637 "Atbash.c"
}


void
cipher_ciphers_value_set_atbash (GValue* value,
                                 gpointer v_object)
{
	CipherCiphersAtbash * old;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ATBASH));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	old = value->data[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (v_object) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CIPHERS_TYPE_ATBASH));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = v_object;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		cipher_ciphers_atbash_ref (value->data[0].v_pointer);
#line 660 "Atbash.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = NULL;
#line 664 "Atbash.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (old) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		cipher_ciphers_atbash_unref (old);
#line 670 "Atbash.c"
	}
}


void
cipher_ciphers_value_take_atbash (GValue* value,
                                  gpointer v_object)
{
	CipherCiphersAtbash * old;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CIPHERS_TYPE_ATBASH));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	old = value->data[0].v_pointer;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (v_object) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CIPHERS_TYPE_ATBASH));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = v_object;
#line 692 "Atbash.c"
	} else {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		value->data[0].v_pointer = NULL;
#line 696 "Atbash.c"
	}
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (old) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		cipher_ciphers_atbash_unref (old);
#line 702 "Atbash.c"
	}
}


static void
cipher_ciphers_atbash_class_init (CipherCiphersAtbashClass * klass)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	cipher_ciphers_atbash_parent_class = g_type_class_peek_parent (klass);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	((CipherCiphersAtbashClass *) klass)->finalize = cipher_ciphers_atbash_finalize;
#line 714 "Atbash.c"
}


static void
cipher_ciphers_atbash_instance_init (CipherCiphersAtbash * self)
{
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	self->ref_count = 1;
#line 723 "Atbash.c"
}


static void
cipher_ciphers_atbash_finalize (CipherCiphersAtbash * obj)
{
	CipherCiphersAtbash * self;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_CIPHERS_TYPE_ATBASH, CipherCiphersAtbash);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_signal_handlers_destroy (self);
#line 735 "Atbash.c"
}


GType
cipher_ciphers_atbash_get_type (void)
{
	static volatile gsize cipher_ciphers_atbash_type_id__volatile = 0;
	if (g_once_init_enter (&cipher_ciphers_atbash_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { cipher_ciphers_value_atbash_init, cipher_ciphers_value_atbash_free_value, cipher_ciphers_value_atbash_copy_value, cipher_ciphers_value_atbash_peek_pointer, "p", cipher_ciphers_value_atbash_collect_value, "p", cipher_ciphers_value_atbash_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (CipherCiphersAtbashClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cipher_ciphers_atbash_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CipherCiphersAtbash), 0, (GInstanceInitFunc) cipher_ciphers_atbash_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType cipher_ciphers_atbash_type_id;
		cipher_ciphers_atbash_type_id = g_type_register_fundamental (g_type_fundamental_next (), "CipherCiphersAtbash", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&cipher_ciphers_atbash_type_id__volatile, cipher_ciphers_atbash_type_id);
	}
	return cipher_ciphers_atbash_type_id__volatile;
}


gpointer
cipher_ciphers_atbash_ref (gpointer instance)
{
	CipherCiphersAtbash * self;
	self = instance;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	g_atomic_int_inc (&self->ref_count);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	return instance;
#line 764 "Atbash.c"
}


void
cipher_ciphers_atbash_unref (gpointer instance)
{
	CipherCiphersAtbash * self;
	self = instance;
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		CIPHER_CIPHERS_ATBASH_GET_CLASS (self)->finalize (self);
#line 24 "/home/shubhamarora/cipher/src/ciphers/Atbash.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 779 "Atbash.c"
	}
}



