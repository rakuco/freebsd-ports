# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD$

PORTNAME=	pyes
PORTVERSION=	0.99.5
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Python connector for ElasticSearch - the pythonic way to use ElasticSearch

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:${PORTSDIR}/devel/py-six \
		${PYTHON_PKGNAMEPREFIX}urllib3>=0:${PORTSDIR}/net/py-urllib3

USES=		python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
