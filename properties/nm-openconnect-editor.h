/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/***************************************************************************
 * Copyright (C) 2008 Dan Williams, <dcbw@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 **************************************************************************/

#ifndef __NM_OPENCONNECT_EDITOR_H__
#define __NM_OPENCONNECT_EDITOR_H__

#define OPENCONNECT_TYPE_EDITOR            (openconnect_editor_get_type ())
#define OPENCONNECT_EDITOR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), OPENCONNECT_TYPE_EDITOR, OpenconnectEditor))
#define OPENCONNECT_EDITOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), OPENCONNECT_TYPE_EDITOR, OpenconnectEditorClass))
#define OPENCONNECT_IS_EDITOR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), OPENCONNECT_TYPE_EDITOR))
#define OPENCONNECT_IS_EDITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), OPENCONNECT_TYPE_EDITOR))
#define OPENCONNECT_EDITOR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), OPENCONNECT_TYPE_EDITOR, OpenconnectEditorClass))

typedef struct _OpenconnectEditor OpenconnectEditor;
typedef struct _OpenconnectEditorClass OpenconnectEditorClass;

struct _OpenconnectEditor {
	GObject parent;
};

struct _OpenconnectEditorClass {
	GObjectClass parent;
};

GType openconnect_editor_get_type (void);

NMVpnEditor *nm_vpn_editor_new (NMConnection *connection, GError **error);

#endif /* __NM_OPENCONNECT_EDITOR_H__ */

