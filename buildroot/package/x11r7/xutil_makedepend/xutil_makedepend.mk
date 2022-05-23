################################################################################
#
# xutil_makedepend
#
################################################################################

XUTIL_MAKEDEPEND_VERSION = 1.0.5
XUTIL_MAKEDEPEND_SOURCE = makedepend-$(XUTIL_MAKEDEPEND_VERSION).tar.bz2
XUTIL_MAKEDEPEND_SITE = http://xorg.freedesktop.org/releases/individual/util
XUTIL_MAKEDEPEND_LICENSE = MIT
XUTIL_MAKEDEPEND_LICENSE_FILES = COPYING

XUTIL_MAKEDEPEND_DEPENDENCIES = xorgproto
HOST_XUTIL_MAKEDEPEND_DEPENDENCIES = host-xorgproto

$(eval $(autotools-package))
$(eval $(host-autotools-package))
