#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class IThirdPartyServerRepository;
class ProfanityContext;
class ServerLocator;
class ServicesManager;
struct ExternalServer;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace World {

class ThirdPartyWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                mServerLocator;
    ::ll::UntypedStorage<8, 24>                                               mOfferRepository;
    ::ll::UntypedStorage<8, 24>                                               mThirdPartyServerRepository;
    ::ll::UntypedStorage<8, 24>                                               mProfanityContext;
    ::ll::TypedStorage<1, 1, bool>                                            mIsEditorMode;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<NetworkWorldInfo>>> mThirdPartyServerWorldList;
    ::ll::TypedStorage<8, 8, double>                                          mLastUpdateMs;
    ::ll::TypedStorage<8, 8, ulong>                                           mAutoRefetchAttempsCounter;
    ::ll::UntypedStorage<8, 40>                                               mListSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mServersChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mMCTokenUpdateSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyWorldList& operator=(ThirdPartyWorldList const&);
    ThirdPartyWorldList(ThirdPartyWorldList const&);
    ThirdPartyWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyWorldList(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );

    MCNAPI void _fetchWorlds(bool);

    MCNAPI void _onMCTokenUpdated(::ServicesManager*);

    MCNAPI void _onServersChanged();

    MCNAPI void _refreshWorlds();

    MCNAPI void _remove3PServersMismatchingEditorMode();

    MCNAPI void _runProfanityCheckOnWorlds();

    MCNAPI std::optional<NetworkWorldInfo> getWorld(std::string const&);

    MCNAPI std::vector<std::shared_ptr<NetworkWorldInfo>> const& getWorlds() const;

    MCNAPI bool isFetchingServers() const;

    MCNAPI void refreshRepository();

    MCNAPI ::Bedrock::PubSub::Subscription registerListener(std::function<void()>);

    MCNAPI void sort();

    MCNAPI void update(double);

    MCNAPI ~ThirdPartyWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>>,
        ::ServerLocator&,
        bool const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
