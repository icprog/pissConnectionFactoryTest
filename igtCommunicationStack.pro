#-------------------------------------------------
#
# Project created by QtCreator 2016-04-02T09:45:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network core printsupport

TARGET = igtCommunicationStack
TEMPLATE = app

INCLUDEPATH += pissConnectionFactory

INCLUDEPATH += pissTestIHM/GuiComponentLib

INCLUDEPATH += pissTestIHM/testWindow

SOURCES +=  main.cpp\
            pissConnectionFactory/CDatagramme.cpp \
            pissConnectionFactory/DatagrammeAnalyser.cpp \
            pissConnectionFactory/GlobalTime.cpp \
            pissConnectionFactory/InputQueue.cpp \
            pissConnectionFactory/ModuleIpConfig.cpp \
            pissConnectionFactory/OutputQueue.cpp \
            pissConnectionFactory/pissCommunicationStack.cpp \
            pissConnectionFactory/pissInputInformationDecoder.cpp \
            pissConnectionFactory/pissNetworkEnvironment.cpp \
            pissConnectionFactory/pissOutputInformationEncoder.cpp \
            pissConnectionFactory/pissReceptionTask.cpp \
            pissConnectionFactory/pissServer.cpp \
            pissConnectionFactory/pissTransmissionTask.cpp \
            pissConnectionFactory/pissClient.cpp \
            pissTestIHM/GuiComponentLib/ColorChooseWindow.cpp \
            pissTestIHM/GuiComponentLib/ColorPoint.cpp \
            pissTestIHM/GuiComponentLib/CPushButton.cpp \
            pissTestIHM/GuiComponentLib/HistogramPoint.cpp \
            pissTestIHM/GuiComponentLib/PlotPoint.cpp \
            pissTestIHM/GuiComponentLib/PlottingBoard.cpp \
            pissTestIHM/GuiComponentLib/qcustomplot.cpp \
            pissTestIHM/GuiComponentLib/TransferPoint.cpp \
            pissTestIHM/testWindow/TestWindow.cpp \
            pissTestIHM/testWindow/CommunicationStatesContainer.cpp

HEADERS  += \
            pissConnectionFactory/CDatagramme.h \
            pissConnectionFactory/DatagrammeAnalyser.h \
            pissConnectionFactory/GlobalTime.h \
            pissConnectionFactory/InputQueue.h \
            pissConnectionFactory/ModuleIpConfig.h \
            pissConnectionFactory/OutputQueue.h \
            pissConnectionFactory/pissCommunicationStack.h \
            pissConnectionFactory/pissInputInformationDecoder.h \
            pissConnectionFactory/pissNetworkEnvironment.h \
            pissConnectionFactory/pissOutputInformationEncoder.h \
            pissConnectionFactory/pissReceptionTask.h \
            pissConnectionFactory/pissServer.h \
            pissConnectionFactory/pissTransmissionTask.h \
            pissConnectionFactory/pissClient.h \
            pissTestIHM/GuiComponentLib/ColorChooseWindow.h \
            pissTestIHM/GuiComponentLib/ColorPoint.h \
            pissTestIHM/GuiComponentLib/CPushButton.h \
            pissTestIHM/GuiComponentLib/HistogramPoint.h \
            pissTestIHM/GuiComponentLib/PlotPoint.h \
            pissTestIHM/GuiComponentLib/PlottingBoard.h \
            pissTestIHM/GuiComponentLib/qcustomplot.h \
            pissTestIHM/GuiComponentLib/TransferPoint.h \
            pissTestIHM/testWindow/TestWindow.h \
            pissTestIHM/testWindow/CommunicationStatesContainer.h
