# $FreeBSD$

PORTNAME=	libsearpc
PORTVERSION=	3.0.0
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yan_jingfeng@yahoo.com
COMMENT=	Simple RPC framework based on GObject System in C

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libjansson.so:${PORTSDIR}/devel/jansson \
		libgobject-2.0.so:${PORTSDIR}/devel/glib20

USE_GITHUB=	yes
GH_ACCOUNT=	haiwen
GH_TAGNAME=	v3.0-latest
GH_COMMIT=	8998e7b

USES=		autoreconf libtool pathfix pkgconfig python:2
USE_LDCONFIG=	yes
PATHFIX_MAKEFILEIN=	Makefile.am

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

HAIWENDIR=	www/haiwen
SEAFILE_SERVER=	${HAIWENDIR}/seafile-server
SEALIB=		${SEAFILE_SERVER}/seafile/lib

SEAFILE_USERNAME?=	www
SEAFILE_GROUPNAME?=	${SEAFILE_USERNAME}

PLIST_SUB=	SEAFILE_USERNAME=${SEAFILE_USERNAME} \
		SEAFILE_GROUPNAME=${SEAFILE_GROUPNAME} \
		SEAFILE_SERVER=${SEAFILE_SERVER} \
		HAIWENDIR=${HAIWENDIR}

post-install:
	@${MKDIR} ${STAGEDIR}${SEALIB}
	(cd ${STAGEDIR}${PREFIX}/lib && \
		${COPYTREE_SHARE} ${PYTHON_VERSION} ${STAGEDIR}${PREFIX}/${SEALIB})
	${RM} -rf ${STAGEDIR}${PREFIX}/lib/${PYTHON_VERSION}

.include <bsd.port.mk>
