# Created by: Aleksander Fafula <alex@BSDGuru.org>
# $FreeBSD$

PORTNAME=	libgadu
PORTVERSION=	1.12.1
PORTEPOCH=	1
CATEGORIES=	polish net-im

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Instant messaging library for Gadu-Gadu protocol

LICENSE=	LGPL21

LIB_DEPENDS=	libprotobuf-c.so:${PORTSDIR}/devel/protobuf-c

CONFLICTS=	pl-ekg-1.[0-6]*

USE_GITHUB=	yes
GH_ACCOUNT=	wojtekka
GH_COMMIT=	bee8ba0

USES=		autoreconf gmake libtool pathfix pkgconfig tar:bzip2
PATHFIX_MAKEFILEIN=	Makefile.am
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared --disable-static --with-pthread \
		--disable-tests --without-gnutls
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	include/libgadu.h \
		lib/libgadu.so \
		lib/libgadu.so.3 \
		lib/libgadu.so.3.13.0 \
		libdata/pkgconfig/libgadu.pc

OPTIONS_DEFINE=	OPENSSL
OPTIONS_DEFAULT=OPENSSL

OPENSSL_CONFIGURE_WITH=	openssl
OPENSSL_USE=		OPENSSL=yes

.include <bsd.port.pre.mk>

pre-install:
# OpenSSL from base system lacks .pc file for pkgconfig
.if ${PORT_OPTIONS:MOPENSSL}
	@${REINPLACE_CMD} -e 's|openssl| |g' ${WRKSRC}/pkgconfig/libgadu.pc
.endif

.include <bsd.port.post.mk>
