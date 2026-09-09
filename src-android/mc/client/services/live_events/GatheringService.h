#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ServicesManager;
struct ExperienceJoinRequestInfo;
struct PartyGatheringEligibilityResult;
namespace Bedrock::Services::gatherings::api { class IJoinApi; }
namespace Bedrock::Services::gatherings::model { struct JoinResponseData; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace mce { class UUID; }
// clang-format on

class GatheringService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mJoinApi;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringService();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GatheringService();

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::string const&) const;

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> _getAuthorizationHeader() const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Services::gatherings::model::JoinResponseData>
    getExperienceConnectionAsync(::ExperienceJoinRequestInfo const&);

    MCNAPI ::Bedrock::Threading::Async<std::optional<PartyGatheringEligibilityResult>>
    getExperiencePartyEligibilityResult(::mce::UUID const&, std::string const&, std::optional<mce::UUID>, bool);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Services::gatherings::model::JoinResponseData>
    getScenarioConnectionAsync(::mce::UUID const&, ::mce::UUID const&, ::mce::UUID const&, ::mce::UUID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthorizationHeader(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<std::string>
    $getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
