# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD$

PORTNAME=	nessus-libnasl
PORTVERSION=	2.2.9
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	ftp://ftp.nessus.org/pub/nessus/nessus-${PORTVERSION}/src/ \
		ftp://ftp.gwdg.de/pub/linux/misc/nessus/nessus-${PORTVERSION}/src/ \
		http://ftp.gwdg.de/pub/linux/misc/nessus/nessus-${PORTVERSION}/src/ \
		ftp://sunsite.cnlab-switch.ch/mirror/nessus/nessus-${PORTVERSION}/src/ \
		ftp://ftp.ayamura.org/pub/nessus/nessus-${PORTVERSION}/src/
DISTNAME=	libnasl-${PORTVERSION}
DIST_SUBDIR=	nessus

MAINTAINER=	udo.schweigert@siemens.com
COMMENT=	Nessus Attack Scripting Language

LICENSE=	GPLv2

LIB_DEPENDS=	libnessus.so:${PORTSDIR}/security/nessus-libraries

GNU_CONFIGURE=	yes
USES=		bison libtool
USE_LDCONFIG=	yes
USE_OPENSSL=	yes
WRKSRC=		${WRKDIR}/libnasl

.include <bsd.port.mk>
