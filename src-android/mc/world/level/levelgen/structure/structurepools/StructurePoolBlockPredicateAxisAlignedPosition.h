#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAxisAlignedPosition : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mMinChance;
    ::ll::TypedStorage<4, 4, float const> mMaxChance;
    ::ll::TypedStorage<4, 4, int const>   mMinDist;
    ::ll::TypedStorage<4, 4, int const>   mMaxDist;
    ::ll::TypedStorage<1, 1, uchar const> mAxis;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition();

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;

    virtual bool test(::Block const&, ::IRandom&) const;

    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockPredicateAxisAlignedPosition(float const, float const, int const, int const, uchar const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float const, float const, int const, int const, uchar const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;

    MCNAPI bool $test(::Block const&, ::IRandom&) const;

    MCNAPI ::StructurePoolBlockPredicateType $getType() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
