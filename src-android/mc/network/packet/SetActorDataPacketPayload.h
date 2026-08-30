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
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                        mId;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mPackedItems;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                     mSynchedProperties;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                       mTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SetActorDataPacketPayload(::ActorRuntimeID, ::SynchedActorDataEntityWrapper&, ::PropertyComponent*, ulong, bool);

    MCNAPI ulong const getCurrentTick() const;

    MCNAPI ::PropertySyncData const& getSynchedProperties() const;

    MCNAPI std::vector<std::unique_ptr<DataItem>> const& getUnpackedData() const;

    MCNAPI ::SetActorDataPacketPayload& operator=(::SetActorDataPacketPayload&&);

    MCNAPI ~SetActorDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorRuntimeID, ::SynchedActorDataEntityWrapper&, ::PropertyComponent*, ulong, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
