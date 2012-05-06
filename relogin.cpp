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
#include "relogin.h"
#include "ui_relogin.h"

ReLogin::ReLogin(const QString & reason , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReLogin)
{
    ui->setupUi(this);
    ui->label->setText(reason);
    _decision = Quit;
}

ReLogin::~ReLogin()
{
    delete ui;
}

void ReLogin::on_pushButton_2_clicked()
{
    _decision = Quit;
    close ();
}

void ReLogin::on_pushButton_clicked()
{
    _decision = Login;
    close ();
}
