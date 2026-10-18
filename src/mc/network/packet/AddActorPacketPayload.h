#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/SyncedAttribute.h"
#include "mc/world/actor/ActorLink.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/SynchedActorData.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class DataItem;
struct ActorDefinitionIdentifier;
#else // @header-generator platform
struct ActorLink;
struct SyncedAttribute;
#endif // @header-generator platform
// clang-format on

struct AddActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
    ::ll::TypedStorage<8, 24, std::string>                  mActorType;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                        mRot;
    ::ll::TypedStorage<4, 4, float>                         mYHeadRotation;
    ::ll::TypedStorage<4, 4, float>                         mYBodyRotation;
    ::ll::TypedStorage<8, 24, std::vector<SyncedAttribute>> mAttributes;
    ::ll::UntypedStorage<8, 24>                             mData;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>           mSynchedProperties;
    ::ll::TypedStorage<8, 24, std::vector<ActorLink>>       mLinks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                      mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mActorType;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mRot;
    ::ll::TypedStorage<4, 4, float>                                 mYHeadRotation;
    ::ll::TypedStorage<4, 4, float>                                 mYBodyRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::SyncedAttribute>>     mAttributes;
    ::ll::TypedStorage<8, 24, ::SynchedActorData::CopyableDataList> mData;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                   mSynchedProperties;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>           mLinks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AddActorPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AddActorPacketPayload(::Actor&);
#else // @header-generator platform
    MCAPI explicit AddActorPacketPayload(::Actor& e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AddActorPacketPayload(::AddActorPacketPayload const&);

    MCNAPI std::vector<SyncedAttribute> const& getAttributes() const;

    MCNAPI std::vector<std::unique_ptr<DataItem>> const& getData() const;

    MCNAPI ::ActorUniqueID const getEntityId() const;

    MCNAPI ::Vec3 const& getPosition() const;

    MCNAPI ::Vec2 const& getRot() const;

    MCNAPI ::ActorRuntimeID getRuntimeId() const;

    MCNAPI ::PropertySyncData const& getSynchedProperties() const;

    MCNAPI ::ActorDefinitionIdentifier getType() const;

    MCNAPI ::Vec3 const& getVelocity() const;

    MCNAPI float getYBodyRotation() const;

    MCNAPI float getYHeadRotation() const;

    MCNAPI ::AddActorPacketPayload& operator=(::AddActorPacketPayload&&);

    MCNAPI ::AddActorPacketPayload& operator=(::AddActorPacketPayload const&);

    MCNAPI ~AddActorPacketPayload();
#else // @header-generator platform
    MCAPI ~AddActorPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor&);

    MCNAPI void* $ctor(::AddActorPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor& e);
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
