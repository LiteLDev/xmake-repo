#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
