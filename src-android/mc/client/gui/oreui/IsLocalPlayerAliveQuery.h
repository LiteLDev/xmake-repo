#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

namespace OreUI {

class IsLocalPlayerAliveQuery : public ::OreUI::QueryBase<OreUI::IsLocalPlayerAliveQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mIsAlive;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>             mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    // NOLINTEND
};

} // namespace OreUI
