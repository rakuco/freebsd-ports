--- src/assistant/assistant.pro
+++ src/assistant/assistant.pro
@@ -1,20 +1,15 @@
 TEMPLATE = subdirs
 
-SUBDIRS += clucene \
-           help \
-           assistant \
+SUBDIRS += help \
            qhelpgenerator \
            qcollectiongenerator \
            qhelpconverter
 
-help.depends = clucene
-assistant.depends = help
 qhelpgenerator.depends = help
 qcollectiongenerator.depends = help
 qhelpconverter.depends = help
 
 qtNomakeTools( \
-    assistant \
     qhelpgenerator \
     qcollectiongenerator \
     qhelpconverter \
