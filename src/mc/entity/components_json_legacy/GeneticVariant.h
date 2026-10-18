#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct GeneticVariant {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>                mainAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                hiddenAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                eitherAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                bothAllele;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> onBorn;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneticVariant& operator=(GeneticVariant const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GeneticVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>                 mainAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 hiddenAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 eitherAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 bothAllele;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> onBorn;
#endif // @header-generator platform
    // NOLINTEND
};
