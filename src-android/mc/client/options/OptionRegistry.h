#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/BaseOptionRegistry.h"
#include "mc/client/options/GraphicsQualityPresetMode.h"
#include "mc/client/options/IOptionRegistry.h"
#include "mc/client/renderer/PlatformConfiguration.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class ChatOptions;
class ClientInstanceEventCoordinator;
class GamePadRemappingLayout;
class IAdvancedGraphicsOptions;
class IOptionRegistry;
class KeyboardRemappingLayout;
class Option;
class OptionSaveDeferral;
class OptionValueInterface;
class OptionsObserver;
class TaskGroup;
struct CloudConfiguration;
struct PointLightConfiguration;
struct ReflectionConfiguration;
struct RenderDistanceConfiguration;
struct ScriptDebuggerSettings;
struct ShadowConfiguration;
struct UpscalingConfiguration;
struct VolumetricFogConfiguration;
namespace Core { class SingleThreadedLock; }
namespace Scripting { struct WatchdogSettings; }
namespace Social::Events { class Event; }
// clang-format on

class OptionRegistry : public ::BaseOptionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChatOptions>> mChatOptions;
    ::ll::UntypedStorage<8, 24> mFilePath;
    ::ll::TypedStorage<1, 1, bool> mLoadInProgress;
    ::ll::TypedStorage<1, 1, bool> mPrimaryUserStatus;
    ::ll::TypedStorage<1, 1, bool> mAllowedToSave;
    ::ll::UntypedStorage<4, 4> mSaveRequestMode;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mSaveDeferralCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextSaveTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OptionValueInterface>> mOptionValues;
    ::ll::TypedStorage<4, 4, int> mDefaultViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int> mDefaultRayTracingViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int> mDefaultDeferredViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int> mRenderDistanceDefaultIdx;
    ::ll::TypedStorage<4, 4, int> mRayDistanceDefaultIdx;
    ::ll::TypedStorage<8, 24, std::vector<int>> mRenderDistanceLevels;
    ::ll::TypedStorage<8, 24, std::vector<int>> mRayTracingRenderDistanceLevels;
    ::ll::TypedStorage<8, 24, std::vector<int>> mDeferredRenderDistanceLevels;
    ::ll::TypedStorage<4, 4, float> mPpmDpadSizeOld;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRecentSkinIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GamePadRemappingLayout>> mGamePadRemapping;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<KeyboardRemappingLayout>>> mKeyboardRemappings;
    ::ll::UntypedStorage<8, 32> mEventSubject;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool> mIsSaveInProgress;
    ::ll::TypedStorage<1, 1, bool> mChangeStorageInProgress;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mObserverSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mLockSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDefaultPreferVisualsSubscription;
    ::ll::UntypedStorage<8, 24> mClientInstanceEventCoordinator;
    ::ll::UntypedStorage<8, 24> mAdvancedGraphicsOptions;
    ::ll::UntypedStorage<8, 24> mGraphicsQualityPresets;
    ::ll::TypedStorage<1, 1, bool> mUserChangedBloom;
    ::ll::TypedStorage<4, 4, int> mDeferredTargetFrameRate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    OptionRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionRegistry();

    virtual ::gsl::not_null<const Option*> get(::OptionID) const;

    virtual std::optional<DeviceMemoryTier> getScriptingMemoryTierOverride() const;

    virtual std::optional<int> getDebugTextFilteringDelayMilliSeconds() const;

    virtual bool getFilterProfanity() const;

    virtual int getMaxViewDistanceChunks() const;

    virtual ::GraphicsMode getGraphicsMode() const;

    virtual void load(::Core::PathBuffer<std::string>);

    virtual void tickSaveTimer();

    virtual void notifySaveAllowed();

    virtual void saveIfNeeded();

    virtual ::OptionSaveDeferral requestSaveDeferral();

    virtual void reset(::OptionResetFlags, ::InputMode);

    virtual bool getPrimaryUserStatus() const;

    virtual void setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<ClientInstanceEventCoordinator> const&);

    virtual bool isValidOption(::OptionID) const;

    virtual ::gsl::not_null<Option*> get(::OptionID);

    virtual std::optional<const Option*> getIfValid(::OptionID) const;

    virtual std::optional<Option*> getIfValid(::OptionID);

    virtual void getTelemetryOptions(std::vector<OptionID>&);

    virtual void refreshRenderDistanceLevels();

    virtual bool isLoadInProgress();

    virtual void addObserver(::OptionsObserver&);

    virtual void loadOptionsFromString(std::string);

    virtual void elevateSaveRequestMode(::IOptionRegistry::SaveRequestMode);

    virtual ::ChatOptions& getChatOptions();

    virtual ::ChatOptions const& getChatOptions() const;

    virtual void setFileStorageLocation(::FileStorageDirectory, std::function<void(bool)>);

    virtual ::FileStorageDirectory getFileStorageLocation() const;

    virtual int getViewDistanceChunks() const;

    virtual int getDefaultViewDistanceChunks(::GraphicsMode) const;

    virtual int getMaxViewDistanceChunksRaw() const;

    virtual bool getRayTracing() const;

    virtual bool isVibrantVisualsUserEnabled() const;

    virtual int getGraphicsQualityPresetMode() const;

    virtual int getDeferredTargetFrameRate() const;

    virtual ::GamePadRemappingLayout& getGamePadRemapping();

    virtual std::shared_ptr<KeyboardRemappingLayout> getCurrentKeyboardRemapping() const;

    virtual std::shared_ptr<KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const;

    virtual void setLanguage(std::string const&);

    virtual std::string getLanguage() const;

    virtual void setPlayerViewPerspective(int);

    virtual void setRecentSkinIds(std::vector<std::string> const&);

    virtual std::vector<std::string> const& getRecentSkinIds();

    virtual float getDefaultPlatformSafeZoneX() const;

    virtual float getDefaultPlatformSafeZoneY() const;

    virtual bool getServerboundClientDiagnosticsEnabled() const;

    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const;

    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const;

    virtual void setSaveDeferralCount(int);

    virtual int getSaveDeferralCount() const;

    virtual void setForceVibrantVisualsDisabled(bool);

    virtual int getMaxFrameRate() const;

    virtual ::gsl::not_null<const Option*> getEffectiveMaxFramerateOption() const;

    virtual ::gsl::not_null<Option*> getEffectiveMaxFramerateOption();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OptionRegistry(
        std::unique_ptr<OptionValueInterface>,
        bool,
        bool,
        std::weak_ptr<IOptionRegistry> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&
    );

    MCNAPI std::string _cleanPlayerName(std::string const&) const;

    MCNAPI bool _isVibrantVisualsEnabledAndSupported() const;

    MCNAPI void _parseFilesAndLoadOptions();

    MCNAPI void _readKeyboardMapping(std::string const&, std::string const&);

    MCNAPI void _registerOptions();

    MCNAPI void _registerSelfLock(::OptionID, std::function<void(bool&)>);

    MCNAPI void _registerSelfObserver(::OptionID, std::function<void(const Option&)>);

    MCNAPI void _registerSelfObserver(::OptionID, std::function<void(const Option&, InputMode)>);

    MCNAPI void _resolveMultipleSwitchRealmsEnabled(bool, std::vector<std::string> const, bool);

    MCNAPI void _saveInputMapping(std::vector<std::pair<std::string, std::string>>&) const;

    MCNAPI void _setAGFXValuesForPreset(::GraphicsQualityPresetMode);

    MCNAPI void fireEventOptionsUpdated(::Social::Events::Event&, ::InputMode);

    MCNAPI void setCloudConfiguration(::CloudConfiguration const&);

    MCNAPI void setDeferredRenderDistance(::RenderDistanceConfiguration const&);

    MCNAPI void setGammaUIConfiguration();

    MCNAPI void setGraphicsQualityPresets(std::vector<PlatformConfiguration::GraphicsQualityPreset> const&);

    MCNAPI void setLightingMixedResolutionUpscale();

    MCNAPI void setPointLightConfiguration(::PointLightConfiguration const&);

    MCNAPI void setReflectionConfiguration(::ReflectionConfiguration const&);

    MCNAPI void setShadowConfiguration(::ShadowConfiguration const&);

    MCNAPI void setUpscalingConfiguration(::UpscalingConfiguration const&);

    MCNAPI void setVolumetricFogConfiguration(::VolumetricFogConfiguration const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& GAME_TIPS_NUMBER_OF_SHOWINGS_DEFAULT();

    MCNAPI static std::string const& do_not_save();

    MCNAPI static std::string const& not_available();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<OptionValueInterface>,
        bool,
        bool,
        std::weak_ptr<IOptionRegistry> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<const Option*> $get(::OptionID) const;

    MCNAPI std::optional<DeviceMemoryTier> $getScriptingMemoryTierOverride() const;

    MCNAPI std::optional<int> $getDebugTextFilteringDelayMilliSeconds() const;

    MCNAPI bool $getFilterProfanity() const;

    MCNAPI int $getMaxViewDistanceChunks() const;

    MCNAPI ::GraphicsMode $getGraphicsMode() const;

    MCNAPI void $load(::Core::PathBuffer<std::string>);

    MCNAPI void $tickSaveTimer();

    MCNAPI void $notifySaveAllowed();

    MCNAPI void $saveIfNeeded();

    MCNAPI ::OptionSaveDeferral $requestSaveDeferral();

    MCNAPI void $reset(::OptionResetFlags, ::InputMode);

    MCNAPI bool $getPrimaryUserStatus() const;

    MCNAPI void $setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<ClientInstanceEventCoordinator> const&);

    MCNAPI bool $isValidOption(::OptionID) const;

    MCNAPI ::gsl::not_null<Option*> $get(::OptionID);

    MCNAPI std::optional<const Option*> $getIfValid(::OptionID) const;

    MCNAPI std::optional<Option*> $getIfValid(::OptionID);

    MCNAPI void $getTelemetryOptions(std::vector<OptionID>&);

    MCNAPI void $refreshRenderDistanceLevels();

    MCNAPI bool $isLoadInProgress();

    MCNAPI void $addObserver(::OptionsObserver&);

    MCNAPI void $loadOptionsFromString(std::string);

    MCNAPI void $elevateSaveRequestMode(::IOptionRegistry::SaveRequestMode);

    MCNAPI ::ChatOptions& $getChatOptions();

    MCNAPI ::ChatOptions const& $getChatOptions() const;

    MCNAPI void $setFileStorageLocation(::FileStorageDirectory, std::function<void(bool)>);

    MCNAPI ::FileStorageDirectory $getFileStorageLocation() const;

    MCNAPI int $getViewDistanceChunks() const;

    MCNAPI int $getDefaultViewDistanceChunks(::GraphicsMode) const;

    MCNAPI int $getMaxViewDistanceChunksRaw() const;

    MCNAPI bool $getRayTracing() const;

    MCNAPI bool $isVibrantVisualsUserEnabled() const;

    MCNAPI int $getGraphicsQualityPresetMode() const;

    MCNAPI int $getDeferredTargetFrameRate() const;

    MCNAPI ::GamePadRemappingLayout& $getGamePadRemapping();

    MCNAPI std::shared_ptr<KeyboardRemappingLayout> $getCurrentKeyboardRemapping() const;

    MCNAPI std::shared_ptr<KeyboardRemappingLayout> $getKeyboardRemappingByType(::KeyboardType) const;

    MCNAPI void $setLanguage(std::string const&);

    MCNAPI std::string $getLanguage() const;

    MCNAPI void $setPlayerViewPerspective(int);

    MCNAPI void $setRecentSkinIds(std::vector<std::string> const&);

    MCNAPI std::vector<std::string> const& $getRecentSkinIds();

    MCNAPI float $getDefaultPlatformSafeZoneX() const;

    MCNAPI float $getDefaultPlatformSafeZoneY() const;

    MCNAPI bool $getServerboundClientDiagnosticsEnabled() const;

    MCNAPI ::ScriptDebuggerSettings $getScriptDebuggerSettings() const;

    MCNAPI ::Scripting::WatchdogSettings $getScriptWatchdogSettings() const;

    MCNAPI void $setSaveDeferralCount(int);

    MCNAPI int $getSaveDeferralCount() const;

    MCNAPI void $setForceVibrantVisualsDisabled(bool);

    MCNAPI int $getMaxFrameRate() const;

    MCNAPI ::gsl::not_null<const Option*> $getEffectiveMaxFramerateOption() const;

    MCNAPI ::gsl::not_null<Option*> $getEffectiveMaxFramerateOption();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
