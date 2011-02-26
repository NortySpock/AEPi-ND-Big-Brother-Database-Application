#!/usr/bin/python

import sys
from PyQt4 import QtGui

app = QtGui.QApplication(sys.argv)

widget = QtGui.QWidget()
widget.setGeometry(100, 100, 600, 400) #x offset, y offset, x length, y length
widget.setWindowTitle('AEPi ND Big Brother Database')
widget.show()

sys.exit(app.exec_())

