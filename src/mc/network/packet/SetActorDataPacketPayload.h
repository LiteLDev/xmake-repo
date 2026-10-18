#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class PropertyComponent;
class SynchedActorDataEntityWrapper;
// clang-format on

struct SetActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                        mId;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mPackedItems;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                     mSynchedProperties;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                       mTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mPackedItems;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                             mTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SetActorDataPacketPayload& operator=(SetActorDataPacketPayload const&);
    SetActorDataPacketPayload(SetActorDataPacketPayload const&);
    SetActorDataPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    SetActorDataPacketPayload(::ActorRuntimeID, ::SynchedActorDataEntityWrapper&, ::PropertyComponent*, ulong, bool);
#else // @header-generator platform
    MCAPI SetActorDataPacketPayload(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong const getCurrentTick() const;
#else // @header-generator platform
    MCAPI ::SetActorDataPacketPayload& operator=(::SetActorDataPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertySyncData const& getSynchedProperties() const;

    MCNAPI std::vector<std::unique_ptr<DataItem>> const& getUnpackedData() const;

    MCNAPI ::SetActorDataPacketPayload& operator=(::SetActorDataPacketPayload&&);

    MCNAPI ~SetActorDataPacketPayload();
#else // @header-generator platform
    MCAPI ~SetActorDataPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorRuntimeID, ::SynchedActorDataEntityWrapper&, ::PropertyComponent*, ulong, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
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
