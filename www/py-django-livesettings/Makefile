# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD$

PORTNAME=	django-livesettings
DISTVERSION=	1.4-14
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
MASTER_SITE_SUBDIR=	source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Configure Django project settings via admin interface

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:${PORTSDIR}/devel/py-setuptools_hg
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django

USES=		python:2
USE_PYTHON=	distutils autoplist

post-patch:
	@${FIND} ${WRKSRC} -type f -name "*.orig" -delete

.include <bsd.port.mk>
