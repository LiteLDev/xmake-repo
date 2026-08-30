#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateCappedRandomBlockReplacement : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                  mMaximumAmount;
    ::ll::TypedStorage<8, 24, std::map<HashedString, HashedString> const> mBlockMappings;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                      mCandidatePositions;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mCandidatePositionsLock;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement();

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;

    virtual bool test(::Block const&, ::IRandom&) const;

    virtual bool finalize(::BlockSource&, ::IRandom&);

    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;

    virtual bool operator==(::StructurePoolBlockPredicateCappedRandomBlockReplacement const&) const;

    virtual bool operator!=(::StructurePoolBlockPredicateCappedRandomBlockReplacement const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StructurePoolBlockPredicateCappedRandomBlockReplacement(std::map<HashedString, HashedString> const&, uint const);

    MCNAPI bool _finalize(::BlockSource&, ::IRandom&, std::function<void(BlockPos&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::map<HashedString, HashedString> const&, uint const);
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

    MCNAPI bool $finalize(::BlockSource&, ::IRandom&);

    MCNAPI ::StructurePoolBlockPredicateType $getType() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
