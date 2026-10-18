#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Dimension;
class Vec3;
// clang-format on

class IActorDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IActorDimensionTransferProxy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferTickingArea(::Actor&, ::Dimension&) const = 0;
#else // @header-generator platform
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeActorFromLevelChunk(::Actor&) const = 0;
#else // @header-generator platform
    virtual void removeActorFromLevelChunk(::Actor& actor) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transferActorToDimension(::Actor const&, ::Dimension&, ::Vec3 const&, std::unique_ptr<CompoundTag>) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual void transferActorToDimension(
        ::Actor const&                   actor,
        ::Dimension&                     dimension,
        ::Vec3 const&                    targetPosition,
        ::std::unique_ptr<::CompoundTag> saveTag
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
