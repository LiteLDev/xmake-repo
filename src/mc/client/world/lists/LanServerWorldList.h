#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/PingedCompatibleServer.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class ServerLocator;
class TrialManager;
struct ExternalServer;
struct NetworkWorldInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Network { struct ServerID; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class ServerLocator;
class TrialManager;
struct ExternalServer;
struct PingedCompatibleServer;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Network { struct ServerID; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class LanServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                     mServerLocator;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>      mFriendWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>    mExternalWorldList;
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>        mThirdPartyWorldList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>>     mOptions;
    ::ll::TypedStorage<1, 1, bool const>                           mIsEditorMode;
    ::ll::TypedStorage<8, 24, std::vector<PingedCompatibleServer>> mServerList;
    ::ll::UntypedStorage<8, 88>                                    mNotifyChangeSubscribers;
    ::ll::TypedStorage<8, 8, double>                               mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double const>                         mUpdateDelayInMS;
    // NOLINTEND

public:
    // prevent constructor by default
    LanServerWorldList& operator=(LanServerWorldList const&);
    LanServerWorldList(LanServerWorldList const&);
    LanServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LanServerWorldList(
        ::ServerLocator&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::ThirdPartyWorldList&,
        std::shared_ptr<OptionRegistry> const&,
        bool
    );

    MCNAPI bool _compareFutureIP(::ExternalServer const&, ::PingedCompatibleServer const&) const;

    MCNAPI bool _refreshWorlds();

    MCNAPI ::PingedCompatibleServer const* getWorld(::Network::ServerID const&) const;

    MCNAPI std::vector<PingedCompatibleServer> const& getWorlds() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerChangeListener(std::function<void()>);

    MCNAPI void update(double, ::TrialManager const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerLocator&,
        ::World::ExternalServerWorldList&,
        ::World::FriendServerWorldList&,
        ::World::ThirdPartyWorldList&,
        std::shared_ptr<OptionRegistry> const&,
        bool
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LanServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                         mServerLocator;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>          mFriendWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>        mExternalWorldList;
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>            mThirdPartyWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>     mOptions;
    ::ll::TypedStorage<1, 1, bool const>                               mIsEditorMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::PingedCompatibleServer>> mServerList;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                           mNotifyChangeSubscribers;
    ::ll::TypedStorage<8, 8, double>       mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double const> mUpdateDelayInMS;
    // NOLINTEND

public:
    // prevent constructor by default
    LanServerWorldList& operator=(LanServerWorldList const&);
    LanServerWorldList(LanServerWorldList const&);
    LanServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _refreshWorlds();

    MCAPI ::PingedCompatibleServer const* getWorld(::Network::ServerID const& lookupId) const;

    MCAPI void update(double timestampMs, ::TrialManager const& trialManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _compareFutureIP(::ExternalServer const& externalServer, ::PingedCompatibleServer const& lanServer);
    // NOLINTEND
};
#else // @header-generator platform
class LanServerWorldList {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
