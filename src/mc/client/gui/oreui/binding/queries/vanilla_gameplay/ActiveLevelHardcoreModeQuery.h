#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ActiveLevelHardcoreModeQuery : public ::OreUI::QueryBase<::OreUI::ActiveLevelHardcoreModeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Minecraft const>> mMinecraft;
    ::ll::TypedStorage<8, 8, ::Level const*>                                    mCurrentLevel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mLevelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mIsHardcoreSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>>        mIsHardcoreMode;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveLevelHardcoreModeQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActiveLevelHardcoreModeQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class ActiveLevelHardcoreModeQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
