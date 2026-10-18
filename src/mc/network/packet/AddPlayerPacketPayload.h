#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/platform/UUID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorLink.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/SerializedAbilitiesData.h"
#include "mc/world/actor/SynchedActorData.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPalette;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorLink;
#endif // @header-generator platform
// clang-format on

struct AddPlayerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                  mUuid;
    ::ll::TypedStorage<8, 24, std::string>                  mName;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
    ::ll::TypedStorage<8, 24, std::string>                  mPlatformOnlineId;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                        mRot;
    ::ll::TypedStorage<4, 4, float>                         mYHeadRot;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mCarriedItem;
    ::ll::TypedStorage<4, 4, ::GameType>                    mPlayerGameType;
    ::ll::UntypedStorage<8, 24>                             mUnpack;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>           mSynchedProperties;
    ::ll::TypedStorage<8, 40, ::SerializedAbilitiesData>    mAbilitiesData;
    ::ll::TypedStorage<8, 24, std::vector<ActorLink>>       mLinks;
    ::ll::TypedStorage<8, 24, std::string>                  mDeviceId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>               mBuildPlatform;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                          mUuid;
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                      mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mPlatformOnlineId;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mRot;
    ::ll::TypedStorage<4, 4, float>                                 mYHeadRot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>         mCarriedItem;
    ::ll::TypedStorage<4, 4, ::GameType>                            mPlayerGameType;
    ::ll::TypedStorage<8, 24, ::SynchedActorData::CopyableDataList> mUnpack;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                   mSynchedProperties;
    ::ll::TypedStorage<8, 40, ::SerializedAbilitiesData>            mAbilitiesData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>           mLinks;
    ::ll::TypedStorage<8, 32, ::std::string>                        mDeviceId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                       mBuildPlatform;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AddPlayerPacketPayload& operator=(AddPlayerPacketPayload const&);
    AddPlayerPacketPayload(AddPlayerPacketPayload const&);
    AddPlayerPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AddPlayerPacketPayload(::Player&);
#else // @header-generator platform
    MCAPI AddPlayerPacketPayload(::AddPlayerPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AddPlayerPacketPayload(::AddPlayerPacketPayload const&);
#else // @header-generator platform
    MCAPI explicit AddPlayerPacketPayload(::Player& p);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack getCarriedItem(::BlockPalette&, bool) const;

    MCNAPI ::PropertySyncData const& getSynchedProperties() const;

    MCNAPI ::AddPlayerPacketPayload& operator=(::AddPlayerPacketPayload&&);

    MCNAPI ::AddPlayerPacketPayload& operator=(::AddPlayerPacketPayload const&);

    MCNAPI ~AddPlayerPacketPayload();
#else // @header-generator platform
    MCAPI ~AddPlayerPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player&);
#else // @header-generator platform
    MCAPI void* $ctor(::AddPlayerPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AddPlayerPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Player& p);
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
