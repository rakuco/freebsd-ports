# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD$

PORTNAME=	CGI-Fast
PORTVERSION=	2.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LEEJO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl CGI Interface for FastCGI

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-FCGI>=0.67:${PORTSDIR}/www/p5-FCGI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

CONFLICTS=	p5-CGI.pm-[1-3]*

USES=		perl5
USE_PERL5=	configure

# This will need to be added for perl5.22.
#BUILD_DEPENDS+=p5-CGI>=4:${PORTSDIR}/www/p5-CGI

.include <bsd.port.mk>
