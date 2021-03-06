# Created by: Jose Alonso Cardenas Marquez <acardenas@bsd.org.pe>
# $FreeBSD$

PORTNAME=	zim
PORTVERSION=	0.62
CATEGORIES=	editors python
MASTER_SITES=	http://www.zim-wiki.org/downloads/

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Desktop wiki editor

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xdg>0:${PORTSDIR}/devel/py-xdg \
		xdg-open:${PORTSDIR}/devel/xdg-utils \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3

NO_ARCH=	yes

USES=		desktop-file-utils gettext python:2 shared-mime-info
USE_GNOME=	pygtk2
USE_PYTHON=	autoplist distutils
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=		BZR DITAA GIT GNUPLOT GNUR GRAPHVIZ LATEX \
			MERCURIAL SCROT

DITAA_DESC=		Diagram editor support
DITAA_RUN_DEPENDS=	ditaa:${PORTSDIR}/graphics/ditaa
BZR_DESC=		Version control for notebooks using bzr
BZR_RUN_DEPENDS=	bzr:${PORTSDIR}/devel/bzr
GIT_DESC=		Version control for notebooks using git
GIT_RUN_DEPENDS=	git:${PORTSDIR}/devel/git
GNUPLOT_RUN_DEPENDS=	gnuplot:${PORTSDIR}/math/gnuplot
GNUR_DESC=		Support of plot editor based on GNU R
GNUR_RUN_DEPENDS=	R:${PORTSDIR}/math/R
GRAPHVIZ_RUN_DEPENDS=	fdp:${PORTSDIR}/graphics/graphviz
LATEX_USE=		tex=latex:run
MERCURIAL_DESC=		Version control for notebooks using hg
MERCURIAL_RUN_DEPENDS=	hg:${PORTSDIR}/devel/mercurial
SCROT_DESC=		Screenshot taking and inserting support
SCROT_RUN_DEPENDS=	scrot:${PORTSDIR}/graphics/scrot

post-patch:
	@${REINPLACE_CMD} -e \
		'/.command.install /s|distutils|setuptools| ; \
		 s|share/man|man| ; \
		 /.skip_xdg_cmd = /s|0|1|' \
		${WRKSRC}/setup.py
	@${REINPLACE_CMD} -e \
		's|decode('utf-8')|decode('utf-8','replace')|g' \
		${WRKSRC}/zim/utils.py

.include <bsd.port.mk>
