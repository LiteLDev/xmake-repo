#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/WorldBackupList.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

class RealmsSavesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                          mBackupListChangedPublisher;
    ::ll::UntypedStorage<8, 88>                          mActiveWorldSizeChangedPublisher;
    ::ll::TypedStorage<8, 64, ::Realms::WorldBackupList> mBackupList;
    ::ll::TypedStorage<8, 8, long>                       mActiveWorldSizeBytes;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>  mRealmsAPI;
    ::ll::TypedStorage<8, 8, ulong>                      mBackupListFetchId;
    ::ll::TypedStorage<8, 8, ulong>                      mActiveWorldSizeFetchId;
    ::ll::TypedStorage<8, 240, ::TaskGroup>              mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSavesManager(std::weak_ptr<RealmsAPI> const&);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
    deleteBackup(::Realms::RealmId const&, int, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> fetchActiveWorldSize(::Realms::RealmId const&, int);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> fetchBackupList(::Realms::RealmId const&, int);

    MCNAPI long getActiveWorldSizeBytes() const;

    MCNAPI ::Realms::WorldBackupList const& getBackupList() const;

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
    renameBackup(::Realms::RealmId const&, int, std::string const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
    restoreBackup(::Realms::RealmId const&, int, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> saveAutoBackup(
        ::Realms::RealmId const&,
        int,
        std::string const&,
        std::string const&,
        std::vector<std::string> const&
    );

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
    saveBackup(::Realms::RealmId const&, int, std::string const&, std::vector<std::string> const&);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToActiveWorldSizeChangedPublisher(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBackupListChangedPublisher(std::function<void()>);

    MCNAPI ~RealmsSavesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
