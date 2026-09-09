#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/InboxIconFlightingState.h"
#include "mc/services/flighting/FlightingToggleId.h"
#include "mc/services/flighting/FlightingTreatmentId.h"
#include "mc/services/flighting/IFlightReader.h"

// auto generated forward declare list
// clang-format off
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
namespace flighting { class ConfigurationToggles; }
namespace flighting { class TreatmentToggles; }
// clang-format on

namespace flighting {

class FlightReader : public ::flighting::IFlightReader {
public:
    // FlightReader inner types define
    enum class TextureStreamingConfiguration : int {
        Disabled        = 0,
        CacheEnabled    = 1,
        StreamerEnabled = 2,
        Count           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<flighting::ConfigurationToggles>>> mConfigurations;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<flighting::TreatmentToggles>>>     mTreatments;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightReader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FlightReader();

    virtual int getPersonaLowMemoryThresholdMb() const;

    virtual int getPersonaCriticalMemoryThresholdMb() const;

    virtual int getPersonaSkinCutoffSizeKb() const;

    virtual int getPersonaSkinLodDistance() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getNetherNetTimeout() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getJoinablePartiesRefreshIntervalSeconds() const;

    virtual std::chrono::duration<long, std::ratio<60, 1>> getServerSlotReservationTimeMinutes() const;

    virtual bool getPartiesEnabled() const;

    virtual bool getPartiesChatEnabled() const;

    virtual bool getPartiesChatInWorldEnabled() const;

    virtual int getPartiesChatHistoryLimit() const;

    virtual bool getPartiesEligibilityCheckForExperiences() const;

    virtual bool getPartiesTravelToRealmsEnabled() const;

    virtual bool getPartiesTravelToExperiencesEnabled() const;

    virtual bool getPartiesTravelToExternalEnabled() const;

    virtual bool getPartiesTravelToThirdPartyServersEnabled() const;

    virtual bool getPartiesSetEarlyExperienceDestinationEnabled() const;

    virtual bool getPartiesJsonRpcInvitesEnabled() const;

    virtual int getLowMemoryRenderDistanceReductionPct() const;

    virtual bool getDataDrivenRendererV2ActorsWithAttachables() const;

    virtual bool getSplitStreamAndroid() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getPlayerMessagingSafetyRefreshIntervalSeconds() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getProfileImageRefreshIntervalSeconds() const;

    virtual bool getEnableMemoryTracker() const;

    virtual bool getEnableSpatialPacketOptimization() const;

    virtual bool getEnablePredictedMovementComponent() const;

    virtual int getNXLowMemoryThresholdMb() const;

    virtual bool getNewLinkedAccountsService() const;

    virtual bool getEnableUseHardwareMemTier() const;

    virtual bool getFriendsDrawerOnMainMenu() const;

    virtual bool getFriendsDrawerOnGameMenu() const;

    virtual bool getFriendsDrawerOnMultipleScreens() const;

    virtual bool getFriendsDrawerPlayersInMyWorld() const;

    virtual bool getEnableSendXblFriendRequests() const;

    virtual bool getEnableViewXblFriendRequests() const;

    virtual bool getShowXblFriendsNotFollows() const;

    virtual bool getPacketTelemetry() const;

    virtual bool getTextureCacheEnabled() const;

    virtual bool getTextureStreamingEnabled() const;

    virtual bool getSocialDrawerHotkeyEnabled() const;

    virtual bool getDisableTrickleIce(int) const;

    virtual bool getDisablePacketRateLimiter() const;

    virtual std::string getProfilingOrchestratorConfig() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getSignalingPingInterval() const;

    virtual bool getReconnectOnResume() const;

    virtual bool getEnableNewDisconnectScreen3PServers() const;

    virtual bool getVibrantVisualsDefaultPreference() const;

    virtual bool getJigsawPersistenceEnabled() const;

    virtual bool getReconnectButtonOnDisconnectScreen() const;

    virtual ::InboxIconFlightingState getInboxIconState() const;

    virtual void visit(std::function<void (const FlightingToggleMetadata&)> const&) const;

    virtual void registerPartiesEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual void registerPartiesChatEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual void registerProfilingOrchestratorConfigChangedObserver(::Bedrock::PubSub::Subscription&, std::function<void (std::string_view)>&&) const;

    virtual void registerEnableMemoryTrackerObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual void registerDefaultPreferVisualsObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual void registerFriendsDrawerOnMultipleScreensObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual void registerPartiesTravelToRealmsEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const;

    virtual bool isEnabled(::FlightingTreatmentId) const;

    virtual void registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingTreatmentId, std::function<void (bool)>) const;

