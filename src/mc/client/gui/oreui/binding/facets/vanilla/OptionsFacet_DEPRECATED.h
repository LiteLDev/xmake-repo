#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class OptionsFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<OreUI::OptionsFacet_DEPRECATED> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>>            mOptions;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionsFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionsFacet_DEPRECATED();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OptionsFacet_DEPRECATED(std::shared_ptr<OptionRegistry>);

    MCNAPI void _registerOptionObserver(::OptionID);

    MCNAPI int getDefaultRenderDistance() const;

    MCNAPI int getInteractionModel() const;

    MCNAPI int getMaxRenderDistance() const;

    MCNAPI bool getPlayOnceWithMobileData() const;

    MCNAPI bool getPlayVideoInTouchControlSelectionScreen() const;

    MCNAPI int getRenderDistance() const;

    MCNAPI bool getShowRenderDistanceWarningModal() const;

    MCNAPI bool getShowTouchControlSelectionScreen() const;

    MCNAPI void setInteractionModel(int);

    MCNAPI void setPlayOnceWithMobileData(bool);

    MCNAPI void setRenderDistance(int);

    MCNAPI void setShowRenderDistanceWarningModal(bool);

    MCNAPI void setShowTouchControlSelectionScreen(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[16]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<OptionRegistry>);
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
class OptionsFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OptionsFacet_DEPRECATED> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>            mOptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionsFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionsFacet_DEPRECATED() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OptionsFacet_DEPRECATED(::std::shared_ptr<::OptionRegistry> options);

    MCAPI void _registerOptionObserver(::OptionID optionId);

    MCAPI int getDefaultRenderDistance() const;

    MCAPI int getInteractionModel() const;

    MCAPI int getMaxRenderDistance() const;

    MCAPI bool getPlayOnceWithMobileData() const;

    MCFOLD bool getPlayVideoInTouchControlSelectionScreen() const;

    MCAPI int getRenderDistance() const;

    MCAPI bool getShowRenderDistanceWarningModal() const;

    MCFOLD bool getShowTouchControlSelectionScreen() const;

    MCAPI void setInteractionModel(int newValue);

    MCAPI void setPlayOnceWithMobileData(bool newValue);

    MCAPI void setRenderDistance(int newValue);

    MCAPI void setShowRenderDistanceWarningModal(bool newValue);

    MCAPI void setShowTouchControlSelectionScreen(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::OptionRegistry> options);
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
class OptionsFacet_DEPRECATED {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
