# Created by: James Earl <jdearl@telus.net>
# $FreeBSD$

PORTNAME=	xfce4-desktop
PORTVERSION=	4.12.0
CATEGORIES=	x11-wm xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DISTNAME=	xfdesktop-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's desktop manager

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib \
		libnotify.so:${PORTSDIR}/devel/libnotify

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	glib20 gtk20 intltool intlhack libwnck
USE_XFCE=	garcon thunar
USES=	pkgconfig gmake gettext-tools xfce tar:bzip2
USE_XORG=	x11 sm

CONFIGURE_ARGS+=--enable-gio-unix \
	--enable-notifications \
	--with-file-manager-fallback=Thunar

OPTIONS_DEFINE=		NLS
NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls
OPTIONS_SUB=	yes

.include <bsd.port.pre.mk>

post-patch:
.if !${PORT_OPTIONS:MNLS}
	@${REINPLACE_CMD} -e 's|po ||' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.post.mk>
