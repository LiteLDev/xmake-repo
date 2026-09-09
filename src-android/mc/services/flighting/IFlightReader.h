#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/InboxIconFlightingState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/services/flighting/FlightingTreatmentId.h"

// auto generated forward declare list
// clang-format off
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace flighting {

class IFlightReader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFlightReader() = default;

    virtual int getPersonaLowMemoryThresholdMb() const = 0;

    virtual int getPersonaCriticalMemoryThresholdMb() const = 0;

    virtual int getPersonaSkinCutoffSizeKb() const = 0;

    virtual int getPersonaSkinLodDistance() const = 0;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getNetherNetTimeout() const = 0;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getJoinablePartiesRefreshIntervalSeconds() const = 0;

    virtual std::chrono::duration<long, std::ratio<60, 1>> getServerSlotReservationTimeMinutes() const = 0;

    virtual bool getPartiesEnabled() const = 0;

    virtual bool getPartiesChatEnabled() const = 0;

    virtual bool getPartiesChatInWorldEnabled() const = 0;

    virtual int getPartiesChatHistoryLimit() const = 0;

    virtual bool getPartiesEligibilityCheckForExperiences() const = 0;

    virtual bool getPartiesTravelToRealmsEnabled() const = 0;

    virtual bool getPartiesTravelToExperiencesEnabled() const = 0;

    virtual bool getPartiesTravelToExternalEnabled() const = 0;

    virtual bool getPartiesTravelToThirdPartyServersEnabled() const = 0;

    virtual bool getPartiesSetEarlyExperienceDestinationEnabled() const = 0;

    virtual bool getPartiesJsonRpcInvitesEnabled() const = 0;

    virtual int getLowMemoryRenderDistanceReductionPct() const = 0;

    virtual bool getDataDrivenRendererV2ActorsWithAttachables() const = 0;

    virtual bool getSplitStreamAndroid() const = 0;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getPlayerMessagingSafetyRefreshIntervalSeconds() const = 0;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getProfileImageRefreshIntervalSeconds() const = 0;

    virtual bool getEnableMemoryTracker() const = 0;

    virtual bool getEnableSpatialPacketOptimization() const = 0;

    virtual bool getEnablePredictedMovementComponent() const = 0;

    virtual int getNXLowMemoryThresholdMb() const = 0;

    virtual bool getNewLinkedAccountsService() const = 0;

    virtual bool getEnableUseHardwareMemTier() const = 0;

    virtual bool getFriendsDrawerOnMainMenu() const = 0;

    virtual bool getFriendsDrawerOnGameMenu() const = 0;

    virtual bool getFriendsDrawerOnMultipleScreens() const = 0;

    virtual bool getFriendsDrawerPlayersInMyWorld() const = 0;

    virtual bool getEnableSendXblFriendRequests() const = 0;

    virtual bool getEnableViewXblFriendRequests() const = 0;

    virtual bool getShowXblFriendsNotFollows() const = 0;

    virtual bool getPacketTelemetry() const = 0;

    virtual bool getTextureCacheEnabled() const = 0;

    virtual bool getTextureStreamingEnabled() const = 0;

    virtual bool getSocialDrawerHotkeyEnabled() const = 0;

    virtual bool getDisableTrickleIce(int) const = 0;

    virtual bool getDisablePacketRateLimiter() const = 0;

    virtual std::string getProfilingOrchestratorConfig() const = 0;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getSignalingPingInterval() const = 0;

    virtual bool getReconnectOnResume() const = 0;

    virtual bool getEnableNewDisconnectScreen3PServers() const = 0;

    virtual bool getVibrantVisualsDefaultPreference() const = 0;

    virtual bool getJigsawPersistenceEnabled() const = 0;

    virtual bool getReconnectButtonOnDisconnectScreen() const = 0;

    virtual ::InboxIconFlightingState getInboxIconState() const = 0;

    virtual void visit(std::function<void (const FlightingToggleMetadata&)> const&) const = 0;

    virtual void registerPartiesEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual void registerPartiesChatEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual void registerProfilingOrchestratorConfigChangedObserver(::Bedrock::PubSub::Subscription&, std::function<void (std::string_view)>&&) const = 0;

    virtual void registerEnableMemoryTrackerObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual void registerDefaultPreferVisualsObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual void registerFriendsDrawerOnMultipleScreensObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual void registerPartiesTravelToRealmsEnabledObserver(::Bedrock::PubSub::Subscription&, std::function<void (bool)>) const = 0;

    virtual bool isEnabled(::FlightingTreatmentId) const = 0;

    virtual void registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingTreatmentId, std::function<void (bool)>) const = 0;

    virtual void registerInboxIconStateObserver(::Bedrock::PubSub::Subscription&, std::function<void (int)>) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace flighting
