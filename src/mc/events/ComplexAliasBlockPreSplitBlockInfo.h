#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper {

struct ComplexAliasBlockPreSplitBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> preSplitBlockRawName;
    ::ll::TypedStorage<4, 4, int>          preSplitBlockId;
    ::ll::TypedStorage<4, 4, int>          preSplitBlockItemId;
    ::ll::TypedStorage<4, 4, int>          aux;
    ::ll::TypedStorage<4, 4, int>          variantData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd38e4c;
    ::ll::UntypedStorage<4, 4>  mUnk96e050;
    ::ll::UntypedStorage<4, 4>  mUnk39d1cf;
    ::ll::UntypedStorage<4, 4>  mUnk11c1a4;
    ::ll::UntypedStorage<4, 4>  mUnk69e9ec;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexAliasBlockPreSplitBlockInfo& operator=(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo();
};

} // namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper
