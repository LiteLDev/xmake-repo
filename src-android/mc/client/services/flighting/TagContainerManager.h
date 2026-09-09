#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/flighting/TagType.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Bedrock::PubSub { class Subscription; }
namespace SDL { struct SessionAuth; }
// clang-format on

namespace flighting {

class TagContainerManager {
public:
    // TagContainerManager inner types define
    enum class FetchState : int {
        NotStarted = 0,
        Fetching   = 1,
        Complete   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::flighting::TagType>                                               mTagType;
    ::ll::TypedStorage<8, 24, std::string>                                                       mTreatmentContext;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                          mCurrentTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                          mOverrideTags;
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mQueuedCallbacksMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void(const std::vector<std::string>&)>>> mQueuedCallbacks;
    ::ll::UntypedStorage<8, 88>                                                                  mMonitorPublisher;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsUsingOverrideTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TagContainerManager();

    MCNAPI explicit TagContainerManager(::flighting::TagType);

    MCNAPI TagContainerManager(::flighting::TagContainerManager const&);

    MCNAPI void _fillCurrentTagsByTagType(::SDL::SessionAuth const&);

    MCNAPI void addQueryCallback(std::function<void(const std::vector<std::string>&)>);

    MCNAPI ::Bedrock::PubSub::Subscription addTagMonitor(std::function<void(const std::vector<std::string>&)>);

    MCNAPI std::vector<std::string> const& getActiveTags() const;

    MCNAPI void initFromSessionAuth(::SDL::SessionAuth const&, ::IMinecraftEventing&);

    MCNAPI bool isTagType(::flighting::TagType) const;

    MCNAPI void signalQueryCallbacks();

    MCNAPI ~TagContainerManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::atomic<flighting::TagContainerManager::FetchState>& getFetchState();

    MCNAPI static ::flighting::TagContainerManager& getInvalidTagContainerManager();

    MCNAPI static void updateFetchState(::flighting::TagContainerManager::FetchState);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::atomic<flighting::TagContainerManager::FetchState>& mFetchState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::flighting::TagType);

    MCNAPI void* $ctor(::flighting::TagContainerManager const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace flighting
