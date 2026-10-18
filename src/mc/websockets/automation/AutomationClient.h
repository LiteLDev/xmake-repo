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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
class ActivationUri;
#endif // @header-generator platform
// clang-format on

namespace Automation {

class AutomationClient : public ::CodeBuilder::IClient, public ::UriListener, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd8f49d;
    ::ll::UntypedStorage<8, 8>  mUnk133ab6;
    ::ll::UntypedStorage<8, 8>  mUnk9e65e2;
    ::ll::UntypedStorage<4, 4>  mUnkde21bd;
    ::ll::UntypedStorage<1, 1>  mUnkc2550d;
    ::ll::UntypedStorage<1, 1>  mUnkda283b;
    ::ll::UntypedStorage<4, 4>  mUnk94c7c4;
    ::ll::UntypedStorage<1, 1>  mUnk60f2b9;
    ::ll::UntypedStorage<8, 24> mUnka70ea8;
    ::ll::UntypedStorage<8, 16> mUnk731e86;
    ::ll::UntypedStorage<8, 64> mUnk95cff7;
    ::ll::UntypedStorage<8, 80> mUnk53c64c;
    ::ll::UntypedStorage<8, 16> mUnk3a88e5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationClient& operator=(AutomationClient const&);
    AutomationClient(AutomationClient const&);
    AutomationClient();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutomationClient() /*override*/ = default;

    virtual void onUri(::ActivationUri const& uri) /*override*/;

    virtual void send(::CodeBuilder::AgentMessage const& message) /*override*/;

    virtual void send(::CodeBuilder::CommandMessage const& message) /*override*/;

    virtual void send(::CodeBuilder::ErrorMessage const& message) /*override*/;

    virtual void send(::CodeBuilder::EventMessage const& message) /*override*/;

    virtual void send(::CodeBuilder::ChatMessage const& message) /*override*/;

    virtual void tick() /*override*/;

    virtual void executeStartupUris() /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;

    virtual void playerListChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AutomationClient(::IMinecraftApp& minecraft);

    MCNAPI void _forEachSession(::std::function<bool(::Automation::AutomationSession&)> const& callback);

    MCNAPI bool _tryAddCommand(::CodeBuilder::CommandRequest&& commandRequest);

    MCNAPI ::std::shared_ptr<::Automation::AutomationSession> createSession();

    MCNAPI ::std::shared_ptr<::Automation::AutomationSession> getDefaultSession();

    MCNAPI ::std::shared_ptr<::CodeBuilder::GameContext> getGameContext() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftApp& minecraft);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const& uri);

    MCNAPI void $send(::CodeBuilder::AgentMessage const& message);

    MCNAPI void $send(::CodeBuilder::CommandMessage const& message);

    MCNAPI void $send(::CodeBuilder::ErrorMessage const& message);

    MCNAPI void $send(::CodeBuilder::EventMessage const& message);

    MCNAPI void $send(::CodeBuilder::ChatMessage const& message);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();

    MCNAPI void $onLevelDestruction(::std::string const&);

    MCNAPI void $playerListChanged();


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Automation
