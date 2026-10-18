#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class TreatmentCodenameManager : public ::std::enable_shared_from_this<TreatmentCodenameManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mCodenameString;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsMonitorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsFeatureFlagsMonitorSubscription;
    ::ll::UntypedStorage<8, 88>                                mCodenameUpdatedPublisher;
    ::ll::TypedStorage<1, 1, bool>                             mDisableLocalizationForTesting;
    ::ll::TypedStorage<1, 1, bool>                             mShowActualTreatmentName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mRealmsFeatureFlags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mTreatments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TreatmentCodenameManager();

    MCNAPI void const _generateCodenames(
        std::vector<std::string> const&,
        std::vector<std::string>&,
        std::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>&
    );

    MCNAPI void generateNewCodenames(std::vector<std::string> const&, std::vector<std::string> const&);

    MCNAPI ::Bedrock::PubSub::Subscription registerCodenameUpdatedListener(std::function<void(std::string_view)>);

    MCNAPI void registerRealmsFeatureNamesListener(::RealmsAPI&);

    MCNAPI void registerTreatmentsListener(std::weak_ptr<FlightingService>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class TreatmentCodenameManager : public ::std::enable_shared_from_this<::TreatmentCodenameManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mCodenameString;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsMonitorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsFeatureFlagsMonitorSubscription;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string_view), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                            mCodenameUpdatedPublisher;
    ::ll::TypedStorage<1, 1, bool>                          mDisableLocalizationForTesting;
    ::ll::TypedStorage<1, 1, bool>                          mShowActualTreatmentName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mRealmsFeatureFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTreatments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void const _generateCodenames(
        ::std::vector<::std::string> const& treatments,
        ::std::vector<::std::string>&       codenamesInUse,
        ::std::stringstream&                inoutStream
    );

    MCAPI void generateNewCodenames(
        ::std::vector<::std::string> const& realmFeatures,
        ::std::vector<::std::string> const& treatments
    );

    MCAPI ::Bedrock::PubSub::Subscription
    registerCodenameUpdatedListener(::std::function<void(::std::string_view)> callback);

    MCAPI void registerRealmsFeatureNamesListener(::RealmsAPI& realmsAPI);

    MCAPI void registerTreatmentsListener(::std::weak_ptr<::FlightingService> flightingService);
    // NOLINTEND
};
#else // @header-generator platform
class TreatmentCodenameManager {};
#endif // @header-generator platform
#endif // @header-generator platform
