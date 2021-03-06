--- ./platform/x11/pdfapp.c.orig	2014-08-04 19:59:53.000000000 +0200
+++ ./platform/x11/pdfapp.c	2014-08-04 20:03:46.000000000 +0200
@@ -1166,6 +1166,8 @@
 	case 'j':
 		{
 			int h = fz_pixmap_height(app->ctx, app->image);
+                        if ( (app->pany + h) <= app->winh )
+                            goto pagedown;
 			if (h <= app->winh || app->pany <= app->winh - h)
 			{
 				panto = PAN_TO_TOP;
@@ -1182,6 +1184,8 @@
 	case 'k':
 		{
 			int h = fz_pixmap_height(app->ctx, app->image);
+                        if (app->pany >= 0)
+                            goto pageup;
 			if (h <= app->winh || app->pany == 0)
 			{
 				panto = PAN_TO_BOTTOM;
@@ -1257,6 +1261,7 @@
 	 */
 
 	case ',':
+        pageup:
 		panto = PAN_TO_BOTTOM;
 		if (app->numberlen > 0)
 			app->pageno -= atoi(app->number);
@@ -1265,6 +1270,7 @@
 		break;
 
 	case '.':
+        pagedown:
 		panto = PAN_TO_TOP;
 		if (app->numberlen > 0)
 			app->pageno += atoi(app->number);
@@ -1585,6 +1591,12 @@
 				int isx = (modifiers & (1<<0));
 				int xstep = isx ? 20 * dir : 0;
 				int ystep = !isx ? 20 * dir : 0;
+				if (!isx && dir < 0 && app->pany +
+				    fz_pixmap_height(app->ctx, app->image) <= app->winh)
+					pdfapp_onkey(app, 'j');
+				else if (!isx && dir > 0 && app->pany >= 0)
+					pdfapp_onkey(app, 'k');
+				else
 				pdfapp_panview(app, app->panx + xstep, app->pany + ystep);
 			}
 		}
