#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class CustomScalingFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::CustomScalingFacet> {
public:
    // CustomScalingFacet inner types define
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
};

} // namespace OreUI
