#ifndef __ROCCAT_RYOSCONFIG_NOTIFICATION_FRAME_H__
#define __ROCCAT_RYOSCONFIG_NOTIFICATION_FRAME_H__

/*
 * This file is part of roccat-tools.
 *
 * roccat-tools is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * roccat-tools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with roccat-tools. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include "ryos_profile_data.h"

G_BEGIN_DECLS

#define RYOSCONFIG_NOTIFICATION_FRAME_TYPE (ryosconfig_notification_frame_get_type())
#define RYOSCONFIG_NOTIFICATION_FRAME(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), RYOSCONFIG_NOTIFICATION_FRAME_TYPE, RyosconfigNotificationFrame))
#define IS_RYOSCONFIG_NOTIFICATION_FRAME(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), RYOSCONFIG_NOTIFICATION_FRAME_TYPE))

typedef struct _RyosconfigNotificationFrame RyosconfigNotificationFrame;

GType ryosconfig_notification_frame_get_type(void);
GtkWidget *ryosconfig_notification_frame_new(void);

void ryosconfig_notification_frame_set_from_profile_data(RyosconfigNotificationFrame *notification_frame, RyosProfileData const *profile_data);
void ryosconfig_notification_frame_update_profile_data(RyosconfigNotificationFrame *notification_frame, RyosProfileData *profile_data);

G_END_DECLS

#endif
