/* AppSystem.c generated by valac 0.30.1, the Vala compiler
 * generated from AppSystem.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/**/
/*  Copyright (C) 2011-2012 Panther Developers*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <gmenu-tree.h>
#include <stdlib.h>
#include <string.h>


#define PANTHER_BACKEND_TYPE_APP_SYSTEM (panther_backend_app_system_get_type ())
#define PANTHER_BACKEND_APP_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystem))
#define PANTHER_BACKEND_APP_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystemClass))
#define PANTHER_BACKEND_IS_APP_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_BACKEND_TYPE_APP_SYSTEM))
#define PANTHER_BACKEND_IS_APP_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_BACKEND_TYPE_APP_SYSTEM))
#define PANTHER_BACKEND_APP_SYSTEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystemClass))

typedef struct _PantherBackendAppSystem PantherBackendAppSystem;
typedef struct _PantherBackendAppSystemClass PantherBackendAppSystemClass;
typedef struct _PantherBackendAppSystemPrivate PantherBackendAppSystemPrivate;

#define PANTHER_BACKEND_TYPE_APP (panther_backend_app_get_type ())
#define PANTHER_BACKEND_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_BACKEND_TYPE_APP, PantherBackendApp))
#define PANTHER_BACKEND_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_BACKEND_TYPE_APP, PantherBackendAppClass))
#define PANTHER_BACKEND_IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_BACKEND_TYPE_APP))
#define PANTHER_BACKEND_IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_BACKEND_TYPE_APP))
#define PANTHER_BACKEND_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_BACKEND_TYPE_APP, PantherBackendAppClass))

typedef struct _PantherBackendApp PantherBackendApp;
typedef struct _PantherBackendAppClass PantherBackendAppClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define __vala_GMenuTreeDirectory_free0(var) ((var == NULL) ? NULL : (var = (_vala_GMenuTreeDirectory_free (var), NULL)))
#define __vala_GMenuTreeIter_free0(var) ((var == NULL) ? NULL : (var = (_vala_GMenuTreeIter_free (var), NULL)))
#define __vala_GMenuTreeEntry_free0(var) ((var == NULL) ? NULL : (var = (_vala_GMenuTreeEntry_free (var), NULL)))
#define __g_slist_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_slist_free__g_object_unref0_ (var), NULL)))

struct _PantherBackendAppSystem {
	GObject parent_instance;
	PantherBackendAppSystemPrivate * priv;
};

struct _PantherBackendAppSystemClass {
	GObjectClass parent_class;
};

struct _PantherBackendAppSystemPrivate {
	GeeArrayList* categories;
	GeeHashMap* apps;
	GMenuTree* apps_menu;
};


static gpointer panther_backend_app_system_parent_class = NULL;

GType panther_backend_app_system_get_type (void) G_GNUC_CONST;
GType panther_backend_app_get_type (void) G_GNUC_CONST;
#define PANTHER_BACKEND_APP_SYSTEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystemPrivate))
enum  {
	PANTHER_BACKEND_APP_SYSTEM_DUMMY_PROPERTY
};
#define PANTHER_BACKEND_APP_SYSTEM_GCC_PANEL_CATEGORY "X-GNOME-Settings-Panel"
static void panther_backend_app_system_update_app_system (PantherBackendAppSystem* self);
static void panther_backend_app_system_update_categories_index (PantherBackendAppSystem* self);
static void panther_backend_app_system_update_apps (PantherBackendAppSystem* self);
static void _vala_GMenuTreeDirectory_free (GMenuTreeDirectory* self);
static void _vala_GMenuTreeIter_free (GMenuTreeIter* self);
GeeArrayList* panther_backend_app_system_get_apps_by_category (PantherBackendAppSystem* self, GMenuTreeDirectory* category);
GeeArrayList* panther_backend_app_system_get_categories (PantherBackendAppSystem* self);
PantherBackendApp* panther_backend_app_new (GMenuTreeEntry* entry);
PantherBackendApp* panther_backend_app_construct (GType object_type, GMenuTreeEntry* entry);
static void _vala_GMenuTreeEntry_free (GMenuTreeEntry* self);
GeeHashMap* panther_backend_app_system_get_apps (PantherBackendAppSystem* self);
GSList* panther_backend_app_system_get_apps_by_name (PantherBackendAppSystem* self);
const gchar* panther_backend_app_get_categories (PantherBackendApp* self);
const gchar* panther_backend_app_get_exec (PantherBackendApp* self);
static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle);
gint panther_utils_sort_apps_by_name (PantherBackendApp* a, PantherBackendApp* b);
static gint _panther_utils_sort_apps_by_name_gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self);
static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value);
static void _g_object_unref0_ (gpointer var);
static void _g_slist_free__g_object_unref0_ (GSList* self);
PantherBackendAppSystem* panther_backend_app_system_new (void);
PantherBackendAppSystem* panther_backend_app_system_construct (GType object_type);
static GObject * panther_backend_app_system_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void _panther_backend_app_system_update_app_system_gmenu_tree_changed (GMenuTree* _sender, gpointer self);
static GMenuTreeDirectory* _vala_GMenuTreeDirectory_copy (GMenuTreeDirectory* self);
static void panther_backend_app_system_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void panther_backend_app_system_update_app_system (PantherBackendAppSystem* self) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_debug ("AppSystem.vala:49: Updating Applications menu tree...");
	{
		GMenuTree* _tmp0_ = NULL;
		_tmp0_ = self->priv->apps_menu;
		gmenu_tree_load_sync (_tmp0_, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch10_g_error;
		}
	}
	goto __finally10;
	__catch10_g_error:
	{
		GError* e = NULL;
		GError* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp1_ = e;
		_tmp2_ = _tmp1_->message;
		g_warning ("AppSystem.vala:56: %s", _tmp2_);
		_g_error_free0 (e);
	}
	__finally10:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	panther_backend_app_system_update_categories_index (self);
	panther_backend_app_system_update_apps (self);
	g_signal_emit_by_name (self, "changed");
}


static void _vala_GMenuTreeDirectory_free (GMenuTreeDirectory* self) {
	g_boxed_free (gmenu_tree_directory_get_type (), self);
}


static void _vala_GMenuTreeIter_free (GMenuTreeIter* self) {
	g_boxed_free (gmenu_tree_iter_get_type (), self);
}


static void panther_backend_app_system_update_categories_index (PantherBackendAppSystem* self) {
	GeeArrayList* _tmp0_ = NULL;
	GMenuTreeIter* iter = NULL;
	GMenuTree* _tmp1_ = NULL;
	GMenuTreeDirectory* _tmp2_ = NULL;
	GMenuTreeDirectory* _tmp3_ = NULL;
	GMenuTreeIter* _tmp4_ = NULL;
	GMenuTreeIter* _tmp5_ = NULL;
	GMenuTreeItemType type = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->categories;
	gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp0_);
	_tmp1_ = self->priv->apps_menu;
	_tmp2_ = gmenu_tree_get_root_directory (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = gmenu_tree_directory_iter (_tmp3_);
	_tmp5_ = _tmp4_;
	__vala_GMenuTreeDirectory_free0 (_tmp3_);
	iter = _tmp5_;
	while (TRUE) {
		GMenuTreeIter* _tmp6_ = NULL;
		GMenuTreeItemType _tmp7_ = 0;
		GMenuTreeItemType _tmp8_ = 0;
		GMenuTreeItemType _tmp9_ = 0;
		_tmp6_ = iter;
		_tmp7_ = gmenu_tree_iter_next (_tmp6_);
		type = _tmp7_;
		_tmp8_ = type;
		if (!(_tmp8_ != GMENU_TREE_ITEM_INVALID)) {
			break;
		}
		_tmp9_ = type;
		if (_tmp9_ == GMENU_TREE_ITEM_DIRECTORY) {
			GMenuTreeDirectory* dir = NULL;
			GMenuTreeIter* _tmp10_ = NULL;
			GMenuTreeDirectory* _tmp11_ = NULL;
			GMenuTreeDirectory* _tmp12_ = NULL;
			gboolean _tmp13_ = FALSE;
			_tmp10_ = iter;
			_tmp11_ = gmenu_tree_iter_get_directory (_tmp10_);
			dir = _tmp11_;
			_tmp12_ = dir;
			_tmp13_ = gmenu_tree_directory_get_is_nodisplay (_tmp12_);
			if (!_tmp13_) {
				GeeArrayList* _tmp14_ = NULL;
				GMenuTreeDirectory* _tmp15_ = NULL;
				_tmp14_ = self->priv->categories;
				_tmp15_ = dir;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp14_, _tmp15_);
			}
			__vala_GMenuTreeDirectory_free0 (dir);
		}
	}
	__vala_GMenuTreeIter_free0 (iter);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void panther_backend_app_system_update_apps (PantherBackendAppSystem* self) {
	GeeHashMap* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->apps;
	gee_abstract_map_clear ((GeeAbstractMap*) _tmp0_);
	{
		GeeArrayList* _cat_list = NULL;
		GeeArrayList* _tmp1_ = NULL;
		GeeArrayList* _tmp2_ = NULL;
		gint _cat_size = 0;
		GeeArrayList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _cat_index = 0;
		_tmp1_ = self->priv->categories;
		_tmp2_ = _g_object_ref0 (_tmp1_);
		_cat_list = _tmp2_;
		_tmp3_ = _cat_list;
		_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_cat_size = _tmp5_;
		_cat_index = -1;
		while (TRUE) {
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			GMenuTreeDirectory* cat = NULL;
			GeeArrayList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			GeeHashMap* _tmp12_ = NULL;
			GMenuTreeDirectory* _tmp13_ = NULL;
			const gchar* _tmp14_ = NULL;
			GMenuTreeDirectory* _tmp15_ = NULL;
			GeeArrayList* _tmp16_ = NULL;
			GeeArrayList* _tmp17_ = NULL;
			_tmp6_ = _cat_index;
			_cat_index = _tmp6_ + 1;
			_tmp7_ = _cat_index;
			_tmp8_ = _cat_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _cat_list;
			_tmp10_ = _cat_index;
			_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
			cat = (GMenuTreeDirectory*) _tmp11_;
			_tmp12_ = self->priv->apps;
			_tmp13_ = cat;
			_tmp14_ = gmenu_tree_directory_get_name (_tmp13_);
			_tmp15_ = cat;
			_tmp16_ = panther_backend_app_system_get_apps_by_category (self, _tmp15_);
			_tmp17_ = _tmp16_;
			gee_abstract_map_set ((GeeAbstractMap*) _tmp12_, _tmp14_, _tmp17_);
			_g_object_unref0 (_tmp17_);
			__vala_GMenuTreeDirectory_free0 (cat);
		}
		_g_object_unref0 (_cat_list);
	}
}


GeeArrayList* panther_backend_app_system_get_categories (PantherBackendAppSystem* self) {
	GeeArrayList* result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->categories;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void _vala_GMenuTreeEntry_free (GMenuTreeEntry* self) {
	g_boxed_free (gmenu_tree_entry_get_type (), self);
}


GeeArrayList* panther_backend_app_system_get_apps_by_category (PantherBackendAppSystem* self, GMenuTreeDirectory* category) {
	GeeArrayList* result = NULL;
	GeeArrayList* app_list = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GMenuTreeIter* iter = NULL;
	GMenuTreeDirectory* _tmp1_ = NULL;
	GMenuTreeIter* _tmp2_ = NULL;
	GMenuTreeItemType type = 0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (category != NULL, NULL);
	_tmp0_ = gee_array_list_new (PANTHER_BACKEND_TYPE_APP, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	app_list = _tmp0_;
	_tmp1_ = category;
	_tmp2_ = gmenu_tree_directory_iter (_tmp1_);
	iter = _tmp2_;
	while (TRUE) {
		GMenuTreeIter* _tmp3_ = NULL;
		GMenuTreeItemType _tmp4_ = 0;
		GMenuTreeItemType _tmp5_ = 0;
		GMenuTreeItemType _tmp6_ = 0;
		_tmp3_ = iter;
		_tmp4_ = gmenu_tree_iter_next (_tmp3_);
		type = _tmp4_;
		_tmp5_ = type;
		if (!(_tmp5_ != GMENU_TREE_ITEM_INVALID)) {
			break;
		}
		_tmp6_ = type;
		switch (_tmp6_) {
			case GMENU_TREE_ITEM_DIRECTORY:
			{
				GeeArrayList* _tmp7_ = NULL;
				GMenuTreeIter* _tmp8_ = NULL;
				GMenuTreeDirectory* _tmp9_ = NULL;
				GMenuTreeDirectory* _tmp10_ = NULL;
				GeeArrayList* _tmp11_ = NULL;
				GeeArrayList* _tmp12_ = NULL;
				_tmp7_ = app_list;
				_tmp8_ = iter;
				_tmp9_ = gmenu_tree_iter_get_directory (_tmp8_);
				_tmp10_ = _tmp9_;
				_tmp11_ = panther_backend_app_system_get_apps_by_category (self, _tmp10_);
				_tmp12_ = _tmp11_;
				gee_array_list_add_all (_tmp7_, (GeeCollection*) _tmp12_);
				_g_object_unref0 (_tmp12_);
				__vala_GMenuTreeDirectory_free0 (_tmp10_);
				break;
			}
			case GMENU_TREE_ITEM_ENTRY:
			{
				PantherBackendApp* app = NULL;
				GMenuTreeIter* _tmp13_ = NULL;
				GMenuTreeEntry* _tmp14_ = NULL;
				GMenuTreeEntry* _tmp15_ = NULL;
				PantherBackendApp* _tmp16_ = NULL;
				PantherBackendApp* _tmp17_ = NULL;
				GeeArrayList* _tmp18_ = NULL;
				PantherBackendApp* _tmp19_ = NULL;
				_tmp13_ = iter;
				_tmp14_ = gmenu_tree_iter_get_entry (_tmp13_);
				_tmp15_ = _tmp14_;
				_tmp16_ = panther_backend_app_new (_tmp15_);
				_tmp17_ = _tmp16_;
				__vala_GMenuTreeEntry_free0 (_tmp15_);
				app = _tmp17_;
				_tmp18_ = app_list;
				_tmp19_ = app;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp18_, _tmp19_);
				_g_object_unref0 (app);
				break;
			}
			default:
			break;
		}
	}
	result = app_list;
	__vala_GMenuTreeIter_free0 (iter);
	return result;
}


GeeHashMap* panther_backend_app_system_get_apps (PantherBackendAppSystem* self) {
	GeeHashMap* result = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GeeHashMap* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->apps;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static gboolean string_contains (const gchar* self, const gchar* needle) {
	gboolean result = FALSE;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (needle != NULL, FALSE);
	_tmp0_ = needle;
	_tmp1_ = strstr ((gchar*) self, (gchar*) _tmp0_);
	result = _tmp1_ != NULL;
	return result;
}


static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (g_strcmp0 (stack[i], needle) == 0) {
			return TRUE;
		}
	}
	return FALSE;
}


static gint _panther_utils_sort_apps_by_name_gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self) {
	gint result;
	result = panther_utils_sort_apps_by_name ((PantherBackendApp*) a, (PantherBackendApp*) b);
	return result;
}


static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_slist_free__g_object_unref0_ (GSList* self) {
	g_slist_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_slist_free (self);
}


GSList* panther_backend_app_system_get_apps_by_name (PantherBackendAppSystem* self) {
	GSList* result = NULL;
	GSList* sorted_apps = NULL;
	gchar** sorted_apps_execs = NULL;
	gchar** _tmp0_ = NULL;
	gint sorted_apps_execs_length1 = 0;
	gint _sorted_apps_execs_size_ = 0;
	g_return_val_if_fail (self != NULL, NULL);
	sorted_apps = NULL;
	_tmp0_ = g_new0 (gchar*, 0 + 1);
	sorted_apps_execs = _tmp0_;
	sorted_apps_execs_length1 = 0;
	_sorted_apps_execs_size_ = sorted_apps_execs_length1;
	{
		GeeIterator* _category_it = NULL;
		GeeHashMap* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
		GeeIterator* _tmp6_ = NULL;
		_tmp1_ = self->priv->apps;
		_tmp2_ = gee_abstract_map_get_values ((GeeMap*) _tmp1_);
		_tmp3_ = _tmp2_;
		_tmp4_ = _tmp3_;
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
		_tmp6_ = _tmp5_;
		_g_object_unref0 (_tmp4_);
		_category_it = _tmp6_;
		while (TRUE) {
			GeeIterator* _tmp7_ = NULL;
			gboolean _tmp8_ = FALSE;
			GeeArrayList* category = NULL;
			GeeIterator* _tmp9_ = NULL;
			gpointer _tmp10_ = NULL;
			_tmp7_ = _category_it;
			_tmp8_ = gee_iterator_next (_tmp7_);
			if (!_tmp8_) {
				break;
			}
			_tmp9_ = _category_it;
			_tmp10_ = gee_iterator_get (_tmp9_);
			category = (GeeArrayList*) _tmp10_;
			{
				GeeArrayList* _app_list = NULL;
				GeeArrayList* _tmp11_ = NULL;
				GeeArrayList* _tmp12_ = NULL;
				gint _app_size = 0;
				GeeArrayList* _tmp13_ = NULL;
				gint _tmp14_ = 0;
				gint _tmp15_ = 0;
				gint _app_index = 0;
				_tmp11_ = category;
				_tmp12_ = _g_object_ref0 (_tmp11_);
				_app_list = _tmp12_;
				_tmp13_ = _app_list;
				_tmp14_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp13_);
				_tmp15_ = _tmp14_;
				_app_size = _tmp15_;
				_app_index = -1;
				while (TRUE) {
					gint _tmp16_ = 0;
					gint _tmp17_ = 0;
					gint _tmp18_ = 0;
					PantherBackendApp* app = NULL;
					GeeArrayList* _tmp19_ = NULL;
					gint _tmp20_ = 0;
					gpointer _tmp21_ = NULL;
					gboolean _tmp22_ = FALSE;
					PantherBackendApp* _tmp23_ = NULL;
					const gchar* _tmp24_ = NULL;
					const gchar* _tmp25_ = NULL;
					PantherBackendApp* _tmp30_ = NULL;
					const gchar* _tmp31_ = NULL;
					const gchar* _tmp32_ = NULL;
					gchar** _tmp33_ = NULL;
					gint _tmp33__length1 = 0;
					_tmp16_ = _app_index;
					_app_index = _tmp16_ + 1;
					_tmp17_ = _app_index;
					_tmp18_ = _app_size;
					if (!(_tmp17_ < _tmp18_)) {
						break;
					}
					_tmp19_ = _app_list;
					_tmp20_ = _app_index;
					_tmp21_ = gee_abstract_list_get ((GeeAbstractList*) _tmp19_, _tmp20_);
					app = (PantherBackendApp*) _tmp21_;
					_tmp23_ = app;
					_tmp24_ = panther_backend_app_get_categories (_tmp23_);
					_tmp25_ = _tmp24_;
					if (_tmp25_ != NULL) {
						PantherBackendApp* _tmp26_ = NULL;
						const gchar* _tmp27_ = NULL;
						const gchar* _tmp28_ = NULL;
						gboolean _tmp29_ = FALSE;
						_tmp26_ = app;
						_tmp27_ = panther_backend_app_get_categories (_tmp26_);
						_tmp28_ = _tmp27_;
						_tmp29_ = string_contains (_tmp28_, PANTHER_BACKEND_APP_SYSTEM_GCC_PANEL_CATEGORY);
						_tmp22_ = _tmp29_;
					} else {
						_tmp22_ = FALSE;
					}
					if (_tmp22_) {
						_g_object_unref0 (app);
						continue;
					}
					_tmp30_ = app;
					_tmp31_ = panther_backend_app_get_exec (_tmp30_);
					_tmp32_ = _tmp31_;
					_tmp33_ = sorted_apps_execs;
					_tmp33__length1 = sorted_apps_execs_length1;
					if (!_vala_string_array_contains (_tmp33_, _tmp33__length1, _tmp32_)) {
						PantherBackendApp* _tmp34_ = NULL;
						PantherBackendApp* _tmp35_ = NULL;
						gchar** _tmp36_ = NULL;
						gint _tmp36__length1 = 0;
						PantherBackendApp* _tmp37_ = NULL;
						const gchar* _tmp38_ = NULL;
						const gchar* _tmp39_ = NULL;
						gchar* _tmp40_ = NULL;
						_tmp34_ = app;
						_tmp35_ = _g_object_ref0 (_tmp34_);
						sorted_apps = g_slist_insert_sorted_with_data (sorted_apps, _tmp35_, _panther_utils_sort_apps_by_name_gcompare_data_func, NULL);
						_tmp36_ = sorted_apps_execs;
						_tmp36__length1 = sorted_apps_execs_length1;
						_tmp37_ = app;
						_tmp38_ = panther_backend_app_get_exec (_tmp37_);
						_tmp39_ = _tmp38_;
						_tmp40_ = g_strdup (_tmp39_);
						_vala_array_add1 (&sorted_apps_execs, &sorted_apps_execs_length1, &_sorted_apps_execs_size_, _tmp40_);
					}
					_g_object_unref0 (app);
				}
				_g_object_unref0 (_app_list);
			}
			_g_object_unref0 (category);
		}
		_g_object_unref0 (_category_it);
	}
	result = sorted_apps;
	sorted_apps_execs = (_vala_array_free (sorted_apps_execs, sorted_apps_execs_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


PantherBackendAppSystem* panther_backend_app_system_construct (GType object_type) {
	PantherBackendAppSystem * self = NULL;
	self = (PantherBackendAppSystem*) g_object_new (object_type, NULL);
	return self;
}


PantherBackendAppSystem* panther_backend_app_system_new (void) {
	return panther_backend_app_system_construct (PANTHER_BACKEND_TYPE_APP_SYSTEM);
}


static void _panther_backend_app_system_update_app_system_gmenu_tree_changed (GMenuTree* _sender, gpointer self) {
	panther_backend_app_system_update_app_system ((PantherBackendAppSystem*) self);
}


static GMenuTreeDirectory* _vala_GMenuTreeDirectory_copy (GMenuTreeDirectory* self) {
	return g_boxed_copy (gmenu_tree_directory_get_type (), self);
}


static GObject * panther_backend_app_system_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	PantherBackendAppSystem * self;
	GMenuTree* _tmp0_ = NULL;
	GMenuTree* _tmp1_ = NULL;
	GeeHashMap* _tmp2_ = NULL;
	GeeArrayList* _tmp3_ = NULL;
	parent_class = G_OBJECT_CLASS (panther_backend_app_system_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystem);
	_tmp0_ = gmenu_tree_new ("panther-applications.menu", GMENU_TREE_FLAGS_INCLUDE_EXCLUDED | GMENU_TREE_FLAGS_SORT_DISPLAY_NAME);
	_g_object_unref0 (self->priv->apps_menu);
	self->priv->apps_menu = _tmp0_;
	_tmp1_ = self->priv->apps_menu;
	g_signal_connect_object (_tmp1_, "changed", (GCallback) _panther_backend_app_system_update_app_system_gmenu_tree_changed, self, 0);
	_tmp2_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, GEE_TYPE_ARRAY_LIST, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->apps);
	self->priv->apps = _tmp2_;
	_tmp3_ = gee_array_list_new (gmenu_tree_directory_get_type (), (GBoxedCopyFunc) _vala_GMenuTreeDirectory_copy, _vala_GMenuTreeDirectory_free, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->categories);
	self->priv->categories = _tmp3_;
	panther_backend_app_system_update_app_system (self);
	return obj;
}


static void panther_backend_app_system_class_init (PantherBackendAppSystemClass * klass) {
	panther_backend_app_system_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (PantherBackendAppSystemPrivate));
	G_OBJECT_CLASS (klass)->constructor = panther_backend_app_system_constructor;
	G_OBJECT_CLASS (klass)->finalize = panther_backend_app_system_finalize;
	g_signal_new ("changed", PANTHER_BACKEND_TYPE_APP_SYSTEM, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void panther_backend_app_system_instance_init (PantherBackendAppSystem * self) {
	self->priv = PANTHER_BACKEND_APP_SYSTEM_GET_PRIVATE (self);
	self->priv->categories = NULL;
	self->priv->apps = NULL;
	self->priv->apps_menu = NULL;
}


static void panther_backend_app_system_finalize (GObject* obj) {
	PantherBackendAppSystem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PANTHER_BACKEND_TYPE_APP_SYSTEM, PantherBackendAppSystem);
	_g_object_unref0 (self->priv->categories);
	_g_object_unref0 (self->priv->apps);
	_g_object_unref0 (self->priv->apps_menu);
	G_OBJECT_CLASS (panther_backend_app_system_parent_class)->finalize (obj);
}


GType panther_backend_app_system_get_type (void) {
	static volatile gsize panther_backend_app_system_type_id__volatile = 0;
	if (g_once_init_enter (&panther_backend_app_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PantherBackendAppSystemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) panther_backend_app_system_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PantherBackendAppSystem), 0, (GInstanceInitFunc) panther_backend_app_system_instance_init, NULL };
		GType panther_backend_app_system_type_id;
		panther_backend_app_system_type_id = g_type_register_static (G_TYPE_OBJECT, "PantherBackendAppSystem", &g_define_type_info, 0);
		g_once_init_leave (&panther_backend_app_system_type_id__volatile, panther_backend_app_system_type_id);
	}
	return panther_backend_app_system_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



