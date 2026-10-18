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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorDimensionTransferProxy();
#else // @header-generator platform
    virtual ~ActorDimensionTransferProxy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferTickingArea(::Actor&, ::Dimension&) const;
#else // @header-generator platform
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeActorFromLevelChunk(::Actor&) const;
#else // @header-generator platform
    virtual void removeActorFromLevelChunk(::Actor& actor) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void transferActorToDimension(
        ::Actor const&                   actor,
        ::Dimension&                     dimension,
        ::Vec3 const&                    targetPosition,
        ::std::unique_ptr<::CompoundTag> saveTag
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $transferTickingArea(::Actor&, ::Dimension&) const;
#else // @header-generator platform
    MCFOLD void $transferTickingArea(::Actor& actor, ::Dimension& dimension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeActorFromLevelChunk(::Actor&) const;
#else // @header-generator platform
    MCAPI void $removeActorFromLevelChunk(::Actor& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $transferActorToDimension(::Actor const&, ::Dimension&, ::Vec3 const&, std::unique_ptr<CompoundTag>) const;
#else // @header-generator platform
    MCAPI void $transferActorToDimension(
        ::Actor const&                   actor,
        ::Dimension&                     dimension,
        ::Vec3 const&                    targetPosition,
        ::std::unique_ptr<::CompoundTag> saveTag
    ) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
