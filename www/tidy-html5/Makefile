# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD$

PORTNAME=	tidy-html5
PORTVERSION=	4.9.18
CATEGORIES=	www

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Tidy tidies HTML and XML documents

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USE_GITHUB=	yes
GH_ACCOUNT=	htacg
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	${GH_COMMIT}
GH_COMMIT=	2e383c6

USES=		cmake

CMAKE_ARGS=	-DBUILD_SHARED_LIB:BOOL=ON

pre-configure:
	${REINPLACE_CMD} -e 's|build/cmake/||' ${WRKSRC}/test/testone.sh

regression-test:
	(cd ${WRKSRC}/test && ./testall.sh)

.include <bsd.port.mk>
