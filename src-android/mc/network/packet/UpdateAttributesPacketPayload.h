#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/attribute/AttributeData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AttributeInstanceHandle;
class BaseAttributeMap;
// clang-format on

struct UpdateAttributesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>            mRuntimeId;
    ::ll::TypedStorage<8, 24, std::vector<AttributeData>> mAttributeData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>           mTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateAttributesPacketPayload(::Actor const&, std::vector<AttributeInstanceHandle> const&);

    MCNAPI UpdateAttributesPacketPayload(
        ::ActorRuntimeID const&,
        ::BaseAttributeMap const&,
        std::vector<AttributeInstanceHandle> const&,
        ::PlayerInputTick
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, std::vector<AttributeInstanceHandle> const&);

    MCNAPI void* $ctor(
        ::ActorRuntimeID const&,
        ::BaseAttributeMap const&,
        std::vector<AttributeInstanceHandle> const&,
        ::PlayerInputTick
    );
    // NOLINTEND
};
