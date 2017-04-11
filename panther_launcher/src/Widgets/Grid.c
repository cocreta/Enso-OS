/* Grid.c generated by valac 0.30.1, the Vala compiler
 * generated from Grid.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/**/
/*  Copyright (C) 2011-2012 Giulio Collura*/
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
#include <string.h>
#include <gtk/gtk.h>
#include <gee.h>
#include <stdlib.h>


#define PANTHER_WIDGETS_TYPE_PAGE (panther_widgets_page_get_type ())
typedef struct _PantherWidgetsPage PantherWidgetsPage;

#define PANTHER_WIDGETS_TYPE_GRID (panther_widgets_grid_get_type ())
#define PANTHER_WIDGETS_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_WIDGETS_TYPE_GRID, PantherWidgetsGrid))
#define PANTHER_WIDGETS_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_WIDGETS_TYPE_GRID, PantherWidgetsGridClass))
#define PANTHER_WIDGETS_IS_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_WIDGETS_TYPE_GRID))
#define PANTHER_WIDGETS_IS_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_WIDGETS_TYPE_GRID))
#define PANTHER_WIDGETS_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_WIDGETS_TYPE_GRID, PantherWidgetsGridClass))

typedef struct _PantherWidgetsGrid PantherWidgetsGrid;
typedef struct _PantherWidgetsGridClass PantherWidgetsGridClass;
typedef struct _PantherWidgetsGridPrivate PantherWidgetsGridPrivate;

#define PANTHER_WIDGETS_TYPE_SWITCHER (panther_widgets_switcher_get_type ())
#define PANTHER_WIDGETS_SWITCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_WIDGETS_TYPE_SWITCHER, PantherWidgetsSwitcher))
#define PANTHER_WIDGETS_SWITCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_WIDGETS_TYPE_SWITCHER, PantherWidgetsSwitcherClass))
#define PANTHER_WIDGETS_IS_SWITCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_WIDGETS_TYPE_SWITCHER))
#define PANTHER_WIDGETS_IS_SWITCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_WIDGETS_TYPE_SWITCHER))
#define PANTHER_WIDGETS_SWITCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_WIDGETS_TYPE_SWITCHER, PantherWidgetsSwitcherClass))

typedef struct _PantherWidgetsSwitcher PantherWidgetsSwitcher;
typedef struct _PantherWidgetsSwitcherClass PantherWidgetsSwitcherClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

#define PANTHER_WIDGETS_TYPE_APP_ENTRY (panther_widgets_app_entry_get_type ())
#define PANTHER_WIDGETS_APP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_WIDGETS_TYPE_APP_ENTRY, PantherWidgetsAppEntry))
#define PANTHER_WIDGETS_APP_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_WIDGETS_TYPE_APP_ENTRY, PantherWidgetsAppEntryClass))
#define PANTHER_WIDGETS_IS_APP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_WIDGETS_TYPE_APP_ENTRY))
#define PANTHER_WIDGETS_IS_APP_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_WIDGETS_TYPE_APP_ENTRY))
#define PANTHER_WIDGETS_APP_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_WIDGETS_TYPE_APP_ENTRY, PantherWidgetsAppEntryClass))

typedef struct _PantherWidgetsAppEntry PantherWidgetsAppEntry;
typedef struct _PantherWidgetsAppEntryClass PantherWidgetsAppEntryClass;

struct _PantherWidgetsPage {
	guint rows;
	guint columns;
	gint number;
};

struct _PantherWidgetsGrid {
	GtkBox parent_instance;
	PantherWidgetsGridPrivate * priv;
	PantherWidgetsSwitcher* page_switcher;
};

struct _PantherWidgetsGridClass {
	GtkBoxClass parent_class;
};

struct _PantherWidgetsGridPrivate {
	GtkStack* stack;
	GtkGrid* current_grid;
	GeeHashMap* grids;
	guint current_row;
	guint current_col;
	PantherWidgetsPage page;
};


static gpointer panther_widgets_grid_parent_class = NULL;

