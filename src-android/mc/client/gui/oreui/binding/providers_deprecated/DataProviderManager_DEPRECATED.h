#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IMinecraftGame;
class SuggestedContentOffersProvider;
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
// clang-format on

namespace OreUI {

class DataProviderManager_DEPRECATED {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SuggestedContentOffersProvider>>          mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    DataProviderManager_DEPRECATED();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataProviderManager_DEPRECATED(
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&
    );

    MCNAPI std::shared_ptr<SuggestedContentOffersProvider> getSuggestedContentOffersProvider();

    MCNAPI std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED> getWorldSettingsProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&);
    // NOLINTEND
};

} // namespace OreUI
