#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
