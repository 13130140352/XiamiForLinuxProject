void SaleDialog::initFindCustomerButton() {
    QString imagePath = QString("%1/find.png").arg(Configs::getInstance().getImagesFolderFilePath());
    QPixmap pixmap(imagePath);
    QIcon icon(imagePath);
    findCustomerButton = new QPushButton(icon, "");
    QSize size = QSize(pixmap.size().width() + 6, pixmap.size().height() + 4);
    findCustomerButton->setMinimumSize(size);
    findCustomerButton->setMaximumSize(size); // ���ð�ť�Ĵ�СΪͼƬ�Ĵ�С
    findCustomerButton->setFocusPolicy(Qt::NoFocus); // �õ�����ʱ������ʾ���߿�
    findCustomerButton->setFlat(true);
    findCustomerButton->setDefault(true);
    findCustomerButton->setToolTip(tr("���ҿͻ�"));

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->setContentsMargins(0, 0, 0, 0);
    buttonLayout->addStretch();
    buttonLayout->addWidget(findCustomerButton);
    ui->cardNumberLineEdit->setLayout(buttonLayout);
	// ������������ļ�����������������������ڱ������ڰ�ť��
    ui->cardNumberLineEdit->setTextMargins(0, 1, pixmap.size().width(), 1); 

    connect(findCustomerButton, SIGNAL(clicked()), this, SLOT(findCustomer()));
}