/* Properties.c generated by valac 0.40.0, the Vala compiler
 * generated from Properties.vala, do not modify */

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


#define CIPHER_CONFIGS_TYPE_PROPERTIES (cipher_configs_properties_get_type ())
#define CIPHER_CONFIGS_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CIPHER_CONFIGS_TYPE_PROPERTIES, CipherConfigsProperties))
#define CIPHER_CONFIGS_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CIPHER_CONFIGS_TYPE_PROPERTIES, CipherConfigsPropertiesClass))
#define CIPHER_CONFIGS_IS_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CIPHER_CONFIGS_TYPE_PROPERTIES))
#define CIPHER_CONFIGS_IS_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CIPHER_CONFIGS_TYPE_PROPERTIES))
#define CIPHER_CONFIGS_PROPERTIES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CIPHER_CONFIGS_TYPE_PROPERTIES, CipherConfigsPropertiesClass))

typedef struct _CipherConfigsProperties CipherConfigsProperties;
typedef struct _CipherConfigsPropertiesClass CipherConfigsPropertiesClass;
typedef struct _CipherConfigsPropertiesPrivate CipherConfigsPropertiesPrivate;
typedef struct _CipherConfigsParamSpecProperties CipherConfigsParamSpecProperties;

struct _CipherConfigsProperties {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CipherConfigsPropertiesPrivate * priv;
};

struct _CipherConfigsPropertiesClass {
	GTypeClass parent_class;
	void (*finalize) (CipherConfigsProperties *self);
};

struct _CipherConfigsParamSpecProperties {
	GParamSpec parent_instance;
};


static gpointer cipher_configs_properties_parent_class = NULL;

gpointer cipher_configs_properties_ref (gpointer instance);
void cipher_configs_properties_unref (gpointer instance);
GParamSpec* cipher_configs_param_spec_properties (const gchar* name,
                                                  const gchar* nick,
                                                  const gchar* blurb,
                                                  GType object_type,
                                                  GParamFlags flags);
void cipher_configs_value_set_properties (GValue* value,
                                          gpointer v_object);
void cipher_configs_value_take_properties (GValue* value,
                                           gpointer v_object);
gpointer cipher_configs_value_get_properties (const GValue* value);
GType cipher_configs_properties_get_type (void) G_GNUC_CONST;
#define CIPHER_CONFIGS_PROPERTIES_TITLE_HEADER_BAR "Cipher"
CipherConfigsProperties* cipher_configs_properties_new (void);
CipherConfigsProperties* cipher_configs_properties_construct (GType object_type);
static void cipher_configs_properties_finalize (CipherConfigsProperties * obj);


CipherConfigsProperties*
cipher_configs_properties_construct (GType object_type)
{
	CipherConfigsProperties* self = NULL;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	self = (CipherConfigsProperties*) g_type_create_instance (object_type);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return self;
#line 91 "Properties.c"
}


CipherConfigsProperties*
cipher_configs_properties_new (void)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return cipher_configs_properties_construct (CIPHER_CONFIGS_TYPE_PROPERTIES);
#line 100 "Properties.c"
}


static void
cipher_configs_value_properties_init (GValue* value)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	value->data[0].v_pointer = NULL;
#line 109 "Properties.c"
}


static void
cipher_configs_value_properties_free_value (GValue* value)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (value->data[0].v_pointer) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		cipher_configs_properties_unref (value->data[0].v_pointer);
#line 120 "Properties.c"
	}
}


static void
cipher_configs_value_properties_copy_value (const GValue* src_value,
                                            GValue* dest_value)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (src_value->data[0].v_pointer) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		dest_value->data[0].v_pointer = cipher_configs_properties_ref (src_value->data[0].v_pointer);
#line 133 "Properties.c"
	} else {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		dest_value->data[0].v_pointer = NULL;
#line 137 "Properties.c"
	}
}


static gpointer
cipher_configs_value_properties_peek_pointer (const GValue* value)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return value->data[0].v_pointer;
#line 147 "Properties.c"
}


static gchar*
cipher_configs_value_properties_collect_value (GValue* value,
                                               guint n_collect_values,
                                               GTypeCValue* collect_values,
                                               guint collect_flags)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (collect_values[0].v_pointer) {
#line 159 "Properties.c"
		CipherConfigsProperties * object;
		object = collect_values[0].v_pointer;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		if (object->parent_instance.g_class == NULL) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 166 "Properties.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 170 "Properties.c"
		}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = cipher_configs_properties_ref (object);
#line 174 "Properties.c"
	} else {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = NULL;
#line 178 "Properties.c"
	}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return NULL;
#line 182 "Properties.c"
}


