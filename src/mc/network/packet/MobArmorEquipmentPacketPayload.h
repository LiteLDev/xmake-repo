#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct MobArmorEquipmentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mHead;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mTorso;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mLegs;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mFeet;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mBody;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mHead;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mTorso;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mLegs;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mFeet;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mBody;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MobArmorEquipmentPacketPayload& operator=(MobArmorEquipmentPacketPayload const&);
    MobArmorEquipmentPacketPayload(MobArmorEquipmentPacketPayload const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobArmorEquipmentPacketPayload();
#else // @header-generator platform
    MCAPI MobArmorEquipmentPacketPayload();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MobArmorEquipmentPacketPayload(::Actor const&);
#else // @header-generator platform
    MCAPI MobArmorEquipmentPacketPayload(::MobArmorEquipmentPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobArmorEquipmentPacketPayload(::MobArmorEquipmentPacketPayload&&);
#else // @header-generator platform
    MCAPI explicit MobArmorEquipmentPacketPayload(::Actor const& e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobArmorEquipmentPacketPayload(::MobArmorEquipmentPacketPayload const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void fillIn(::Actor& e) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillIn(::Actor&) const;

    MCNAPI ::MobArmorEquipmentPacketPayload& operator=(::MobArmorEquipmentPacketPayload&&);

    MCNAPI ::MobArmorEquipmentPacketPayload& operator=(::MobArmorEquipmentPacketPayload const&);

    MCNAPI ~MobArmorEquipmentPacketPayload();
#else // @header-generator platform
    MCAPI ~MobArmorEquipmentPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MobArmorEquipmentPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MobArmorEquipmentPacketPayload&&);

    MCNAPI void* $ctor(::MobArmorEquipmentPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& e);
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
