# Created by: Evgeniy Kosov <evgeniy@kosov.su>
# $FreeBSD$

PORTNAME=	Log-Any-Adapter-Log4perl
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log::Any adapter for Log4perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Log-Any>=0:${PORTSDIR}/devel/p5-Log-Any \
		p5-Log-Log4perl>=1.32:${PORTSDIR}/devel/p5-Log-Log4perl
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
