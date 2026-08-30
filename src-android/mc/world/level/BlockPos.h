#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class ChunkBlockPos;
class ChunkPos;
class SubChunkPos;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPos(::SubChunkPos const&);

    MCNAPI BlockPos(::ChunkPos const&, ::ChunkBlockPos const&, short);

    MCNAPI ::BlockPos east() const;

    MCNAPI ::BlockPos neighbor(uchar) const;

    MCNAPI ::BlockPos north() const;

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& MAX();

    MCNAPI static ::BlockPos const& MIN();

    MCNAPI static ::BlockPos const& ONE();

    MCNAPI static ::BlockPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubChunkPos const&);

    MCNAPI void* $ctor(::ChunkPos const&, ::ChunkBlockPos const&, short);
    // NOLINTEND
};
