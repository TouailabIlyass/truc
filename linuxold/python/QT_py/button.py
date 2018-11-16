import sys
from PyQt5 import QtWidgets,QtGui
from time import sleep
def window():
	app=QtWidgets.QApplication(sys.argv)
	b=QtWidgets.QWidget()
	b.setWindowTitle('lecon 1')
	l=QtWidgets.QLabel(b)
	bt=QtWidgets.QPushButton(b)
	l2=QtWidgets.QLabel(b)
	
	bt.setText('button')
	l2.setPixmap(QtGui.QPixmap('1.png'))
	l.setText('hello world')
	l.move(120,20)
	b.setGeometry(0,10,300,200)
	l2.resize(100,100)
	b.show()
	
	sys.exit(app.exec_())
		

window()	