/* relevancy-service.c generated by valac 0.30.1, the Vala compiler
 * generated from relevancy-service.vala, do not modify */

/*
 * Copyright (C) 2010 Michal Hruby <michal.mhr@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by Michal Hruby <michal.mhr@gmail.com>
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gio/gio.h>


#define SYNAPSE_TYPE_RELEVANCY_BACKEND (synapse_relevancy_backend_get_type ())
#define SYNAPSE_RELEVANCY_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_RELEVANCY_BACKEND, SynapseRelevancyBackend))
#define SYNAPSE_IS_RELEVANCY_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_RELEVANCY_BACKEND))
#define SYNAPSE_RELEVANCY_BACKEND_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_RELEVANCY_BACKEND, SynapseRelevancyBackendIface))

typedef struct _SynapseRelevancyBackend SynapseRelevancyBackend;
typedef struct _SynapseRelevancyBackendIface SynapseRelevancyBackendIface;

#define SYNAPSE_TYPE_RELEVANCY_SERVICE (synapse_relevancy_service_get_type ())
#define SYNAPSE_RELEVANCY_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyService))
#define SYNAPSE_RELEVANCY_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyServiceClass))
#define SYNAPSE_IS_RELEVANCY_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_RELEVANCY_SERVICE))
#define SYNAPSE_IS_RELEVANCY_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYNAPSE_TYPE_RELEVANCY_SERVICE))
#define SYNAPSE_RELEVANCY_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyServiceClass))

typedef struct _SynapseRelevancyService SynapseRelevancyService;
typedef struct _SynapseRelevancyServiceClass SynapseRelevancyServiceClass;
typedef struct _SynapseRelevancyServicePrivate SynapseRelevancyServicePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SYNAPSE_MATCH_TYPE_SCORE (synapse_match_score_get_type ())

struct _SynapseRelevancyBackendIface {
	GTypeInterface parent_iface;
	gfloat (*get_application_popularity) (SynapseRelevancyBackend* self, const gchar* desktop_id);
	gfloat (*get_uri_popularity) (SynapseRelevancyBackend* self, const gchar* uri);
	void (*application_launched) (SynapseRelevancyBackend* self, GAppInfo* app_info);
};

struct _SynapseRelevancyService {
	GObject parent_instance;
	SynapseRelevancyServicePrivate * priv;
};

struct _SynapseRelevancyServiceClass {
	GObjectClass parent_class;
};

struct _SynapseRelevancyServicePrivate {
	SynapseRelevancyBackend* backend;
};

typedef enum  {
	SYNAPSE_MATCH_SCORE_INCREMENT_MINOR = 2000,
	SYNAPSE_MATCH_SCORE_INCREMENT_SMALL = 5000,
	SYNAPSE_MATCH_SCORE_INCREMENT_MEDIUM = 10000,
	SYNAPSE_MATCH_SCORE_INCREMENT_LARGE = 20000,
	SYNAPSE_MATCH_SCORE_URI_PENALTY = 15000,
	SYNAPSE_MATCH_SCORE_POOR = 50000,
	SYNAPSE_MATCH_SCORE_BELOW_AVERAGE = 60000,
	SYNAPSE_MATCH_SCORE_AVERAGE = 70000,
	SYNAPSE_MATCH_SCORE_ABOVE_AVERAGE = 75000,
	SYNAPSE_MATCH_SCORE_GOOD = 80000,
	SYNAPSE_MATCH_SCORE_VERY_GOOD = 85000,
	SYNAPSE_MATCH_SCORE_EXCELLENT = 90000,
	SYNAPSE_MATCH_SCORE_HIGHEST = 100000
} SynapseMatchScore;


static gpointer synapse_relevancy_service_parent_class = NULL;
static SynapseRelevancyService* synapse_relevancy_service_instance;
static SynapseRelevancyService* synapse_relevancy_service_instance = NULL;

GType synapse_relevancy_backend_get_type (void) G_GNUC_CONST;
gfloat synapse_relevancy_backend_get_application_popularity (SynapseRelevancyBackend* self, const gchar* desktop_id);
gfloat synapse_relevancy_backend_get_uri_popularity (SynapseRelevancyBackend* self, const gchar* uri);
void synapse_relevancy_backend_application_launched (SynapseRelevancyBackend* self, GAppInfo* app_info);
GType synapse_relevancy_service_get_type (void) G_GNUC_CONST;
#define SYNAPSE_RELEVANCY_SERVICE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyServicePrivate))
enum  {
	SYNAPSE_RELEVANCY_SERVICE_DUMMY_PROPERTY
};
SynapseRelevancyService* synapse_relevancy_service_get_default (void);
static SynapseRelevancyService* synapse_relevancy_service_new (void);
static SynapseRelevancyService* synapse_relevancy_service_construct (GType object_type);
static void synapse_relevancy_service_initialize_relevancy_backend (SynapseRelevancyService* self);
gfloat synapse_relevancy_service_get_application_popularity (SynapseRelevancyService* self, const gchar* desktop_id);
gfloat synapse_relevancy_service_get_uri_popularity (SynapseRelevancyService* self, const gchar* uri);
void synapse_relevancy_service_application_launched (SynapseRelevancyService* self, GAppInfo* app_info);
void synapse_utils_logger_debug (GObject* obj, const gchar* format, ...);
gint synapse_relevancy_service_compute_relevancy (gint base_relevancy, gfloat modifier);
GType synapse_match_score_get_type (void) G_GNUC_CONST;
static GObject * synapse_relevancy_service_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void synapse_relevancy_service_finalize (GObject* obj);


gfloat synapse_relevancy_backend_get_application_popularity (SynapseRelevancyBackend* self, const gchar* desktop_id) {
	g_return_val_if_fail (self != NULL, 0.0F);
	return SYNAPSE_RELEVANCY_BACKEND_GET_INTERFACE (self)->get_application_popularity (self, desktop_id);
}


gfloat synapse_relevancy_backend_get_uri_popularity (SynapseRelevancyBackend* self, const gchar* uri) {
	g_return_val_if_fail (self != NULL, 0.0F);
	return SYNAPSE_RELEVANCY_BACKEND_GET_INTERFACE (self)->get_uri_popularity (self, uri);
}


void synapse_relevancy_backend_application_launched (SynapseRelevancyBackend* self, GAppInfo* app_info) {
	g_return_if_fail (self != NULL);
	SYNAPSE_RELEVANCY_BACKEND_GET_INTERFACE (self)->application_launched (self, app_info);
}


static void synapse_relevancy_backend_base_init (SynapseRelevancyBackendIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType synapse_relevancy_backend_get_type (void) {
	static volatile gsize synapse_relevancy_backend_type_id__volatile = 0;
	if (g_once_init_enter (&synapse_relevancy_backend_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SynapseRelevancyBackendIface), (GBaseInitFunc) synapse_relevancy_backend_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType synapse_relevancy_backend_type_id;
		synapse_relevancy_backend_type_id = g_type_register_static (G_TYPE_INTERFACE, "SynapseRelevancyBackend", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (synapse_relevancy_backend_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&synapse_relevancy_backend_type_id__volatile, synapse_relevancy_backend_type_id);
	}
	return synapse_relevancy_backend_type_id__volatile;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


SynapseRelevancyService* synapse_relevancy_service_get_default (void) {
	SynapseRelevancyService* result = NULL;
	SynapseRelevancyService* _tmp0_ = NULL;
	SynapseRelevancyService* _tmp1_ = NULL;
	SynapseRelevancyService* _tmp2_ = NULL;
	SynapseRelevancyService* _tmp4_ = NULL;
	_tmp1_ = synapse_relevancy_service_instance;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_tmp0_ = _tmp2_;
	if (_tmp0_ == NULL) {
		SynapseRelevancyService* _tmp3_ = NULL;
		_tmp3_ = synapse_relevancy_service_new ();
		_g_object_unref0 (_tmp0_);
		_tmp0_ = _tmp3_;
	}
	_tmp4_ = _tmp0_;
	_tmp0_ = NULL;
	result = _tmp4_;
	_g_object_unref0 (_tmp0_);
	return result;
}


static SynapseRelevancyService* synapse_relevancy_service_construct (GType object_type) {
	SynapseRelevancyService * self = NULL;
	self = (SynapseRelevancyService*) g_object_new (object_type, NULL);
	return self;
}


static SynapseRelevancyService* synapse_relevancy_service_new (void) {
	return synapse_relevancy_service_construct (SYNAPSE_TYPE_RELEVANCY_SERVICE);
}


static void synapse_relevancy_service_initialize_relevancy_backend (SynapseRelevancyService* self) {
	g_return_if_fail (self != NULL);
	_g_object_unref0 (self->priv->backend);
	self->priv->backend = NULL;
}


gfloat synapse_relevancy_service_get_application_popularity (SynapseRelevancyService* self, const gchar* desktop_id) {
	gfloat result = 0.0F;
	SynapseRelevancyBackend* _tmp0_ = NULL;
	SynapseRelevancyBackend* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gfloat _tmp3_ = 0.0F;
	g_return_val_if_fail (self != NULL, 0.0F);
	g_return_val_if_fail (desktop_id != NULL, 0.0F);
	_tmp0_ = self->priv->backend;
	if (_tmp0_ == NULL) {
		result = 0.0f;
		return result;
	}
	_tmp1_ = self->priv->backend;
	_tmp2_ = desktop_id;
	_tmp3_ = synapse_relevancy_backend_get_application_popularity (_tmp1_, _tmp2_);
	result = _tmp3_;
	return result;
}


gfloat synapse_relevancy_service_get_uri_popularity (SynapseRelevancyService* self, const gchar* uri) {
	gfloat result = 0.0F;
	SynapseRelevancyBackend* _tmp0_ = NULL;
	SynapseRelevancyBackend* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gfloat _tmp3_ = 0.0F;
	g_return_val_if_fail (self != NULL, 0.0F);
	g_return_val_if_fail (uri != NULL, 0.0F);
	_tmp0_ = self->priv->backend;
	if (_tmp0_ == NULL) {
		result = 0.0f;
		return result;
	}
	_tmp1_ = self->priv->backend;
	_tmp2_ = uri;
	_tmp3_ = synapse_relevancy_backend_get_uri_popularity (_tmp1_, _tmp2_);
	result = _tmp3_;
	return result;
}


void synapse_relevancy_service_application_launched (SynapseRelevancyService* self, GAppInfo* app_info) {
	SynapseRelevancyBackend* _tmp0_ = NULL;
	SynapseRelevancyBackend* _tmp1_ = NULL;
	GAppInfo* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (app_info != NULL);
	synapse_utils_logger_debug ((GObject*) self, "relevancy-service.vala:81: application launched", NULL);
	_tmp0_ = self->priv->backend;
	if (_tmp0_ == NULL) {
		return;
	}
	_tmp1_ = self->priv->backend;
	_tmp2_ = app_info;
	synapse_relevancy_backend_application_launched (_tmp1_, _tmp2_);
}


gint synapse_relevancy_service_compute_relevancy (gint base_relevancy, gfloat modifier) {
	gint result = 0;
	gint relevancy = 0;
	gint _tmp0_ = 0;
	gfloat _tmp1_ = 0.0F;
	_tmp0_ = base_relevancy;
	_tmp1_ = modifier;
	relevancy = (gint) (_tmp0_ + ((_tmp1_ * SYNAPSE_MATCH_SCORE_INCREMENT_LARGE) * 2));
	result = relevancy;
	return result;
}


static GObject * synapse_relevancy_service_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SynapseRelevancyService * self;
	parent_class = G_OBJECT_CLASS (synapse_relevancy_service_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyService);
	synapse_relevancy_service_instance = self;
	g_object_add_weak_pointer ((GObject*) self, &synapse_relevancy_service_instance);
	synapse_relevancy_service_initialize_relevancy_backend (self);
	return obj;
}


static void synapse_relevancy_service_class_init (SynapseRelevancyServiceClass * klass) {
	synapse_relevancy_service_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SynapseRelevancyServicePrivate));
	G_OBJECT_CLASS (klass)->constructor = synapse_relevancy_service_constructor;
	G_OBJECT_CLASS (klass)->finalize = synapse_relevancy_service_finalize;
}


static void synapse_relevancy_service_instance_init (SynapseRelevancyService * self) {
	self->priv = SYNAPSE_RELEVANCY_SERVICE_GET_PRIVATE (self);
}


static void synapse_relevancy_service_finalize (GObject* obj) {
	SynapseRelevancyService * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RELEVANCY_SERVICE, SynapseRelevancyService);
	_g_object_unref0 (self->priv->backend);
	G_OBJECT_CLASS (synapse_relevancy_service_parent_class)->finalize (obj);
}


GType synapse_relevancy_service_get_type (void) {
	static volatile gsize synapse_relevancy_service_type_id__volatile = 0;
	if (g_once_init_enter (&synapse_relevancy_service_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SynapseRelevancyServiceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) synapse_relevancy_service_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SynapseRelevancyService), 0, (GInstanceInitFunc) synapse_relevancy_service_instance_init, NULL };
		GType synapse_relevancy_service_type_id;
		synapse_relevancy_service_type_id = g_type_register_static (G_TYPE_OBJECT, "SynapseRelevancyService", &g_define_type_info, 0);
		g_once_init_leave (&synapse_relevancy_service_type_id__volatile, synapse_relevancy_service_type_id);
	}
	return synapse_relevancy_service_type_id__volatile;
}



