#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct AddVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mComponents;
    ::ll::TypedStorage<8, 24, std::string>   mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string>   mInstanceName;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMaxBounds;
    ::ll::UntypedStorage<4, 4>               mDimensionType;
    ::ll::UntypedStorage<8, 32>              mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>  mEntityNetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag>      mComponents;
    ::ll::TypedStorage<8, 32, ::std::string>      mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>      mInstanceName;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mMaxBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType>     mDimensionType;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>       mEntityNetId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AddVolumeEntityPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload const&);
#else // @header-generator platform
    MCAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AddVolumeEntityPacketPayload(::EntityContext const&, ::CompoundTag, ::MinEngineVersion const&);
#else // @header-generator platform
    MCAPI AddVolumeEntityPacketPayload(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AddVolumeEntityPacketPayload();
#else // @header-generator platform
    MCAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload&& other);

    MCAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload const& other);

    MCAPI ~AddVolumeEntityPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AddVolumeEntityPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::AddVolumeEntityPacketPayload const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EntityContext const&, ::CompoundTag, ::MinEngineVersion const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
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
