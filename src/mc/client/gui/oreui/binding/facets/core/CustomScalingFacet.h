#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class CustomScalingFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::CustomScalingFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CustomScalingFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::CustomScalingFacet> {
#else // @header-generator platform
class CustomScalingFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CustomScalingFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ScalingMode : int {
        Compat  = 0,
        Legacy  = 1,
        Default = 2,
        Fixed   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>      mIsDirty;
    ::ll::UntypedStorage<8, 32>         mOptionSubscriptions;
    ::ll::UntypedStorage<8, 48>         mGetClientInstance;
    ::ll::TypedStorage<4, 4, int>       mFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMinFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMaxFixedGuiScaleModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomScalingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomScalingFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CustomScalingFacet(std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>);

    MCNAPI int getFixedGuiScaleModifier() const;

    MCNAPI bool getGuiAccessibilityScaling() const;

    MCNAPI int getMaxFixedGuiScaleModifier() const;

    MCNAPI int getMinFixedGuiScaleModifier() const;

    MCNAPI char const* getScalingModeOverride() const;

    MCNAPI void setFixedGuiScaleModifier(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[19]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>()>);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ScalingMode : int {
        Compat  = 0,
        Legacy  = 1,
        Default = 2,
        Fixed   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>                      mOptionSubscriptions;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<4, 4, int>       mFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMinFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMaxFixedGuiScaleModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomScalingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomScalingFacet(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );

    MCFOLD int getFixedGuiScaleModifier() const;

    MCAPI bool getGuiAccessibilityScaling() const;

    MCFOLD int getMaxFixedGuiScaleModifier() const;

    MCAPI int getMinFixedGuiScaleModifier() const;

    MCAPI char const* getScalingModeOverride() const;

    MCAPI void setFixedGuiScaleModifier(int fixedGuiScaleModifier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
#else // @header-generator platform
    enum class ScalingMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
