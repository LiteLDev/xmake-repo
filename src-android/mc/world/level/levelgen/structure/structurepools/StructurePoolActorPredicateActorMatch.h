#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolActorPredicate.h"

// auto generated forward declare list
// clang-format off
namespace Util { class XXHash; }
// clang-format on

class StructurePoolActorPredicateActorMatch : public ::IStructurePoolActorPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolActorPredicateActorMatch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructurePoolActorPredicateActorMatch();

    virtual bool test(std::string const&) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructurePoolActorPredicateActorMatch(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(std::string const&) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
