# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Authen-SCRAM
PORTVERSION=	0.005
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Salted Challenge Response Authentication Mechanism (RFC 5802)

LICENSE=	APACHE20

BUILD_DEPENDS=	p5-Authen-SASL-SASLprep>=0:${PORTSDIR}/security/p5-Authen-SASL-SASLprep \
		p5-Crypt-URandom>=0:${PORTSDIR}/security/p5-Crypt-URandom \
		p5-Moo>=1.001000:${PORTSDIR}/devel/p5-Moo \
		p5-PBKDF2-Tiny>=0.003:${PORTSDIR}/security/p5-PBKDF2-Tiny \
		p5-Try-Tiny>=0:${PORTSDIR}/lang/p5-Try-Tiny \
		p5-Type-Tiny>=0:${PORTSDIR}/devel/p5-Type-Tiny \
		p5-namespace-clean>=0:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-FailWarnings>=0:${PORTSDIR}/devel/p5-Test-FailWarnings \
		p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
