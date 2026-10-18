#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/flighting/TagContainerManager.h"
#include "mc/client/services/flighting/TagType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class FlightingToggles;
class IMinecraftEventing;
class RealmsAPI;
class TreatmentCodenameManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace SDL { struct SessionAuth; }
namespace flighting { class ConfigurationToggles; }
namespace flighting { class IFlightReader; }
namespace flighting { class TreatmentToggles; }
// clang-format on

class FlightingService : public ::ServiceClient, public ::std::enable_shared_from_this<FlightingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<FlightingToggles>>                                 mFlightingToggles;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                              mEventing;
    ::ll::UntypedStorage<8, 24>                                                                  mCacheLocation;
    ::ll::TypedStorage<8, 24, std::string const>                                                 mClientId;
    ::ll::TypedStorage<8, 24, std::string>                                                       mCurrentLanguage;
    ::ll::TypedStorage<8, 24, std::vector<flighting::TagContainerManager>>                       mTagContainerList;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<flighting::ConfigurationToggles>>> mConfigurationToggles;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<flighting::TreatmentToggles>>>     mTreatmentToggles;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<flighting::IFlightReader>>>         mFlightReader;
    ::ll::UntypedStorage<8, 8>                                 mServiceRegistrationToken;
    ::ll::UntypedStorage<8, 8>                                 mFlightReaderToken;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                mLoadingTags;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mConfigurationsSubscription;
    ::ll::UntypedStorage<8, 16>                                mTreatmentCodenameManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingService& operator=(FlightingService const&);
    FlightingService(FlightingService const&);
    FlightingService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlightingService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlightingService(::IMinecraftEventing&, ::Core::Path const&, std::string const&, bool);

    MCNAPI ::flighting::ConfigurationToggles& getConfigurationToggles() const;

    MCNAPI void
        getCurrentTagsByTagTypeAsync(::flighting::TagType, std::function<void(const std::vector<std::string>&)>);

    MCNAPI ::flighting::IFlightReader const& getFlightReader() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TreatmentCodenameManager>> getTreatmentCodenamesManager() const;

    MCNAPI ::flighting::TreatmentToggles& getTreatmentToggles() const;

    MCNAPI void initTagsFromAuth(::SDL::SessionAuth const&);

    MCNAPI ::Bedrock::PubSub::Subscription
    monitorTagsByTagType(::flighting::TagType const&, std::function<void(const std::vector<std::string>&)>);

    MCNAPI ::Bedrock::PubSub::Subscription monitorTreatments(std::function<void(const std::vector<std::string>&)>);

    MCNAPI void setCurrentLanguage(std::string const&);

    MCNAPI void setupTreatmentCodenameManager(::RealmsAPI&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&, ::Core::Path const&, std::string const&, bool);
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
class FlightingService {};
#endif // @header-generator platform
