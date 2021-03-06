/*

    Copyright (C) 2013  Hong Jen Yee (PCMan) <pcman.tw@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#ifndef FM_COLORBUTTON_H
#define FM_COLORBUTTON_H

#include "libfmqtglobals.h"
#include <QPushButton>
#include <QColor>

namespace Fm {

class LIBFM_QT_API ColorButton : public QPushButton {
Q_OBJECT

public:
  explicit ColorButton(QWidget* parent = 0);
  virtual ~ColorButton();

  void setColor(const QColor&);

  QColor color() const {
    return color_;
  }
  
Q_SIGNALS:
  void changed();

private Q_SLOTS:
  void onClicked();

private:
  QColor color_;
};

}

#endif // FM_COLORBUTTON_H
