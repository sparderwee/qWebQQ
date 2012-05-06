/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * Razor - a lightweight, Qt based, desktop toolset
 * http://razor-qt.org
 *
 * Copyright: 2012 Razor team
 * Authors:
 *   Aaron Lewis <the.warl0ck.1989@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */
#include "remotelogviewer.h"
#include "ui_remotelogviewer.h"

RemoteLogViewer::RemoteLogViewer(QQ *qq , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoteLogViewer),
    _page (0)
{
    ui->setupUi(this);
    _qq = qq;

    setAttribute(Qt::WA_DeleteOnClose);
}

RemoteLogViewer::~RemoteLogViewer()
{
    delete ui;
}

void RemoteLogViewer::on_pushButton_clicked()
{
    close ();
}
