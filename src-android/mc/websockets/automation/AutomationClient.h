#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IClient.h"
#include "mc/deps/application/UriListener.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class IMinecraftApp;
namespace Automation { class AutomationSession; }
namespace CodeBuilder { class GameContext; }
// clang-format on

namespace Automation {

class AutomationClient : public ::CodeBuilder::IClient, public ::UriListener, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                                           mApp;
    ::ll::TypedStorage<8, 8, ulong>                                                      mQueueSize;
    ::ll::TypedStorage<8, 8, ulong>                                                      mMaxQueueSize;
    ::ll::TypedStorage<4, 4, int>                                                        mMaxRetries;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsWebsocketsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsEncryptionRequired;
    ::ll::TypedStorage<4, 4, float>                                                      mServerRetryTime;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsInGame;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<Automation::AutomationSession>>> mSessions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Automation::AutomationSession>>            mDefaultSession;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>>                    mRequestIdToSession;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>                                      mSessionMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CodeBuilder::GameContext>>                 mGameContext;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationClient& operator=(AutomationClient const&);
    AutomationClient(AutomationClient const&);
    AutomationClient();
};

} // namespace Automation
