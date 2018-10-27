#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_invadergame.h"

class InvaderGame : public QMainWindow
{
	Q_OBJECT

public:
	InvaderGame(QWidget *parent = Q_NULLPTR);

private:
	Ui::InvaderGameClass ui;
};
