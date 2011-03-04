#!/usr/bin/python

import sys
from PyQt4 import QtGui

class TabHandler(QtGui.QTabWidget):
  def __init__(self):
    super(TabHandler, self).__init__()
    
    self.initTabs()
    
  def initTabs(self):
    

class MainWindow(QtGui.QWidget):
  
  def __init__(self):
    super(MainWindow, self).__init__()
    
    self.initUI()
    
    
  def initUI(self):
    
    okButton = QtGui.QPushButton("OK")
    cancelButton = QtGui.QPushButton("Cancel")

    hbox = QtGui.QHBoxLayout()
    hbox.addStretch(1)
    hbox.addWidget(okButton)
    hbox.addWidget(cancelButton)

    vbox = QtGui.QVBoxLayout()
    vbox.addStretch(1)
    vbox.addLayout(hbox)
        
    self.setLayout(vbox)
    QtGui.QApplication.setStyle(QtGui.QStyleFactory.create('Cleanlooks'))
    self.setWindowTitle('AEPi ND Big Brother Database')
    self.setGeometry(100, 100, 600, 400) #x offset, y offset, x length, y length


app = QtGui.QApplication(sys.argv)

mainWindow = MainWindow()
mainWindow.show()


sys.exit(app.exec_())

