#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class StaticFeatureFlagQuery : public ::OreUI::QueryBase<OreUI::StaticFeatureFlagQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                        mEnabled;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticFeatureFlagQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticFeatureFlagQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StaticFeatureFlagQuery(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&, std::string const&);
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
