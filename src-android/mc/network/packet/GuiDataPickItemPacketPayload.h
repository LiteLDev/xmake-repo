#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuiDataPickItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mItemName;
    ::ll::TypedStorage<8, 24, std::string> mItemEffectName;
    ::ll::TypedStorage<4, 4, int>          mSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GuiDataPickItemPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
