TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sarsa.cpp \
    escenario.cpp \
    damablanca.cpp \
    reynegro.cpp \
    coordenada.cpp \
    estado.cpp

HEADERS += \
    sarsa.h \
    escenario.h \
    damablanca.h \
    reynegro.h \
    coordenada.h \
    estado.h

