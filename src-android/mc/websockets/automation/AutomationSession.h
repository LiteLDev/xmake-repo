#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/ChatSubscription.h"
#include "mc/codebuilder/IRequestHandler.h"
#include "mc/codebuilder/RequestInterpreter.h"
#include "mc/deps/code_builder/platform/WebviewObserver.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/websockets/RakWebSocketClient.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Automation { class AutomationObserver; }
namespace Core { class SingleThreadedLock; }
namespace Crypto::Symmetric { class Symmetric; }
// clang-format on

namespace Automation {

class AutomationSession : public ::WebviewObserver,
                          public ::std::enable_shared_from_this<Automation::AutomationSession>,
                          public ::CodeBuilder::IRequestHandler {
public:
    // AutomationSession inner types define
    using ChatHandler = std::function<void(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1104>                                                             mClient;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                                          mSubscribedEvents;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CodeBuilder::ChatSubscription>> mSubscribedChat;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                mPendingCommands;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                mPendingAgentActions;
    ::ll::UntypedStorage<8, 32>                                                               mEventSubject;
    ::ll::TypedStorage<8, 24, std::string>                                                    mLastServerUri;
    ::ll::TypedStorage<1, 1, bool>                                                            mWasLastConnectionLost;
    ::ll::TypedStorage<4, 4, int>                                                             mReconnAttempts;
    ::ll::TypedStorage<4, 4, float>                                                           mElapsed;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                               mIsConnecting;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::Symmetric>>                   mEncryption;
    ::ll::UntypedStorage<8, 32>                                                               mEncryptionRequestId;
    ::ll::UntypedStorage<8, 48>                                                               mLocalConnectionHandler;
    ::ll::TypedStorage<8, 8, ::Automation::AutomationClient*>                                 mOwner;
    ::ll::TypedStorage<8, 24, ::CodeBuilder::RequestInterpreter>                              mRequestInterpreter;
    // NOLINTEND
};

} // namespace Automation