GType panther_widgets_page_get_type (void) G_GNUC_CONST;
PantherWidgetsPage* panther_widgets_page_dup (const PantherWidgetsPage* self);
void panther_widgets_page_free (PantherWidgetsPage* self);
GType panther_widgets_grid_get_type (void) G_GNUC_CONST;
GType panther_widgets_switcher_get_type (void) G_GNUC_CONST;
#define PANTHER_WIDGETS_GRID_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PANTHER_WIDGETS_TYPE_GRID, PantherWidgetsGridPrivate))
enum  {
	PANTHER_WIDGETS_GRID_DUMMY_PROPERTY
};
PantherWidgetsGrid* panther_widgets_grid_new (gint rows, gint columns);
PantherWidgetsGrid* panther_widgets_grid_construct (GType object_type, gint rows, gint columns);
PantherWidgetsSwitcher* panther_widgets_switcher_new (void);
PantherWidgetsSwitcher* panther_widgets_switcher_construct (GType object_type);
void panther_widgets_switcher_set_stack (PantherWidgetsSwitcher* self, GtkStack* stack);
static void panther_widgets_grid_create_new_grid (PantherWidgetsGrid* self);
void panther_widgets_grid_go_to_number (PantherWidgetsGrid* self, gint number);
#define PANTHER_PIXELS_ROW_SPACING 10
void panther_widgets_grid_append (PantherWidgetsGrid* self, GtkWidget* widget);
static void panther_widgets_grid_update_position (PantherWidgetsGrid* self);
void panther_widgets_grid_clear (PantherWidgetsGrid* self);
GtkWidget* panther_widgets_grid_get_child_at (PantherWidgetsGrid* self, gint column, gint row);
GType panther_widgets_app_entry_get_type (void) G_GNUC_CONST;
gint panther_widgets_grid_get_page_columns (PantherWidgetsGrid* self);
gint panther_widgets_grid_get_page_rows (PantherWidgetsGrid* self);
gint panther_widgets_grid_get_n_pages (PantherWidgetsGrid* self);
gint panther_widgets_grid_get_current_page (PantherWidgetsGrid* self);
void panther_widgets_grid_go_to_next (PantherWidgetsGrid* self);
void panther_widgets_switcher_update_selected (PantherWidgetsSwitcher* self);
void panther_widgets_grid_go_to_previous (PantherWidgetsGrid* self);
void panther_widgets_grid_go_to_last (PantherWidgetsGrid* self);
void panther_widgets_grid_resize (PantherWidgetsGrid* self, gint rows, gint columns);
static void panther_widgets_grid_finalize (GObject* obj);


PantherWidgetsPage* panther_widgets_page_dup (const PantherWidgetsPage* self) {
	PantherWidgetsPage* dup;
	dup = g_new0 (PantherWidgetsPage, 1);
	memcpy (dup, self, sizeof (PantherWidgetsPage));
	return dup;
}


void panther_widgets_page_free (PantherWidgetsPage* self) {
	g_free (self);
}


GType panther_widgets_page_get_type (void) {
	static volatile gsize panther_widgets_page_type_id__volatile = 0;
	if (g_once_init_enter (&panther_widgets_page_type_id__volatile)) {
		GType panther_widgets_page_type_id;
		panther_widgets_page_type_id = g_boxed_type_register_static ("PantherWidgetsPage", (GBoxedCopyFunc) panther_widgets_page_dup, (GBoxedFreeFunc) panther_widgets_page_free);
		g_once_init_leave (&panther_widgets_page_type_id__volatile, panther_widgets_page_type_id);
	}
	return panther_widgets_page_type_id__volatile;
}


