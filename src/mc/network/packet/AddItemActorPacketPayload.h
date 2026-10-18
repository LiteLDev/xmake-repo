#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class ItemActor;
// clang-format on

struct AddItemActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mData;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                        mRuntimeId;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>           mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mVelocity;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFromFishing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;
    ::ll::TypedStorage<1, 1, bool>                                          mIsFromFishing;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AddItemActorPacketPayload& operator=(AddItemActorPacketPayload const&);
    AddItemActorPacketPayload(AddItemActorPacketPayload const&);
    AddItemActorPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AddItemActorPacketPayload(::ItemActor&);
#else // @header-generator platform
    MCAPI explicit AddItemActorPacketPayload(::ItemActor& itemEntity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AddItemActorPacketPayload& operator=(::AddItemActorPacketPayload&&);
#else // @header-generator platform
    MCAPI ::AddItemActorPacketPayload& operator=(::AddItemActorPacketPayload&&);

    MCAPI ~AddItemActorPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemActor&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemActor& itemEntity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
