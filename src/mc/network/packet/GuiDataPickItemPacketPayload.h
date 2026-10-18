#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuiDataPickItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mItemName;
    ::ll::TypedStorage<8, 32, ::std::string> mItemEffectName;
    ::ll::TypedStorage<4, 4, int>            mSlot;
#endif // @header-generator platform
    // NOLINTEND
};