PantherWidgetsGrid* panther_widgets_grid_construct (GType object_type, gint rows, gint columns) {
	PantherWidgetsGrid * self = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	GtkGrid* main_grid = NULL;
	GtkGrid* _tmp2_ = NULL;
	GtkStack* _tmp3_ = NULL;
	GtkStack* _tmp4_ = NULL;
	GtkStack* _tmp5_ = NULL;
	PantherWidgetsSwitcher* _tmp6_ = NULL;
	PantherWidgetsSwitcher* _tmp7_ = NULL;
	GtkStack* _tmp8_ = NULL;
	GtkGrid* fake_grid = NULL;
	GtkGrid* _tmp9_ = NULL;
	GtkStack* _tmp10_ = NULL;
	PantherWidgetsSwitcher* _tmp11_ = NULL;
	GeeHashMap* _tmp12_ = NULL;
	self = (PantherWidgetsGrid*) g_object_new (object_type, NULL);
	_tmp0_ = rows;
	self->priv->page.rows = (guint) _tmp0_;
	_tmp1_ = rows;
	self->priv->page.columns = (guint) (_tmp1_ + 2);
	self->priv->page.number = 1;
	_tmp2_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp2_);
	main_grid = _tmp2_;
	gtk_orientable_set_orientation ((GtkOrientable*) main_grid, GTK_ORIENTATION_VERTICAL);
	gtk_grid_set_row_spacing (main_grid, 30);
	gtk_widget_set_margin_bottom ((GtkWidget*) main_grid, 12);
	_tmp3_ = (GtkStack*) gtk_stack_new ();
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->stack);
	self->priv->stack = _tmp3_;
	_tmp4_ = self->priv->stack;
	g_object_set ((GtkWidget*) _tmp4_, "expand", TRUE, NULL);
	_tmp5_ = self->priv->stack;
	gtk_stack_set_transition_type (_tmp5_, GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT);
	_tmp6_ = panther_widgets_switcher_new ();
	g_object_ref_sink (_tmp6_);
	_g_object_unref0 (self->page_switcher);
	self->page_switcher = _tmp6_;
	_tmp7_ = self->page_switcher;
	_tmp8_ = self->priv->stack;
	panther_widgets_switcher_set_stack (_tmp7_, _tmp8_);
	_tmp9_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp9_);
	fake_grid = _tmp9_;
	g_object_set ((GtkWidget*) fake_grid, "expand", TRUE, NULL);
	_tmp10_ = self->priv->stack;
	gtk_container_add ((GtkContainer*) main_grid, (GtkWidget*) _tmp10_);
	gtk_container_add ((GtkContainer*) main_grid, (GtkWidget*) fake_grid);
	_tmp11_ = self->page_switcher;
	gtk_container_add ((GtkContainer*) main_grid, (GtkWidget*) _tmp11_);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) main_grid);
	_tmp12_ = gee_hash_map_new (G_TYPE_INT, NULL, NULL, gtk_grid_get_type (), (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->grids);
	self->priv->grids = _tmp12_;
	panther_widgets_grid_create_new_grid (self);
	panther_widgets_grid_go_to_number (self, 1);
	_g_object_unref0 (fake_grid);
	_g_object_unref0 (main_grid);
	return self;
}


PantherWidgetsGrid* panther_widgets_grid_new (gint rows, gint columns) {
	return panther_widgets_grid_construct (PANTHER_WIDGETS_TYPE_GRID, rows, columns);
}


