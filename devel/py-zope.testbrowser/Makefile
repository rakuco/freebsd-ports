# $FreeBSD$

PORTNAME=	zope.testbrowser
PORTVERSION=	4.0.4
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Programmable browser for functional black-box tests

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mechanize>=0.2.0:${PORTSDIR}/www/py-mechanize \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:${PORTSDIR}/devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:${PORTSDIR}/devel/py-zope.schema \
		${PYTHON_PKGNAMEPREFIX}pytz>=0:${PORTSDIR}/devel/py-pytz \
		${PYTHON_PKGNAMEPREFIX}WebTest>=0:${PORTSDIR}/www/py-WebTest

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
