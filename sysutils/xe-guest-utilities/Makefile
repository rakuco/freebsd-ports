# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD$

PORTNAME=	xe-guest-utilities
PORTVERSION=	6.2.0
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL
MASTER_SITE_SUBDIR=	feld
DISTNAME=	${PORTNAME}-6.0.2

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	FreeBSD VM tools for Citrix XenServer and XCP

RUN_DEPENDS=	xen-tools>0:${PORTSDIR}/${PKGCATEGORY}/xen-tools

USES=		gmake python
USE_RC_SUBR=	xenguest

ONLY_FOR_ARCHS=		amd64 i386
ONLY_FOR_ARCHS_REASON=	"Requires i386 XEN or amd64 XENHVM kernels"

PLIST_FILES=	sbin/xe-daemon \
		sbin/xe-update-guest-attrs

do-build:
	@${DO_NADA}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/src/sbin/xe-daemon ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_SCRIPT} ${WRKSRC}/src/sbin/xe-update-guest-attrs ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
