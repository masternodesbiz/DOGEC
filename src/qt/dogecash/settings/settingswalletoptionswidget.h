// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSWALLETOPTIONSWIDGET_H
#define SETTINGSWALLETOPTIONSWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/dogecash/pwidget.h"
namespace Ui {
class SettingsWalletOptionsWidget;
}

class SettingsWalletOptionsWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsWalletOptionsWidget(DogeCashGUI* _window, QWidget *parent = nullptr);
    ~SettingsWalletOptionsWidget();

    void setMapper(QDataWidgetMapper *mapper);

    void discardWalletOnlyOptions();
    bool saveWalletOnlyOptions();

    void saveMapPortOptions();

Q_SIGNALS:
    void saveSettings();
    void discardSettings();

public Q_SLOTS:
    void onResetClicked();

private:
    Ui::SettingsWalletOptionsWidget *ui;

    void loadWalletModel() override;
    void loadClientModel() override;
    void reloadWalletOptions();

    void setSpinBoxStakeSplitThreshold(double val);
    double getSpinBoxStakeSplitThreshold() const;

    // Enable or disable the network activity
    void setNetworkActivity(bool active);
};

#endif // SETTINGSWALLETOPTIONSWIDGET_H
