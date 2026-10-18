#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

struct UpdateTradePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mDisplayName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mSize;
    ::ll::TypedStorage<4, 4, int>                                  mTraderTier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mLastTradingPlayer;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag>                       mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag>                       mData;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>                                 mUsingEconomyTrade;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    UpdateTradePacketPayload& operator=(UpdateTradePacketPayload const&);
    UpdateTradePacketPayload();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UpdateTradePacketPayload(::UpdateTradePacketPayload const&);

    MCNAPI ~UpdateTradePacketPayload();
#else // @header-generator platform
    MCAPI UpdateTradePacketPayload(::UpdateTradePacketPayload const& other);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::UpdateTradePacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::UpdateTradePacketPayload const& other);
#endif // @header-generator platform
    // NOLINTEND
};
