--- src/src.pro.orig	2014-09-11 13:48:29.000000000 +0300
+++ src/src.pro	2014-10-17 00:08:28.000000000 +0300
@@ -3,18 +3,7 @@
 SUBDIRS += \
     qml
 
-qtHaveModule(gui):contains(QT_CONFIG, opengl(es1|es2)?) {
-    SUBDIRS += \
-        quick \
-        qmltest \
-        particles
-
-    qtHaveModule(widgets): SUBDIRS += quickwidgets
-}
-
 SUBDIRS += \
-    plugins \
-    imports \
     qmldevtools
 
 qmldevtools.CONFIG = host_build
