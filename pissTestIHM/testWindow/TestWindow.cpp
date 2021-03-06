#include "TestWindow.h"

TestWindow::TestWindow(igtDispatcher* dispatcher) : QWidget()
{
    //! receive attributes
    this->dispatcher = dispatcher;

    //! init
    appSize = QGuiApplication::primaryScreen()->availableSize()*0.8;

    //! ihm decoration
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
    setWindowOpacity(1);
    setMouseTracking(true);
    setAutoFillBackground(true);

    //! construct humain machine interface
    AppTitleLabel = new QLabel("IGT Communication Stack");
    AppTitleLabel->setFixedSize(appSize.width()*0.2, appSize.height()*0.05);
    AppTitleLabel->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: skyblue");
    AppTitleLabel->setFont(QFont("Helvetica",13, QFont::AnyStyle, true));
    AppTitleLabel->setAlignment(Qt::AlignCenter);

    ipLabel = new QLabel("ip address:");
    ipLabel->setFixedSize(appSize.width()*0.08, appSize.height()*0.05);
    ipLabel->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    ipLabel->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    ipLabel->setAlignment(Qt::AlignCenter);

    ipEdit = new QLineEdit("172.20.14.18");
    ipEdit->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);
    ipEdit->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    ipEdit->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    ipEdit->setAlignment(Qt::AlignCenter);

    portLabel = new QLabel("port:");
    portLabel->setFixedSize(appSize.width()*0.04, appSize.height()*0.05);
    portLabel->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    portLabel->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    portLabel->setAlignment(Qt::AlignCenter);

    portEdit = new QLineEdit("2630");
    portEdit->setFixedSize(appSize.width()*0.04, appSize.height()*0.05);
    portEdit->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    portEdit->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    portEdit->setAlignment(Qt::AlignCenter);

    launchButton = new QPushButton("launch");
    launchButton->setFixedSize(appSize.width()*0.05, appSize.height()*0.05);
    launchButton->setStyleSheet( "border: 1px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    launchButton->setFlat(true);
    launchButton->setFont(QFont("Helvetica",10, QFont::AnyStyle, true));

    terminateButton = new QPushButton("terminate");
    terminateButton->setFixedSize(appSize.width()*0.05, appSize.height()*0.05);
    terminateButton->setStyleSheet( "border: 1px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    terminateButton->setFlat(true);
    terminateButton->setFont(QFont("Helvetica",10, QFont::AnyStyle, true));

    spacerItem = new QLabel();
    spacerItem->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);

    //!- ------------------------------------------
    targetIpLabel = new QLabel("ip address: ");
    targetIpLabel->setFixedSize(appSize.width()*0.08, appSize.height()*0.05);
    targetIpLabel->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    targetIpLabel->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    targetIpLabel->setAlignment(Qt::AlignCenter);

    targetIpEdit = new QLineEdit("172.20.14.150");
    targetIpEdit->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);
    targetIpEdit->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    targetIpEdit->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    targetIpEdit->setAlignment(Qt::AlignCenter);

    targetPortLabel = new QLabel("port: ");
    targetPortLabel->setFixedSize(appSize.width()*0.04, appSize.height()*0.05);
    targetPortLabel->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    targetPortLabel->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    targetPortLabel->setAlignment(Qt::AlignCenter);

    targetPortEdit = new QLineEdit("10703");
    targetPortEdit->setFixedSize(appSize.width()*0.04, appSize.height()*0.05);
    targetPortEdit->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent; color: beige");
    targetPortEdit->setFont(QFont("Helvetica",12, QFont::AnyStyle, false));
    targetPortEdit->setAlignment(Qt::AlignCenter);

    connectRequestButton = new QPushButton("connect");
    connectRequestButton->setFixedSize(appSize.width()*0.05, appSize.height()*0.05);
    connectRequestButton->setStyleSheet( "border: 1px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    connectRequestButton->setFlat(true);
    connectRequestButton->setFont(QFont("Helvetica",12, QFont::AnyStyle, true));

    closeSystemButton = new QPushButton("X");
    closeSystemButton->setFixedSize(appSize.width()*0.03, appSize.height()*0.05);
    closeSystemButton->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent;  min-width: 0px; color: red");
    closeSystemButton->setFlat(true);
    closeSystemButton->setFont(QFont("Segoe UI",12, QFont::AnyStyle, true));

    toolBar = new QFrame();
    toolBar->setFixedHeight(appSize.height()*0.05);
    toolBarLayout = new QHBoxLayout(toolBar);
    toolBarLayout->addWidget(AppTitleLabel);

    toolBarLayout->addWidget(ipLabel);
    toolBarLayout->addWidget(ipEdit);
    toolBarLayout->addWidget(portLabel);
    toolBarLayout->addWidget(portEdit);

    toolBarLayout->addWidget(launchButton);
    toolBarLayout->addWidget(terminateButton);
    toolBarLayout->addWidget(spacerItem);

    toolBarLayout->addWidget(targetIpLabel);
    toolBarLayout->addWidget(targetIpEdit);
    toolBarLayout->addWidget(targetPortLabel);
    toolBarLayout->addWidget(targetPortEdit);
    toolBarLayout->addWidget(connectRequestButton);
    toolBarLayout->addWidget(closeSystemButton);
    toolBarLayout->setSpacing(1);
    toolBarLayout->setMargin(0);

    communicationStateContainer = new CommunicationStatesContainer(appSize.width(), appSize.height()*0.95);
    myLayout = new QVBoxLayout(this);
    myLayout->addWidget(toolBar);
    myLayout->addWidget(communicationStateContainer);
    myLayout->setSpacing(0);
    myLayout->setMargin(5);
    resize(appSize);
    drawBackground();

    connect(closeSystemButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(launchButton, SIGNAL(clicked()), this, SLOT(launchServer()));
    connect(connectRequestButton, SIGNAL(clicked()), this, SLOT(on_ConnectRequestButtonClicked()));
}

//! ----------------------------------------------------------------------------------------------------------------
//!
//! \brief TestWindow::on_ConnectRequestButtonClicked
//!
void TestWindow::on_ConnectRequestButtonClicked(){
    this->dispatcher->launchConnectBackProcess(true,targetIpEdit->text(), targetPortEdit->text().toInt());
}

//! ----------------------------------------------------------------------------------------------------------------
//!
//! \brief TestWindow::launchServer
//!
void TestWindow::launchServer(){
    this->dispatcher->launchCommunicationStackServer();
}

//! ----------------------------------------------------------------------------------------------------------------
//!
//! \brief TestWindow::drawBackground
//!
void TestWindow::drawBackground(){
    QPixmap *pixmap = new QPixmap(":/images/background.png");
    QPalette p =  this->palette();

    p.setBrush(QPalette::Background,
               QBrush(pixmap->scaled(QSize(appSize.width(), appSize.height()),
                                     Qt::IgnoreAspectRatio,
                                     Qt::SmoothTransformation)));

    this->setPalette(p);
    this->setMask(pixmap->mask());
}