    virtual void registerInboxIconStateObserver(::Bedrock::PubSub::Subscription&, std::function<void (int)>) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<void(const Option&)> toObserver(std::function<void(bool)>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getPersonaLowMemoryThresholdMb() const;

    MCNAPI int $getPersonaCriticalMemoryThresholdMb() const;

    MCNAPI int $getPersonaSkinCutoffSizeKb() const;

    MCNAPI int $getPersonaSkinLodDistance() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getNetherNetTimeout() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getJoinablePartiesRefreshIntervalSeconds() const;

    MCNAPI std::chrono::duration<long, std::ratio<60, 1>> $getServerSlotReservationTimeMinutes() const;

    MCNAPI bool $getPartiesEnabled() const;

    MCNAPI bool $getPartiesChatEnabled() const;

    MCNAPI bool $getPartiesChatInWorldEnabled() const;

    MCNAPI int $getPartiesChatHistoryLimit() const;

    MCNAPI bool $getPartiesEligibilityCheckForExperiences() const;

    MCNAPI bool $getPartiesTravelToRealmsEnabled() const;

    MCNAPI bool $getPartiesTravelToExperiencesEnabled() const;

    MCNAPI bool $getPartiesTravelToExternalEnabled() const;

    MCNAPI bool $getPartiesTravelToThirdPartyServersEnabled() const;

    MCNAPI bool $getPartiesSetEarlyExperienceDestinationEnabled() const;

    MCNAPI bool $getPartiesJsonRpcInvitesEnabled() const;

    MCNAPI int $getLowMemoryRenderDistanceReductionPct() const;

    MCNAPI bool $getDataDrivenRendererV2ActorsWithAttachables() const;

    MCNAPI bool $getSplitStreamAndroid() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getPlayerMessagingSafetyRefreshIntervalSeconds() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getProfileImageRefreshIntervalSeconds() const;

    MCNAPI bool $getEnableMemoryTracker() const;

    MCNAPI bool $getEnableSpatialPacketOptimization() const;

    MCNAPI bool $getEnablePredictedMovementComponent() const;

    MCNAPI int $getNXLowMemoryThresholdMb() const;

    MCNAPI bool $getNewLinkedAccountsService() const;

    MCNAPI bool $getEnableUseHardwareMemTier() const;

    MCNAPI bool $getFriendsDrawerOnMainMenu() const;

    MCNAPI bool $getFriendsDrawerOnGameMenu() const;

    MCNAPI bool $getFriendsDrawerOnMultipleScreens() const;

    MCNAPI bool $getFriendsDrawerPlayersInMyWorld() const;

    MCNAPI bool $getEnableSendXblFriendRequests() const;

    MCNAPI bool $getEnableViewXblFriendRequests() const;

    MCNAPI bool $getShowXblFriendsNotFollows() const;

    MCNAPI bool $getPacketTelemetry() const;

    MCNAPI bool $getTextureCacheEnabled() const;

    MCNAPI bool $getTextureStreamingEnabled() const;

    MCNAPI bool $getSocialDrawerHotkeyEnabled() const;

    MCNAPI bool $getDisableTrickleIce(int) const;

    MCNAPI bool $getDisablePacketRateLimiter() const;

    MCNAPI std::string $getProfilingOrchestratorConfig() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getSignalingPingInterval() const;

    MCNAPI bool $getReconnectOnResume() const;

    MCNAPI bool $getEnableNewDisconnectScreen3PServers() const;

    MCNAPI bool $getVibrantVisualsDefaultPreference() const;

    MCNAPI bool $getJigsawPersistenceEnabled() const;

    MCNAPI bool $getReconnectButtonOnDisconnectScreen() const;

    MCNAPI ::InboxIconFlightingState $getInboxIconState() const;

    MCNAPI void $visit(std::function<void(const FlightingToggleMetadata&)> const&) const;

    MCNAPI void $registerPartiesEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI void $registerPartiesChatEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI void $registerProfilingOrchestratorConfigChangedObserver(
        ::Bedrock::PubSub::Subscription&,
        std::function<void(std::string_view)>&&
    ) const;

    MCNAPI void $registerEnableMemoryTrackerObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI void
    $registerDefaultPreferVisualsObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI void
    $registerFriendsDrawerOnMultipleScreensObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI void
    $registerPartiesTravelToRealmsEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) const;

    MCNAPI bool $isEnabled(::FlightingTreatmentId) const;

    MCNAPI void $registerOptionObserverCallback(
        ::Bedrock::PubSub::Subscription&,
        ::FlightingTreatmentId,
        std::function<void(bool)>
    ) const;

    MCNAPI void $registerInboxIconStateObserver(::Bedrock::PubSub::Subscription&, std::function<void(int)>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace flighting
