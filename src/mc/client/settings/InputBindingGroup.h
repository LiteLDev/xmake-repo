#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings { class BannerComponent; }
namespace Settings { class BooleanComponent; }
namespace Settings { class GroupInfoComponent; }
namespace Settings { class OptionComponent; }
namespace Settings { class StringComponent; }
namespace Settings { class TextComponent; }
namespace Settings { template<typename T0> class NumberComponent; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/ActionComponent.h"
#include "mc/client/settings/BannerComponent.h"
#include "mc/client/settings/BooleanComponent.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/NumberComponent.h"
#include "mc/client/settings/OptionComponent.h"
#include "mc/client/settings/StringComponent.h"
#include "mc/client/settings/TextComponent.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings::InputControlsSettingsHelper {

#if defined(LL_PLAT_A) // @header-generator platform
struct InputBindingGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mGroup;
    ::ll::UntypedStorage<8, 8>  mRebindAction;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct InputBindingGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>>>>
        mGroup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>*>
        mRebindAction;
    // NOLINTEND
};
#else // @header-generator platform
struct InputBindingGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings::InputControlsSettingsHelper
