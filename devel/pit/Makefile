# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD$

PORTNAME=	pit
PORTVERSION=	0.1.0
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line project manager that integrates with Git

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	michaeldv
GH_COMMIT=	fd6b3ef

PLIST_FILES=	bin/pit

MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|CC =|CC ?=| ; \
		 s|$$(CC) -o|$$(CC) $$(CFLAGS) -o|' ${WRKSRC}/Makefile

do-install:
	(cd ${WRKSRC}/bin && ${INSTALL_PROGRAM} pit ${STAGEDIR}${PREFIX}/bin)

.include <bsd.port.mk>