static gchar*
cipher_configs_value_properties_lcopy_value (const GValue* value,
                                             guint n_collect_values,
                                             GTypeCValue* collect_values,
                                             guint collect_flags)
{
	CipherConfigsProperties ** object_p;
	object_p = collect_values[0].v_pointer;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (!object_p) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 198 "Properties.c"
	}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (!value->data[0].v_pointer) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		*object_p = NULL;
#line 204 "Properties.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		*object_p = value->data[0].v_pointer;
#line 208 "Properties.c"
	} else {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		*object_p = cipher_configs_properties_ref (value->data[0].v_pointer);
#line 212 "Properties.c"
	}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return NULL;
#line 216 "Properties.c"
}


GParamSpec*
cipher_configs_param_spec_properties (const gchar* name,
                                      const gchar* nick,
                                      const gchar* blurb,
                                      GType object_type,
                                      GParamFlags flags)
{
	CipherConfigsParamSpecProperties* spec;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_return_val_if_fail (g_type_is_a (object_type, CIPHER_CONFIGS_TYPE_PROPERTIES), NULL);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return G_PARAM_SPEC (spec);
#line 236 "Properties.c"
}


gpointer
cipher_configs_value_get_properties (const GValue* value)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CONFIGS_TYPE_PROPERTIES), NULL);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return value->data[0].v_pointer;
#line 247 "Properties.c"
}


void
cipher_configs_value_set_properties (GValue* value,
                                     gpointer v_object)
{
	CipherConfigsProperties * old;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CONFIGS_TYPE_PROPERTIES));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	old = value->data[0].v_pointer;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (v_object) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CONFIGS_TYPE_PROPERTIES));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = v_object;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		cipher_configs_properties_ref (value->data[0].v_pointer);
#line 270 "Properties.c"
	} else {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = NULL;
#line 274 "Properties.c"
	}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (old) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		cipher_configs_properties_unref (old);
#line 280 "Properties.c"
	}
}


void
cipher_configs_value_take_properties (GValue* value,
                                      gpointer v_object)
{
	CipherConfigsProperties * old;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CIPHER_CONFIGS_TYPE_PROPERTIES));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	old = value->data[0].v_pointer;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (v_object) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CIPHER_CONFIGS_TYPE_PROPERTIES));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = v_object;
#line 302 "Properties.c"
	} else {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		value->data[0].v_pointer = NULL;
#line 306 "Properties.c"
	}
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (old) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		cipher_configs_properties_unref (old);
#line 312 "Properties.c"
	}
}


static void
cipher_configs_properties_class_init (CipherConfigsPropertiesClass * klass)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	cipher_configs_properties_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	((CipherConfigsPropertiesClass *) klass)->finalize = cipher_configs_properties_finalize;
#line 324 "Properties.c"
}


static void
cipher_configs_properties_instance_init (CipherConfigsProperties * self)
{
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	self->ref_count = 1;
#line 333 "Properties.c"
}


static void
cipher_configs_properties_finalize (CipherConfigsProperties * obj)
{
	CipherConfigsProperties * self;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CIPHER_CONFIGS_TYPE_PROPERTIES, CipherConfigsProperties);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_signal_handlers_destroy (self);
#line 345 "Properties.c"
}


/**
     * The {@code Properties} class is responsible for defining all 
     * the texts that are displayed in the application and must be translated.
     *
     * @since 0.1.0
     */
GType
cipher_configs_properties_get_type (void)
{
	static volatile gsize cipher_configs_properties_type_id__volatile = 0;
	if (g_once_init_enter (&cipher_configs_properties_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { cipher_configs_value_properties_init, cipher_configs_value_properties_free_value, cipher_configs_value_properties_copy_value, cipher_configs_value_properties_peek_pointer, "p", cipher_configs_value_properties_collect_value, "p", cipher_configs_value_properties_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (CipherConfigsPropertiesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cipher_configs_properties_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CipherConfigsProperties), 0, (GInstanceInitFunc) cipher_configs_properties_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType cipher_configs_properties_type_id;
		cipher_configs_properties_type_id = g_type_register_fundamental (g_type_fundamental_next (), "CipherConfigsProperties", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&cipher_configs_properties_type_id__volatile, cipher_configs_properties_type_id);
	}
	return cipher_configs_properties_type_id__volatile;
}


gpointer
cipher_configs_properties_ref (gpointer instance)
{
	CipherConfigsProperties * self;
	self = instance;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	g_atomic_int_inc (&self->ref_count);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	return instance;
#line 380 "Properties.c"
}


void
cipher_configs_properties_unref (gpointer instance)
{
	CipherConfigsProperties * self;
	self = instance;
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		CIPHER_CONFIGS_PROPERTIES_GET_CLASS (self)->finalize (self);
#line 30 "/home/shubhamarora/cipher/src/configs/Properties.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 395 "Properties.c"
	}
}


