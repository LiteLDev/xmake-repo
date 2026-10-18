#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/progress/ProgressTipStage.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class ResourcePackManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Progress {

#if defined(LL_PLAT_A) // @header-generator platform
class ProgressTips {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>       mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>           mOptions;
    ::ll::UntypedStorage<8, 48>                            mIsMarketplaceDisabled;
    ::ll::TypedStorage<4, 4, int>                          mNumberOfBeginnerTips;
    ::ll::TypedStorage<4, 4, int>                          mCurrentProgressTipIndex;
    ::ll::TypedStorage<1, 1, ::Progress::ProgressTipStage> mStoredProgressTipsStage;
    ::ll::TypedStorage<1, 1, uchar>                        mStoredProgressTipsTypesMask;
    ::ll::TypedStorage<1, 1, bool>                         mIsFromLegacyDefinition;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mProgressTips;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mRealmTips;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mAddonTips;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mCreativeTips;
    ::ll::UntypedStorage<8, 32>                            mEditorTips;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressTips& operator=(ProgressTips const&);
    ProgressTips(ProgressTips const&);
    ProgressTips();
};
#else // @header-generator platform
class ProgressTips {};
#endif // @header-generator platform

} // namespace Progress
