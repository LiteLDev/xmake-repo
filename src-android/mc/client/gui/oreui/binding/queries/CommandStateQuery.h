#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IdType; }
namespace OreUI::Detail { class InvocationStateTracker; }
// clang-format on

namespace OreUI {

class CommandStateQuery : public ::OreUI::QueryBase<OreUI::CommandStateQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mState;
    ::ll::UntypedStorage<8, 152>                               mResult;
    ::ll::UntypedStorage<8, 152>                               mProgress;
    ::ll::UntypedStorage<8, 152>                               mError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mChangeToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRemoveToken;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandStateQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandStateQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandStateQuery(::OreUI::Detail::InvocationStateTracker&, ::OreUI::Detail::IdType const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::InvocationStateTracker&, ::OreUI::Detail::IdType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
