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

class StructurePoolBlockPredicateAlwaysTrueExcept : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::set<const Block*>> mCannotReplace;
    ::ll::TypedStorage<4, 4, float const>             mProbability;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrueExcept();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept();

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;

    virtual bool test(::Block const&, ::IRandom&) const;

    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockPredicateAlwaysTrueExcept(std::set<const Block*> const&, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::set<const Block*> const&, float const);
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