static void panther_widgets_grid_create_new_grid (PantherWidgetsGrid* self) {
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp1_ = NULL;
	GtkGrid* _tmp2_ = NULL;
	GtkGrid* _tmp3_ = NULL;
	GtkGrid* _tmp4_ = NULL;
	GtkGrid* _tmp5_ = NULL;
	GtkGrid* _tmp6_ = NULL;
	GtkGrid* _tmp7_ = NULL;
	GeeHashMap* _tmp8_ = NULL;
	PantherWidgetsPage _tmp9_ = {0};
	gint _tmp10_ = 0;
	GtkGrid* _tmp11_ = NULL;
	GtkStack* _tmp12_ = NULL;
	GtkGrid* _tmp13_ = NULL;
	PantherWidgetsPage _tmp14_ = {0};
	gint _tmp15_ = 0;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	PantherWidgetsPage _tmp18_ = {0};
	gint _tmp19_ = 0;
	gchar* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
	GtkGrid* _tmp22_ = NULL;
	GtkGrid* _tmp23_ = NULL;
	GtkGrid* _tmp24_ = NULL;
	PantherWidgetsPage _tmp25_ = {0};
	guint _tmp26_ = 0U;
	PantherWidgetsPage _tmp27_ = {0};
	guint _tmp28_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->priv->current_grid);
	self->priv->current_grid = _tmp0_;
	_tmp1_ = self->priv->current_grid;
	g_object_set ((GtkWidget*) _tmp1_, "expand", TRUE, NULL);
	_tmp2_ = self->priv->current_grid;
	gtk_grid_set_row_homogeneous (_tmp2_, TRUE);
	_tmp3_ = self->priv->current_grid;
	gtk_grid_set_column_homogeneous (_tmp3_, TRUE);
	_tmp4_ = self->priv->current_grid;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp4_, 12);
	_tmp5_ = self->priv->current_grid;
	gtk_widget_set_margin_end ((GtkWidget*) _tmp5_, 12);
	_tmp6_ = self->priv->current_grid;
	gtk_grid_set_row_spacing (_tmp6_, PANTHER_PIXELS_ROW_SPACING);
	_tmp7_ = self->priv->current_grid;
	gtk_grid_set_column_spacing (_tmp7_, 0);
	_tmp8_ = self->priv->grids;
	_tmp9_ = self->priv->page;
	_tmp10_ = _tmp9_.number;
	_tmp11_ = self->priv->current_grid;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp8_, (gpointer) ((gintptr) _tmp10_), _tmp11_);
	_tmp12_ = self->priv->stack;
	_tmp13_ = self->priv->current_grid;
	_tmp14_ = self->priv->page;
	_tmp15_ = _tmp14_.number;
	_tmp16_ = g_strdup_printf ("%i", _tmp15_);
	_tmp17_ = _tmp16_;
	_tmp18_ = self->priv->page;
	_tmp19_ = _tmp18_.number;
	_tmp20_ = g_strdup_printf ("%i", _tmp19_);
	_tmp21_ = _tmp20_;
	gtk_stack_add_titled (_tmp12_, (GtkWidget*) _tmp13_, _tmp17_, _tmp21_);
	_g_free0 (_tmp21_);
	_g_free0 (_tmp17_);
	_tmp22_ = self->priv->current_grid;
	_tmp23_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp23_);
	_tmp24_ = _tmp23_;
	_tmp25_ = self->priv->page;
	_tmp26_ = _tmp25_.columns;
	_tmp27_ = self->priv->page;
	_tmp28_ = _tmp27_.rows;
	gtk_grid_attach (_tmp22_, (GtkWidget*) _tmp24_, 0, 0, (gint) _tmp26_, (gint) _tmp28_);
	_g_object_unref0 (_tmp24_);
}


void panther_widgets_grid_append (PantherWidgetsGrid* self, GtkWidget* widget) {
	GtkGrid* _tmp0_ = NULL;
	GtkWidget* _tmp1_ = NULL;
	guint _tmp2_ = 0U;
	guint _tmp3_ = 0U;
	guint _tmp4_ = 0U;
	GtkGrid* _tmp5_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (widget != NULL);
	panther_widgets_grid_update_position (self);
	_tmp0_ = self->priv->current_grid;
	_tmp1_ = widget;
	_tmp2_ = self->priv->current_col;
	_tmp3_ = self->priv->current_row;
	gtk_grid_attach (_tmp0_, _tmp1_, (gint) _tmp2_, (gint) _tmp3_, 1, 1);
	_tmp4_ = self->priv->current_col;
	self->priv->current_col = _tmp4_ + 1;
	_tmp5_ = self->priv->current_grid;
	gtk_widget_show ((GtkWidget*) _tmp5_);
}


