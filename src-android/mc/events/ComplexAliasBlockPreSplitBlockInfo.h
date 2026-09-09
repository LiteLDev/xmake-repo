#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper {

struct ComplexAliasBlockPreSplitBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> preSplitBlockRawName;
    ::ll::TypedStorage<4, 4, int>          preSplitBlockId;
    ::ll::TypedStorage<4, 4, int>          preSplitBlockItemId;
    ::ll::TypedStorage<4, 4, int>          aux;
    ::ll::TypedStorage<4, 4, int>          variantData;
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexAliasBlockPreSplitBlockInfo& operator=(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo();
};

} // namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper
