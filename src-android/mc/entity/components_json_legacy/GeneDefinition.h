#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/GeneticVariant.h"
#include "mc/util/IntRange.h"

struct GeneDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<4, 8, ::IntRange>                   mAlleleRange;
    ::ll::TypedStorage<8, 24, std::vector<GeneticVariant>> mGeneticVariants;
    ::ll::TypedStorage<1, 1, bool>                         mUseSimplifiedBreeding;
    ::ll::TypedStorage<4, 4, float>                        mMutationRateOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneDefinition(::GeneDefinition const&);

    MCNAPI void addGeneticVariant(::GeneticVariant const&);

    MCNAPI ~GeneDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeneDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