static void panther_widgets_grid_update_position (PantherWidgetsGrid* self) {
	guint _tmp0_ = 0U;
	PantherWidgetsPage _tmp1_ = {0};
	guint _tmp2_ = 0U;
	guint _tmp4_ = 0U;
	PantherWidgetsPage _tmp5_ = {0};
	guint _tmp6_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->current_col;
	_tmp1_ = self->priv->page;
	_tmp2_ = _tmp1_.columns;
	if (_tmp0_ == _tmp2_) {
		guint _tmp3_ = 0U;
		self->priv->current_col = (guint) 0;
		_tmp3_ = self->priv->current_row;
		self->priv->current_row = _tmp3_ + 1;
	}
	_tmp4_ = self->priv->current_row;
	_tmp5_ = self->priv->page;
	_tmp6_ = _tmp5_.rows;
	if (_tmp4_ == _tmp6_) {
		gint _tmp7_ = 0;
		_tmp7_ = self->priv->page.number;
		self->priv->page.number = _tmp7_ + 1;
		panther_widgets_grid_create_new_grid (self);
		self->priv->current_row = (guint) 0;
	}
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void panther_widgets_grid_clear (PantherWidgetsGrid* self) {
	GeeHashMap* _tmp15_ = NULL;
	GtkStack* _tmp16_ = NULL;
	GtkGrid* _tmp17_ = NULL;
	g_return_if_fail (self != NULL);
	{
		GeeIterator* _grid_it = NULL;
		GeeHashMap* _tmp0_ = NULL;
		GeeCollection* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeIterator* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
		_tmp0_ = self->priv->grids;
		_tmp1_ = gee_abstract_map_get_values ((GeeMap*) _tmp0_);
		_tmp2_ = _tmp1_;
		_tmp3_ = _tmp2_;
		_tmp4_ = gee_iterable_iterator ((GeeIterable*) _tmp3_);
		_tmp5_ = _tmp4_;
		_g_object_unref0 (_tmp3_);
		_grid_it = _tmp5_;
		while (TRUE) {
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			GtkGrid* grid = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			GtkGrid* _tmp10_ = NULL;
			GList* _tmp11_ = NULL;
			GtkGrid* _tmp14_ = NULL;
			_tmp6_ = _grid_it;
			_tmp7_ = gee_iterator_next (_tmp6_);
			if (!_tmp7_) {
				break;
			}
			_tmp8_ = _grid_it;
			_tmp9_ = gee_iterator_get (_tmp8_);
			grid = (GtkGrid*) _tmp9_;
			_tmp10_ = grid;
			_tmp11_ = gtk_container_get_children ((GtkContainer*) _tmp10_);
			{
				GList* widget_collection = NULL;
				GList* widget_it = NULL;
				widget_collection = _tmp11_;
				for (widget_it = widget_collection; widget_it != NULL; widget_it = widget_it->next) {
					GtkWidget* _tmp12_ = NULL;
					GtkWidget* widget = NULL;
					_tmp12_ = _g_object_ref0 ((GtkWidget*) widget_it->data);
					widget = _tmp12_;
					{
						GtkWidget* _tmp13_ = NULL;
						_tmp13_ = widget;
						gtk_widget_destroy (_tmp13_);
						_g_object_unref0 (widget);
					}
				}
				_g_list_free0 (widget_collection);
			}
			_tmp14_ = grid;
			gtk_widget_destroy ((GtkWidget*) _tmp14_);
			_g_object_unref0 (grid);
		}
		_g_object_unref0 (_grid_it);
	}
	_tmp15_ = self->priv->grids;
	gee_abstract_map_clear ((GeeAbstractMap*) _tmp15_);
	self->priv->current_row = (guint) 0;
	self->priv->current_col = (guint) 0;
	self->priv->page.number = 1;
	panther_widgets_grid_create_new_grid (self);
	_tmp16_ = self->priv->stack;
	_tmp17_ = self->priv->current_grid;
	gtk_stack_set_visible_child (_tmp16_, (GtkWidget*) _tmp17_);
}


GtkWidget* panther_widgets_grid_get_child_at (PantherWidgetsGrid* self, gint column, gint row) {
	GtkWidget* result = NULL;
	gint col = 0;
	gint _tmp0_ = 0;
	PantherWidgetsPage _tmp1_ = {0};
	guint _tmp2_ = 0U;
	GtkGrid* grid = NULL;
	GeeHashMap* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gpointer _tmp5_ = NULL;
	GtkGrid* _tmp6_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = column;
	_tmp1_ = self->priv->page;
	_tmp2_ = _tmp1_.columns;
	col = ((gint) (_tmp0_ / _tmp2_)) + 1;
	_tmp3_ = self->priv->grids;
	_tmp4_ = col;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	grid = (GtkGrid*) _tmp5_;
	_tmp6_ = grid;
	if (_tmp6_ != NULL) {
		GtkGrid* _tmp7_ = NULL;
		gint _tmp8_ = 0;
		PantherWidgetsPage _tmp9_ = {0};
		guint _tmp10_ = 0U;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		GtkWidget* _tmp13_ = NULL;
		GtkWidget* _tmp14_ = NULL;
		_tmp7_ = grid;
		_tmp8_ = column;
		_tmp9_ = self->priv->page;
		_tmp10_ = _tmp9_.columns;
		_tmp11_ = col;
		_tmp12_ = row;
		_tmp13_ = gtk_grid_get_child_at (_tmp7_, _tmp8_ - (((gint) _tmp10_) * (_tmp11_ - 1)), _tmp12_);
		_tmp14_ = _g_object_ref0 ((GtkWidget*) (G_TYPE_CHECK_INSTANCE_TYPE (_tmp13_, PANTHER_WIDGETS_TYPE_APP_ENTRY) ? ((PantherWidgetsAppEntry*) _tmp13_) : NULL));
		result = _tmp14_;
		_g_object_unref0 (grid);
		return result;
	} else {
		result = NULL;
		_g_object_unref0 (grid);
		return result;
	}
	_g_object_unref0 (grid);
}


gint panther_widgets_grid_get_page_columns (PantherWidgetsGrid* self) {
	gint result = 0;
	PantherWidgetsPage _tmp0_ = {0};
	guint _tmp1_ = 0U;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->page;
	_tmp1_ = _tmp0_.columns;
	result = (gint) _tmp1_;
	return result;
}


gint panther_widgets_grid_get_page_rows (PantherWidgetsGrid* self) {
	gint result = 0;
	PantherWidgetsPage _tmp0_ = {0};
	guint _tmp1_ = 0U;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->page;
	_tmp1_ = _tmp0_.rows;
	result = (gint) _tmp1_;
	return result;
}


gint panther_widgets_grid_get_n_pages (PantherWidgetsGrid* self) {
	gint result = 0;
	PantherWidgetsPage _tmp0_ = {0};
	gint _tmp1_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->page;
	_tmp1_ = _tmp0_.number;
	result = (gint) _tmp1_;
	return result;
}


gint panther_widgets_grid_get_current_page (PantherWidgetsGrid* self) {
	gint result = 0;
	GtkStack* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->stack;
	_tmp1_ = gtk_stack_get_visible_child_name (_tmp0_);
	_tmp2_ = atoi (_tmp1_);
	result = _tmp2_;
	return result;
}


void panther_widgets_grid_go_to_next (PantherWidgetsGrid* self) {
	gint page_number = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	PantherWidgetsSwitcher* _tmp7_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = panther_widgets_grid_get_current_page (self);
	page_number = _tmp0_ + 1;
	_tmp1_ = page_number;
	_tmp2_ = panther_widgets_grid_get_n_pages (self);
	if (_tmp1_ <= _tmp2_) {
		GtkStack* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_tmp3_ = self->priv->stack;
		_tmp4_ = page_number;
		_tmp5_ = g_strdup_printf ("%i", _tmp4_);
		_tmp6_ = _tmp5_;
		gtk_stack_set_visible_child_name (_tmp3_, _tmp6_);
		_g_free0 (_tmp6_);
	}
	_tmp7_ = self->page_switcher;
	panther_widgets_switcher_update_selected (_tmp7_);
}


void panther_widgets_grid_go_to_previous (PantherWidgetsGrid* self) {
	gint page_number = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	PantherWidgetsSwitcher* _tmp6_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = panther_widgets_grid_get_current_page (self);
	page_number = _tmp0_ - 1;
	_tmp1_ = page_number;
	if (_tmp1_ > 0) {
		GtkStack* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		_tmp2_ = self->priv->stack;
		_tmp3_ = page_number;
		_tmp4_ = g_strdup_printf ("%i", _tmp3_);
		_tmp5_ = _tmp4_;
		gtk_stack_set_visible_child_name (_tmp2_, _tmp5_);
		_g_free0 (_tmp5_);
	}
	_tmp6_ = self->page_switcher;
	panther_widgets_switcher_update_selected (_tmp6_);
}


void panther_widgets_grid_go_to_last (PantherWidgetsGrid* self) {
	GtkStack* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	PantherWidgetsSwitcher* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stack;
	_tmp1_ = panther_widgets_grid_get_n_pages (self);
	_tmp2_ = g_strdup_printf ("%i", _tmp1_);
	_tmp3_ = _tmp2_;
	gtk_stack_set_visible_child_name (_tmp0_, _tmp3_);
	_g_free0 (_tmp3_);
	_tmp4_ = self->page_switcher;
	panther_widgets_switcher_update_selected (_tmp4_);
}


void panther_widgets_grid_go_to_number (PantherWidgetsGrid* self, gint number) {
	GtkStack* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	PantherWidgetsSwitcher* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stack;
	_tmp1_ = number;
	_tmp2_ = g_strdup_printf ("%i", _tmp1_);
	_tmp3_ = _tmp2_;
	gtk_stack_set_visible_child_name (_tmp0_, _tmp3_);
	_g_free0 (_tmp3_);
	_tmp4_ = self->page_switcher;
	panther_widgets_switcher_update_selected (_tmp4_);
}


void panther_widgets_grid_resize (PantherWidgetsGrid* self, gint rows, gint columns) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	g_return_if_fail (self != NULL);
	panther_widgets_grid_clear (self);
	_tmp0_ = rows;
	self->priv->page.rows = (guint) _tmp0_;
	_tmp1_ = columns;
	self->priv->page.columns = (guint) _tmp1_;
	self->priv->page.number = 1;
}


