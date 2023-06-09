QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutprogram.cpp \
    comb.cpp \
    language.cpp \
    main.cpp \
    mainwindow.cpp \
    thread.cpp

HEADERS += \
    aboutprogram.h \
    comb.h \
    language.h \
    mainwindow.h \
    thread.h

FORMS += \
    aboutprogram.ui \
    comb.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

TRANSLATIONS += QtLanguage_en.ts QtLanguage_ru.ts
CODECFORSRC = UTF-8

RESOURCES += \
    OtherRes.qrc
