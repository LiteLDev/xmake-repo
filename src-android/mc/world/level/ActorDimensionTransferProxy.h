#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorDimensionTransferProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Dimension;
class Vec3;
// clang-format on

class ActorDimensionTransferProxy : public ::IActorDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDimensionTransferProxy();

    virtual void transferTickingArea(::Actor&, ::Dimension&) const;

    virtual void removeActorFromLevelChunk(::Actor&) const;

    virtual void transferActorToDimension(::Actor const&, ::Dimension&, ::Vec3 const&, std::unique_ptr<CompoundTag>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDimensionTransferProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $transferTickingArea(::Actor&, ::Dimension&) const;

    MCNAPI void $removeActorFromLevelChunk(::Actor&) const;

    MCNAPI void
    $transferActorToDimension(::Actor const&, ::Dimension&, ::Vec3 const&, std::unique_ptr<CompoundTag>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
