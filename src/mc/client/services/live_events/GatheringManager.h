#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GatheringService;
class IMinecraftEventing;
class ServicesManager;
struct ExperienceJoinRequestInfo;
struct PartyGatheringEligibilityResult;
namespace Bedrock::Http { class IWebService; }
namespace Bedrock::Services::gatherings::model { struct JoinResponseData; }
namespace Social { class IUserManager; }
namespace mce { class UUID; }
// clang-format on

class GatheringManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                     mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GatheringService>> mGatheringService;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GatheringManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GatheringManager(
        ::Bedrock::NonOwnerPointer<Social::IUserManager>,
        ::IMinecraftEventing*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServicesManager>>,
        ::gsl::not_null<std::shared_ptr<Bedrock::Http::IWebService>>
    );

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Services::gatherings::model::JoinResponseData>
    getExperienceConnectionAsync(::ExperienceJoinRequestInfo const&);

    MCNAPI ::Bedrock::Threading::Async<std::optional<PartyGatheringEligibilityResult>>
    getExperiencePartyEligibilityResult(::mce::UUID const&, std::string const&, std::optional<mce::UUID>, bool);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Services::gatherings::model::JoinResponseData>
    getScenarioConnectionAsync(::mce::UUID const&, ::mce::UUID const&, ::mce::UUID const&, ::mce::UUID const&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Social::IUserManager>,
        ::IMinecraftEventing*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServicesManager>>,
        ::gsl::not_null<std::shared_ptr<Bedrock::Http::IWebService>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GatheringManager {};
#endif // @header-generator platform
