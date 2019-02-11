TEMPLATE = subdirs
CONFIG += orderd

SUBDIRS =   base \
            core \
            src

base.subdir = src/base
core.subdir = src/core
src.subdir = src/

asset.depends = base
src.depends = core
