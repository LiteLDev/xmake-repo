#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/options/oreui/PlayScreenWorldLayoutMode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/options/oreui/PlayScreenWorldLayoutMode.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenSpecificOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ScreenSpecificOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                          mOptions;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSpecificOptionsFacet& operator=(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenSpecificOptionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenSpecificOptionsFacet(::IOptionRegistry&);

    MCNAPI bool getDevOreUIGameplayUI() const;

    MCNAPI bool getDevPlayScreenHideLanWorlds() const;

    MCNAPI ::OreUI::PlayScreenWorldLayoutMode getPlayScreenWorldLayoutMode() const;

    MCNAPI void setDevOreUIGameplayUI(bool);

    MCNAPI void setDevPlayScreenHideLanWorlds(bool);

    MCNAPI void setPlayScreenWorldLayoutMode(::OreUI::PlayScreenWorldLayoutMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenSpecificOptionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenSpecificOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                              mOptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSpecificOptionsFacet& operator=(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet(ScreenSpecificOptionsFacet const&);
    ScreenSpecificOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenSpecificOptionsFacet(::IOptionRegistry& options);

    MCAPI bool getDevOreUIGameplayUI() const;

    MCAPI bool getDevPlayScreenHideLanWorlds() const;

    MCAPI ::OreUI::PlayScreenWorldLayoutMode getPlayScreenWorldLayoutMode() const;

    MCAPI void setDevOreUIGameplayUI(bool value);

    MCAPI void setDevPlayScreenHideLanWorlds(bool value);

    MCAPI void setPlayScreenWorldLayoutMode(::OreUI::PlayScreenWorldLayoutMode layoutMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IOptionRegistry& options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenSpecificOptionsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
