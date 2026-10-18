#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundTextureShiftPacketPayload {
public:
    // ClientboundTextureShiftPacketPayload inner types define
    enum class Action : uchar {
        Invalid    = 0,
        Initialize = 1,
        Start      = 2,
        SetEnabled = 3,
        Sync       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClientboundTextureShiftPacketPayload::Action> mAction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                   mCollectionName;
    ::ll::TypedStorage<8, 24, std::string>                                   mFromStep;
    ::ll::TypedStorage<8, 24, std::string>                                   mToStep;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                      mAllSteps;
    ::ll::TypedStorage<8, 8, ulong>                                          mTotalLengthInTicks;
    ::ll::TypedStorage<8, 8, ulong>                                          mCurrentLengthInTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCollectionName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mFromStep;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mToStep;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                  mAllSteps;
    ::ll::TypedStorage<8, 8, uint64>                                         mTotalLengthInTicks;
    ::ll::TypedStorage<8, 8, uint64>                                         mCurrentLengthInTicks;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                           mEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClientboundTextureShiftPacketPayload(::ClientboundTextureShiftPacketPayload const&);

    MCNAPI ~ClientboundTextureShiftPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientboundTextureShiftPacketPayload const&);
#else // @header-generator platform
    MCAPI ~ClientboundTextureShiftPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
