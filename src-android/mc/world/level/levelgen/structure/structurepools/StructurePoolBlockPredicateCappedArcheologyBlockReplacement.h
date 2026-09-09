#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BrushableBlockActor.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateCappedRandomBlockReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class IRandom;
// clang-format on

class StructurePoolBlockPredicateCappedArcheologyBlockReplacement
: public ::StructurePoolBlockPredicateCappedRandomBlockReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mLootTable;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolBlockPredicateCappedArcheologyBlockReplacement();

    virtual bool finalize(::BlockSource&, ::IRandom&);

    virtual std::string validate() const;

    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual bool operator==(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&) const;

    virtual bool operator!=(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(
        std::map<HashedString, HashedString> const&,
        uint const,
        ::BrushableBlockActor::Placement
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::map<HashedString, HashedString> const&, uint const, ::BrushableBlockActor::Placement);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $finalize(::BlockSource&, ::IRandom&);

    MCNAPI std::string $validate() const;

    MCNAPI ::StructurePoolBlockPredicateType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
