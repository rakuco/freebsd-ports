# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libxfce4menu
PORTVERSION=	4.12.0
CATEGORIES=	x11 xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DISTNAME=	libxfce4ui-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Widgets library for the Xfce desktop environment

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_GNOME=	glib20 gtk20 intltool intlhack
USE_LDCONFIG=	yes
USE_XFCE=	xfconf
INSTALLS_ICONS=	yes
USES=		gmake libtool pathfix pkgconfig gettext-tools \
	xfce tar:bzip2

CONFIGURE_ARGS=	--with-vendor-info=${OPSYS} --without-html-dir

OPTIONS_DEFINE=		GLADE GTK3 NLS STARTUP
OPTIONS_DEFAULT=	GTK3 STARTUP
STARTUP_DESC=	Startup notification
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:${PORTSDIR}/x11/startup-notification
STARTUP_CONFIGURE_ENABLE=	startup-notification
NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls
GLADE_LIB_DEPENDS=	libgladeui-1.so:${PORTSDIR}/devel/glade3
GLADE_CONFIGURE_ENABLE=	gladeui
GTK3_USE=	gnome=gtk30
GTK3_CONFIGURE_ENABLE=	gtk3
OPTIONS_SUB=	yes

.include <bsd.port.mk>
