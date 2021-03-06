# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Thunar
PORTVERSION=	1.6.6
CATEGORIES=	x11-fm xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce file manager

LICENSE=	GPLv2 LGPL20
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING ${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libtumbler-1.so:${PORTSDIR}/deskutils/xfce4-tumbler \
	libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib
RUN_DEPENDS=	pkexec:${PORTSDIR}/sysutils/polkit

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	gtk20 intltool intlhack gdkpixbuf2
USE_LDCONFIG=	yes
USE_XFCE=	libexo
USE_XORG=	sm x11
USES=		desktop-file-utils gmake pathfix perl5 libtool pkgconfig \
	gettext-tools xfce tar:bzip2

OPTIONS_DEFINE=	GVFS NLS NOTIFY STARTUP
OPTIONS_GROUP=	PLUGINS
OPTIONS_GROUP_PLUGINS=	PLUG_APR PLUG_SBR PLUG_TPA PLUG_UCA PLUG_WALL
OPTIONS_DEFAULT=	GVFS NOTIFY PLUG_APR PLUG_SBR PLUG_UCA PLUG_TPA PLUG_WALL STARTUP

# Override NOTIFY_DESC
NOTIFY_DESC=	Display notifications
STARTUP_DESC=	Startup notification
PLUG_APR_DESC=	Advanced Properties plugin
PLUG_SBR_DESC=	Simple Builtin Renamers plugin
PLUG_TPA_DESC=	Trash Panel Applet plugin
PLUG_UCA_DESC=	User Customizable Actions plugin
PLUG_WALL_DESC=	Wallpaper plugin

GVF_USE=	gnome=gvfs
NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls
NOTIFY_LIB_DEPENDS=	libnotify.so:${PORTSDIR}/devel/libnotify
NOTIFY_CONFIGURE_ENABLE=	notifications
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:${PORTSDIR}/x11/startup-notification
STARTUP_CONFIGURE_ENABLE=	startup-notification
PLUG_APR_LIB_DEPENDS=	libexif.so:${PORTSDIR}/graphics/libexif
PLUG_APR_CONFIGURE_ENABLE=	apr-plugin exif
PLUG_SBR_LIB_DEPENDS=	libpcre.so:${PORTSDIR}/devel/pcre
PLUG_SBR_CONFIGURE_ENABLE=	sbr-plugin pcre
PLUG_TPA_USE=	xfce=panel
PLUG_TPA_CONFIGURE_ENABLE=	tpa-plugin
PLUG_UCA_CONFIGURE_ENABLE=	uca-plugin
PLUG_WALL_CONFIGURE_ENABLE=	wallpaper-plugin
OPTIONS_SUB=	yes

CONFIGURE_ARGS+=--enable-gio-unix \
		--disable-gudev \
		--enable-dbus \
		--without-html-dir

post-patch:
	${REINPLACE_CMD} -e 's|internet-mail|mail-send|' \
		${WRKSRC}/plugins/thunar-sendto-email/thunar-sendto-email.desktop.in.in

.include <bsd.port.mk>
