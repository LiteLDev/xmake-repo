#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class CommandOrigin;
class CompoundTag;
// clang-format on

class CommandPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
    ::ll::TypedStorage<1, 1, bool>    mRelativeX;
    ::ll::TypedStorage<1, 1, bool>    mRelativeY;
    ::ll::TypedStorage<1, 1, bool>    mRelativeZ;
    ::ll::TypedStorage<1, 1, bool>    mLocal;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandPosition();

    MCNAPI explicit CommandPosition(::Vec3 const&);

    MCNAPI ::BlockPos getBlockPos(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI ::BlockPos getBlockPos(int, ::CommandOrigin const&, ::Vec3 const&) const;

    MCNAPI ::Vec3 getPosition(int, ::CommandOrigin const&, ::Vec3 const&) const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI bool operator==(::CommandPosition const&) const;
    // NOLINTEND
#else // @header-generator platform
    BlockPos getBlockPos(int version, CommandOrigin const& origin, Vec3 const& offset) const {
        BlockPos result;
        auto     pos = getPosition(version, origin, offset);
        result.x     = pos.x + 0.001f;
        result.y     = pos.y + 0.001f;
        result.z     = pos.z + 0.001f;
        return result;
    }
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ::Vec3 getPosition(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&);
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandPosition>();
// clang-format on
#endif // @header-generator platform
