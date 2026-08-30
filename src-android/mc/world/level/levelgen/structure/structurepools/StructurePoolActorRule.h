#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IStructurePoolActorPredicate;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolActorRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IStructurePoolActorPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 24, std::string const>                                  mResultActor;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolActorRule();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolActorRule(std::unique_ptr<IStructurePoolActorPredicate>&&, std::string);

    MCNAPI void appendMetadataKey(::Util::XXHash&) const;

    MCNAPI bool processRule(std::string const&, std::string&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IStructurePoolActorPredicate>&&, std::string);
    // NOLINTEND
};
