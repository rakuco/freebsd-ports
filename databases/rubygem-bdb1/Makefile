# $FreeBSD$

PORTNAME=	bdb1
PORTVERSION=	0.2.5
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to Berkeley DB revision 1.8x with full feature support

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual

USES=		execinfo

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} == 2.1
BROKEN=		Does not build with Ruby 2.1
.endif

.include <bsd.port.post.mk>
