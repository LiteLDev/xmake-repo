#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class FlightingConfigQueryNumber : public ::OreUI::QueryBase<OreUI::FlightingConfigQueryNumber> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mToken;
    ::ll::UntypedStorage<8, 152>                               mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingConfigQueryNumber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlightingConfigQueryNumber();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlightingConfigQueryNumber(::OreUI::GameDependencies const&, std::string const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FlightingConfigQueryNumber : public ::OreUI::QueryBase<::OreUI::FlightingConfigQueryNumber> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>       mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingConfigQueryNumber();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlightingConfigQueryNumber(::OreUI::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& tag);
    // NOLINTEND
};
#else // @header-generator platform
class FlightingConfigQueryNumber {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
