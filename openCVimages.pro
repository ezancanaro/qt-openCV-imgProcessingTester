QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contourparser.cpp \
    imagespanel.cpp \
    imagestack.cpp \
    main.cpp \
    mainwindow.cpp \
    opencvtransformer.cpp \
    strategies/strategy.cpp \
    strategies/strategyStep.cpp \
    transformOptions/adaptivethresholdoptions.cpp \
    transformOptions/bilateralfilteroptions.cpp \
    transformOptions/customsobelthresholdoptions.cpp \
    transformOptions/gaussianbluroptions.cpp \
    transformOptions/hsvcolorfilteroptions.cpp \
    transformOptions/imagesubtractionoptions.cpp \
    transformOptions/medianbluroptions.cpp \
    transformOptions/morphoperationoptions.cpp \
    transformOptions/optionsmapbuilder.cpp \
    transformOptions/simplethresholdoptions.cpp \
    transformOptions/sobelderivativesoptions.cpp \
    transformOptions/transformoptions.cpp \
    transformOptionsForms/adaptivethresholdoptionsform.cpp \
    transformOptionsForms/baseoptionsform.cpp \
    transformOptionsForms/bilateralfilteroptionsform.cpp \
    transformOptionsForms/classtemplatefornewopencvtransformationforms.cpp \
    transformOptionsForms/customsobeloptionsform.cpp \
    transformOptionsForms/gaussianbluroptionsform.cpp \
    transformOptionsForms/hsvcolorfilteroptionsform.cpp \
    transformOptionsForms/imagesubtractionoptionsform.cpp \
    transformOptionsForms/medianbluroptionsform.cpp \
    transformOptionsForms/morphoperationsoptionform.cpp \
    transformOptionsForms/simplethresholdoptionsform.cpp \
    transformOptionsForms/sobelderivativesoptionsform.cpp

HEADERS += \
    contourparser.h \
    imagespanel.h \
    imagestack.h \
    mainwindow.h \
    openCVheaders.h \
    opencvtransformer.h \
    strategies/strategy.h \
    strategies/strategyStep.h \
    transformOptions/adaptivethresholdoptions.h \
    transformOptions/bilateralfilteroptions.h \
    transformOptions/customsobelthresholdoptions.h \
    transformOptions/gaussianbluroptions.h \
    transformOptions/hsvcolorfilteroptions.h \
    transformOptions/imagesubtractionoptions.h \
    transformOptions/medianbluroptions.h \
    transformOptions/morphoperationoptions.h \
    transformOptions/optionsmapbuilder.h \
    transformOptions/simplethresholdoptions.h \
    transformOptions/sobelderivativesoptions.h \
    transformOptions/transformoptions.h \
    transformOptionsForms/adaptivethresholdoptionsform.h \
    transformOptionsForms/baseoptionsform.h \
    transformOptionsForms/bilateralfilteroptionsform.h \
    transformOptionsForms/classtemplatefornewopencvtransformationforms.h \
    transformOptionsForms/customsobeloptionsform.h \
    transformOptionsForms/gaussianbluroptionsform.h \
    transformOptionsForms/hsvcolorfilteroptionsform.h \
    transformOptionsForms/imagesubtractionoptionsform.h \
    transformOptionsForms/medianbluroptionsform.h \
    transformOptionsForms/morphoperationsoptionform.h \
    transformOptionsForms/simplethresholdoptionsform.h \
    transformOptionsForms/sobelderivativesoptionsform.h

FORMS += \
    mainwindow.ui \
    transformOptionsForms/adaptiveThresholdForm.ui \
    transformOptionsForms/baseoptionsform.ui \
    transformOptionsForms/gaussianbluroptionsform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/../../opencv/buildManual/install/x86/mingw/lib/ -llibopencv_world411.dll
       LIBS += -L$$PWD/../../opencv/buildManual/install/x86/mingw/bin/ -llibopencv_world411.dll

INCLUDEPATH += $$PWD/../../opencv/buildManual/install/include
DEPENDPATH += $$PWD/../../opencv/buildManual/install/include
