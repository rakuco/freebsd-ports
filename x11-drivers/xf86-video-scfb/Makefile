# Created by: Florent Thoumie <flz@freebsd.org>
# $FreeBSD$

PORTNAME=	xf86-video-scfb
PORTVERSION=	0.0.4
PORTREVISION=	2
CATEGORIES=	x11-drivers

MAINTAINER=	ray@FreeBSD.org
COMMENT=	X.Org syscons display driver

USE_GITHUB=     yes
GH_ACCOUNT=     rayddteam
GH_PROJECT=     ${PORTNAME}
GH_TAGNAME=     bdeb3bf
GH_COMMIT=      bdeb3bf

USES=		libtool pkgconfig
GNU_CONFIGURE= 	yes
DIST_SUBDIR=	xorg/driver
USE_XORG=	xorg-server xproto randrproto xi renderproto xextproto \
		inputproto kbproto fontsproto videoproto dri2proto \
		xf86driproto glproto xineramaproto resourceproto \
		scrnsaverproto
CONFIGURE_ENV=	DRIVER_MAN_SUFFIX=4x DRIVER_MAN_DIR='$$(mandir)/man4'
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
