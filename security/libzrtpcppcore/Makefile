# $FreeBSD$

PORTNAME=	libzrtpcppcore
DISTVERSIONPREFIX=	V
DISTVERSION=	4.3.1
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	GHR

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	GNU ZRTP library

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	wernerd
GH_PROJECT=	ZRTPCPP
WRKSRC=		${WRKDIR}/${GH_PROJECT}-${DISTVERSION}

USES=		cmake:outsource
CMAKE_ARGS=	-DCORE_LIB=true
USE_LDCONFIG=	yes

.include <bsd.port.mk>
