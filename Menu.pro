TEMPLATE = subdirs
CONFIG += orderd

SUBDIRS =   base \
            core \
            gui \
            src

base.subdir = src/base
core.subdir = src/core
gui.subdir = src/gui
src.subdir = src/

asset.depends = base
core.depends = base core
src.depends = base core gui