static void panther_widgets_grid_class_init (PantherWidgetsGridClass * klass) {
	panther_widgets_grid_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (PantherWidgetsGridPrivate));
	G_OBJECT_CLASS (klass)->finalize = panther_widgets_grid_finalize;
}


static void panther_widgets_grid_instance_init (PantherWidgetsGrid * self) {
	self->priv = PANTHER_WIDGETS_GRID_GET_PRIVATE (self);
	self->priv->current_row = (guint) 0;
	self->priv->current_col = (guint) 0;
}


static void panther_widgets_grid_finalize (GObject* obj) {
	PantherWidgetsGrid * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PANTHER_WIDGETS_TYPE_GRID, PantherWidgetsGrid);
	_g_object_unref0 (self->page_switcher);
	_g_object_unref0 (self->priv->stack);
	_g_object_unref0 (self->priv->current_grid);
	_g_object_unref0 (self->priv->grids);
	G_OBJECT_CLASS (panther_widgets_grid_parent_class)->finalize (obj);
}


GType panther_widgets_grid_get_type (void) {
	static volatile gsize panther_widgets_grid_type_id__volatile = 0;
	if (g_once_init_enter (&panther_widgets_grid_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PantherWidgetsGridClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) panther_widgets_grid_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PantherWidgetsGrid), 0, (GInstanceInitFunc) panther_widgets_grid_instance_init, NULL };
		GType panther_widgets_grid_type_id;
		panther_widgets_grid_type_id = g_type_register_static (gtk_box_get_type (), "PantherWidgetsGrid", &g_define_type_info, 0);
		g_once_init_leave (&panther_widgets_grid_type_id__volatile, panther_widgets_grid_type_id);
	}
	return panther_widgets_grid_type_id__volatile;
}


