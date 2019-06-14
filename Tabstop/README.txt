The only difference between the two programs is the tabstop order.
In First, the TabBar is the first in the list.
In Last, the TabBar is the last in the list.

On Windows, this causes a lock-up when TabBar->setCurrentIndex is called.

Produced on: 
	MSVC2015, QT5.11.1
	MinGW64, QT5.12.3
	MSVC2015, QT5.10.1
