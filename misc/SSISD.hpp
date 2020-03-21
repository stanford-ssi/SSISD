#pragma once
#include "hal_mci_sync.h"
#include "sd_mmc.h"

class SSISD
{
private:
    struct mci_sync_desc MCI_0;
public:
    void init();
};



