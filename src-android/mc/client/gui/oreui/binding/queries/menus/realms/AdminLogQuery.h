#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AdminLogData; }
namespace OreUI { class GameDependencies; }
namespace Realms { class AdminLogManager; }
// clang-format on

namespace OreUI {

class AdminLogQuery : public ::OreUI::QueryBase<OreUI::AdminLogQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::AdminLogManager>> mAdminLogManager;
    ::ll::UntypedStorage<8, 104>                                        mAdminLogDataList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mAdminLogsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AdminLogQuery(::OreUI::GameDependencies const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[35]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
