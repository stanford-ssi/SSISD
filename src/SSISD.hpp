#pragma once

#include "FatFs/source/ff.h"

#include "hal/include/hal_mci_sync.h"

class SSISD
{
private:
    struct mci_sync_desc MCI_0;
public:
    void init();
};



