#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockTagPredicate.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockTagPredicateBlockTagStringMatches : public ::IStructurePoolBlockTagPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>     mBlock;
    ::ll::TypedStorage<8, 24, std::string const> mTagKey;
    ::ll::TypedStorage<8, 24, std::string const> mTagValue;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagStringMatches&
    operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();

    virtual bool test(::Block const&, ::CompoundTag const&) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockTagPredicateBlockTagStringMatches(::Block const&, std::string, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const&, std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const&, ::CompoundTag const&) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
