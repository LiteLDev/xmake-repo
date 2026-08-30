#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/realms/domains/members/IRealmsMembers.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class IToastManager;
class RealmsAPI;
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

class RealmsMembersImpl : public ::Realms::IRealmsMembers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::TypedStorage<8, 8, ::IToastManager&>          mToastManager;
    ::ll::TypedStorage<8, 240, ::TaskGroup>             mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembersImpl& operator=(RealmsMembersImpl const&);
    RealmsMembersImpl(RealmsMembersImpl const&);
    RealmsMembersImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsMembersImpl();

    virtual ::Bedrock::Threading::Async<Realms::GenericStatus> addMembers(::Realms::RealmId, std::string const&, std::vector<std::string> const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
    $addMembers(::Realms::RealmId, std::string const&, std::vector<std::string> const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
