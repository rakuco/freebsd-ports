# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kqoauth
PORTVERSION=	0.98
CATEGORIES=	security
MASTER_SITES=	GH GHC

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Implimentation of OAuth 1.0 in C++ for Qt

LICENSE=	LGPL21

USES=		qmake pkgconfig
USE_QT4=	corelib gui linguist_build moc_build qtestlib
USE_LDCONFIG=	yes
QMAKE_SOURCE_PATH=	${PORTNAME}.pro

USE_GITHUB=	yes
GH_ACCOUNT=	kypeli
GH_PROJECT=	kQOAuth
GH_COMMIT=	677339c

pre-configure:
	${REINPLACE_CMD} -e 's|$${target.path}/pkgconfig|$${INSTALL_PREFIX}/libdata/pkgconfig|g' \
		${WRKSRC}/src/src.pro

.include <bsd.port.mk>
