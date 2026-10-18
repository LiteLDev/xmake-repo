#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IFeature.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IFeature.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class Feature : public ::OreUI::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*> mMainToggle;
    // NOLINTEND

public:
    // prevent constructor by default
    Feature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isEnabled() const;

    virtual void registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, std::function<void(bool)>);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Feature : public ::OreUI::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*> mMainToggle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isEnabled() const /*override*/;

    virtual void
    registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class Feature {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
