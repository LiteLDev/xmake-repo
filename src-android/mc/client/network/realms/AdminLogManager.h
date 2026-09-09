#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/AdminLog.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsPlayerList; }
// clang-format on

namespace Realms {

class AdminLogManager : public ::std::enable_shared_from_this<Realms::AdminLogManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                                          mAdminLogsChangedPublisher;
    ::ll::TypedStorage<8, 24, std::vector<Realms::AdminLog>>             mAdminLogs;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                  mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerList>> mRealmsPlayerList;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AdminLogManager(std::weak_ptr<RealmsAPI> const&, std::shared_ptr<Realms::RealmsPlayerList> const&);

    MCNAPI void _setAdminLogs(std::vector<Realms::AdminLog>);

    MCNAPI void fetchAdminLogs(std::string const&, std::function<void(Realms::GenericStatus)> const&);

    MCNAPI std::vector<Realms::AdminLog> getAdminLogs();

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToAdminLogsChangedPublisher(std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI> const&, std::shared_ptr<Realms::RealmsPlayerList> const&);
    // NOLINTEND
};

} // namespace Realms
