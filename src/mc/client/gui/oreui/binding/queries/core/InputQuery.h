#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class InputQuery : public ::OreUI::QueryBase<OreUI::InputQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mEnableTooltipsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mKeyboardTypeOptionSubscription;
    ::ll::UntypedStorage<8, 104>                                      mSwapABButtons;
    ::ll::UntypedStorage<8, 104>                                      mSwapXYButtons;
    ::ll::UntypedStorage<8, 152>                                      mCurrentInputType;
    ::ll::UntypedStorage<8, 152>                                      mEnableControllerHints;
    ::ll::UntypedStorage<8, 152>                                      mKeyboardType;
    ::ll::UntypedStorage<8, 152>                                      mInteractionModelLocked;
    // NOLINTEND

public:
    // prevent constructor by default
    InputQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputQuery();

    virtual void update(double const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InputQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InputQuery : public ::OreUI::QueryBase<::OreUI::InputQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mEnableTooltipsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mKeyboardTypeOptionSubscription;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>             mSwapABButtons;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>             mSwapXYButtons;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::InputMethod>>   mCurrentInputType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mEnableControllerHints;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::KeyboardType>>         mKeyboardType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mInteractionModelLocked;
    // NOLINTEND

public:
    // prevent constructor by default
    InputQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InputQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double const time);
    // NOLINTEND
};
#else // @header-generator platform
class InputQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
