#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/ConnectionDefinition.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/TextProcessorInitParams.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/level/ForceBlockNetworkIdsAreHashes.h"

// auto generated forward declare list
// clang-format off
class AutomationBehaviorTreeGroup;
class BehaviorFactory;
class CDNConfig;
class CommandManager;
class DebugEndPoint;
class EducationOptions;
class EntityContext;
class EntitySystemsManager;
class Experiments;
class IMinecraftEventing;
class IResourcePackRepository;
class ItemRegistryRef;
class LevelCrashDumpManager;
class LevelData;
class LevelEventCoordinator;
class LevelSettings;
class LevelSoundManager;
class LevelStorage;
class LinkedAssetValidator;
class Minecraft;
class PauseManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
class ServerLevel;
class ServerNetworkSystem;
class ServerTextSettings;
class TextFilteringProcessor;
class Timer;
struct PlayerMovementSettings;
struct ScriptSettings;
namespace Core { class FileStorageArea; }
// clang-format on

struct ServerInstanceInitArguments {
public:
    // ServerInstanceInitArguments inner types declare
    // clang-format off
    struct CreateLevelArguments;
    struct CreateNetworkSystemArguments;
    struct HostMultiplayerArguments;
    struct CreateMinecraftArguments;
    // clang-format on

    // ServerInstanceInitArguments inner types define
    struct CreateLevelArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 24>                               mLevelEntity;
        ::ll::TypedStorage<1, 1, bool>                            mUseClientSideGeneration;
        ::ll::TypedStorage<1, 1, bool>                            mInitLevelWithBlockNetworkIdsAreHashes;
        ::ll::TypedStorage<8, 8, ::ItemRegistryRef&&>             mServerItemRegistry;
        ::ll::UntypedStorage<8, 16>                               mStorage;
        ::ll::UntypedStorage<8, 24>                               mValidator;
        ::ll::UntypedStorage<8, 24>                               mLevelData;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandManager>> mCommandManager;
        ::ll::UntypedStorage<8, 16>                               mCreateLevelSoundManager;
        ::ll::UntypedStorage<8, 16>                               mCreateLevelCrashDumpManager;
        ::ll::UntypedStorage<8, 16>                               mCreateEntitySystemsManager;
        ::ll::UntypedStorage<8, 16>                               mCreateAutomationTree;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLevelArguments& operator=(CreateLevelArguments const&);
        CreateLevelArguments(CreateLevelArguments const&);
        CreateLevelArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateLevelArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateNetworkSystemArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Scheduler&> mScheduler;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateNetworkSystemArguments& operator=(CreateNetworkSystemArguments const&);
        CreateNetworkSystemArguments(CreateNetworkSystemArguments const&);
        CreateNetworkSystemArguments();
    };

    struct HostMultiplayerArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLevel>>                    mServerLevel;
        ::ll::UntypedStorage<1, 32>                                               mLevelEntity;
        ::ll::TypedStorage<8, 40, std::unordered_map<PackIdVersion, std::string>> mPackIdToContentKey;
        ::ll::TypedStorage<8, 8, ::ConnectionDefinition const&>                   mConnectionDefinition;
        ::ll::TypedStorage<8, 8, ::TextFilteringProcessor&>                       mTextFilteringProcessor;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPackSettingsCache>>       mPackSettingsCache;
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerArguments& operator=(HostMultiplayerArguments const&);
        HostMultiplayerArguments(HostMultiplayerArguments const&);
        HostMultiplayerArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~HostMultiplayerArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateMinecraftArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Timer&> mSimTimer;
        ::ll::TypedStorage<8, 8, ::Timer&> mRealTimer;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftArguments& operator=(CreateMinecraftArguments const&);
        CreateMinecraftArguments(CreateMinecraftArguments const&);
        CreateMinecraftArguments();
    };

    using CreateMinecraftCallback = ::brstd::function_ref<
        std::unique_ptr<Minecraft>(ServerInstanceInitArguments::CreateMinecraftArguments&&) const,
        std::unique_ptr<Minecraft>(ServerInstanceInitArguments::CreateMinecraftArguments&&)>;

    using CreateLevelCallback = ::brstd::function_ref<
        std::unique_ptr<ServerLevel>(ServerInstanceInitArguments::CreateLevelArguments&&) const,
        std::unique_ptr<ServerLevel>(ServerInstanceInitArguments::CreateLevelArguments&&)>;

    using CreateNetworkSystemCallback = ::brstd::function_ref<
        std::unique_ptr<ServerNetworkSystem>(ServerInstanceInitArguments::CreateNetworkSystemArguments&&) const,
        std::unique_ptr<ServerNetworkSystem>(ServerInstanceInitArguments::CreateNetworkSystemArguments&&)>;

    using RegisterServerInstanceHandlerCallback = ::brstd::function_ref<void() const, void()>;

    using HostMultiplayerCallback = ::brstd::function_ref<
        bool(ServerInstanceInitArguments::HostMultiplayerArguments&&) const,
        bool(ServerInstanceInitArguments::HostMultiplayerArguments&&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<8, 24, std::string> mLevelName;
    ::ll::TypedStorage<8, 24, std::string> mServerName;
    ::ll::TypedStorage<8, 8, ::LevelSettings&&> mLevelSettings;
    ::ll::TypedStorage<8, 312, ::ServerConfiguration::ServerConfigurationJoinInfo> mServerJoinInfo;
    ::ll::TypedStorage<8, 96, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
    ::ll::TypedStorage<4, 20, ::ConnectionDefinition> mConnectionDefinition;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&> mResourcePackRepository;
    ::ll::UntypedStorage<8, 16> mClientResourcePackManager;
    ::ll::UntypedStorage<8, 48> mCreateLevelStorageCallback;
    ::ll::TypedStorage<8, 8, std::string const&> mBasePath;
    ::ll::UntypedStorage<8, 24> mLevelData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EducationOptions>> mEducationOptions;
    ::ll::UntypedStorage<8, 8> mLocalServerResourcePackManager;
    ::ll::UntypedStorage<8, 48> mCriticalSaveCallback;
    ::ll::UntypedStorage<8, 48> mCompactionCallback;
    ::ll::TypedStorage<8, 8, ::DebugEndPoint*> mDebugEndPoint;
    ::ll::TypedStorage<1, 1, bool> mEnableWorldSessionEndPoint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mStorageAreaForLevel;
    ::ll::TypedStorage<1, 1, bool> mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool> mEnableItemTransactionLogger;
    ::ll::TypedStorage<1, 1, bool> mEnableRealmsStories;
    ::ll::TypedStorage<8, 8, std::optional<PlayerMovementSettings>&&> mPlayerMovementSettings;
    ::ll::TypedStorage<8, 8, ::ScriptSettings&&> mScriptSettings;
    ::ll::TypedStorage<8, 8, ::Experiments const&> mLevelExperiments;
    ::ll::TypedStorage<4, 4, float> mWorldSizeMB;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mClientSideGenerationEnabled;
    ::ll::TypedStorage<1, 1, ::ForceBlockNetworkIdsAreHashes> mBlockNetworkIdsAreHashes;
    ::ll::UntypedStorage<8, 24> mCdnConfig;
    ::ll::UntypedStorage<8, 32> mServerTextSettings;
    ::ll::UntypedStorage<8, 224> mTextProcessorInitParams;
    ::ll::UntypedStorage<1, 16> mDisableClientVibrantVisuals;
    ::ll::UntypedStorage<8, 64> mShouldDisableNetworkOnSuspend;
    ::ll::TypedStorage<1, 1, bool> mEnableChatLogging;
    ::ll::UntypedStorage<8, 16> mCreateMinecraft;
    ::ll::UntypedStorage<8, 16> mCreateLevel;
    ::ll::UntypedStorage<8, 16> mCreateNetworkSystem;
    ::ll::UntypedStorage<8, 16> mRegisterServerInstanceHandler;
    ::ll::UntypedStorage<8, 24> mHostMultiplayer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceInitArguments& operator=(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerInstanceInitArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
