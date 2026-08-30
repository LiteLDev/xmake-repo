#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/NetworkWorldInfo.h"
#include "mc/client/world/lists/ExternalServerWorldError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class IExternalServerFile;
class ProfanityContext;
class ServerLocator;
struct ExternalServer;
struct PingedCompatibleServer;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace World {

class ExternalServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                              mExternalServerFile;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>               mServerLocator;
    ::ll::UntypedStorage<8, 24>                              mProfanityContext;
    ::ll::TypedStorage<8, 24, std::vector<NetworkWorldInfo>> mExternalServerWorldList;
    ::ll::TypedStorage<8, 8, double>                         mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                           mIsDirtyOperation;
    ::ll::UntypedStorage<8, 40>                              mListSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerWorldList& operator=(ExternalServerWorldList const&);
    ExternalServerWorldList(ExternalServerWorldList const&);
    ExternalServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalServerWorldList(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IExternalServerFile>>,
        ::ServerLocator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );

    MCNAPI void _refreshWorlds();

    MCNAPI ::nonstd::expected<int, World::ExternalServerWorldError>
    addExternalServerWorld(std::string const&, std::string const&, int);

    MCNAPI std::optional<World::ExternalServerWorldError>
           editExternalServerWorld(int, std::string const&, std::string const&, int);

    MCNAPI std::optional<NetworkWorldInfo> getWorld(std::string const&);

    MCNAPI std::vector<NetworkWorldInfo> const& getWorlds() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerListener(std::function<void()>);

    MCNAPI std::optional<World::ExternalServerWorldError> removeExternalServerWorld(int);

    MCNAPI void update(double);

    MCNAPI ~ExternalServerWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IExternalServerFile>>,
        ::ServerLocator&,
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
