#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class AttributeInstanceHandle;
class BaseAttributeMap;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AttributeData;
#endif // @header-generator platform
// clang-format on

struct UpdateAttributesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>            mRuntimeId;
    ::ll::TypedStorage<8, 24, std::vector<AttributeData>> mAttributeData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>           mTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeData>> mAttributeData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>               mTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UpdateAttributesPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UpdateAttributesPacketPayload(::Actor const&, std::vector<AttributeInstanceHandle> const&);

    MCNAPI UpdateAttributesPacketPayload(
        ::ActorRuntimeID const&,
        ::BaseAttributeMap const&,
        std::vector<AttributeInstanceHandle> const&,
        ::PlayerInputTick
#else // @header-generator platform
    MCAPI UpdateAttributesPacketPayload(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI ~UpdateAttributesPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&, std::vector<AttributeInstanceHandle> const&);

    MCNAPI void* $ctor(
        ::ActorRuntimeID const&,
        ::BaseAttributeMap const&,
        std::vector<AttributeInstanceHandle> const&,
        ::PlayerInputTick
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
