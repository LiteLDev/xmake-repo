#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct RandomBlockStateMatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mBlockState;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mBlockState;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                    mProbability;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBlockStateMatch(RandomBlockStateMatch const&);
    RandomBlockStateMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
