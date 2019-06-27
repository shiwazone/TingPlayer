#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TingPlayer.h"

class TingPlayer : public QMainWindow
{
	Q_OBJECT

public:
	TingPlayer(QWidget *parent = Q_NULLPTR);

private:
	Ui::TingPlayerClass ui;
};
