#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
// clang-format on

namespace OreUI {

class ActiveLevelHardcoreModeQuery : public ::OreUI::QueryBase<OreUI::ActiveLevelHardcoreModeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mMinecraft;
    ::ll::TypedStorage<8, 8, ::Level const*>                   mCurrentLevel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mIsHardcoreSubscription;
    ::ll::UntypedStorage<8, 152>                               mIsHardcoreMode;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
