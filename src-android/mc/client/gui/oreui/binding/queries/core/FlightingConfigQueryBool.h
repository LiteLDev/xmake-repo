#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class FlightingConfigQueryBool : public ::OreUI::QueryBase<OreUI::FlightingConfigQueryBool> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mToken;
    ::ll::UntypedStorage<8, 152>                               mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingConfigQueryBool();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlightingConfigQueryBool();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlightingConfigQueryBool(::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, std::string const&);
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
