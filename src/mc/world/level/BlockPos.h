#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkBlockPos;
class ChunkPos;
class SubChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos {
#else // @header-generator platform
class AABB;
class BoundingBox;

class BlockPos : public ll::math::intN3<BlockPos> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND
#else // @header-generator platform
    using intN3::intN3;

    LLNDAPI operator AABB() const;
    LLNDAPI operator BoundingBox() const;

    LLNDAPI Vec3 bottomCenter() const;
    LLNDAPI Vec3 center() const;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockPos(::SubChunkPos const&);
#else // @header-generator platform
    MCAPI ::BlockPos east() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockPos(::ChunkPos const&, ::ChunkBlockPos const&, short);
#else // @header-generator platform
    MCAPI ::BlockPos north() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos east() const;
#else // @header-generator platform
    MCAPI ::BlockPos south() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos neighbor(uchar) const;
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos north() const;
#else // @header-generator platform
    MCAPI ::BlockPos transform(::Rotation rotation, ::Mirror mirror, ::Vec3 const& pivot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float randomFloat() const;

    MCNAPI int randomSeed() const;

    MCNAPI long randomSeed64() const;

    MCNAPI ::BlockPos relative(uchar, int) const;

    MCNAPI ::BlockPos south() const;

    MCNAPI std::string toCommandString() const;

    MCNAPI std::string toString() const;

    MCNAPI ::BlockPos transform(::Rotation, ::Mirror, ::Vec3 const&) const;

    MCNAPI ::BlockPos west() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ::BlockPos west() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& MAX();
#else // @header-generator platform
    MCAPI static ::BlockPos const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& MIN();
#else // @header-generator platform
    MCAPI static ::BlockPos const& MIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& ONE();

    MCNAPI static ::BlockPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubChunkPos const&);

    MCNAPI void* $ctor(::ChunkPos const&, ::ChunkBlockPos const&, short);
#else // @header-generator platform
    MCAPI static ::BlockPos const& ZERO();
#endif // @header-generator platform
    // NOLINTEND
};
