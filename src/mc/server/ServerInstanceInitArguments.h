#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/ConnectionDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/TextProcessorInitParams.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/level/ForceBlockNetworkIdsAreHashes.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
class Minecraft;
#if defined(LL_PLAT_A) // @header-generator platform
class PauseManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
#else // @header-generator platform
#endif // @header-generator platform
class ServerLevel;
class ServerNetworkSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerTextSettings;
class TextFilteringProcessor;
class Timer;
struct PlayerMovementSettings;
struct ScriptSettings;
namespace Core { class FileStorageArea; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct ServerInstanceInitArguments {
public:
    // ServerInstanceInitArguments inner types declare
    // clang-format off
    struct CreateLevelArguments;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CreateMinecraftArguments;
#endif // @header-generator platform
    struct CreateNetworkSystemArguments;
    struct HostMultiplayerArguments;
#if defined(LL_PLAT_A) // @header-generator platform
    struct CreateMinecraftArguments;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // ServerInstanceInitArguments inner types define
    struct CreateLevelArguments {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnkf7633a;
        ::ll::UntypedStorage<1, 1>  mUnk5af719;
        ::ll::UntypedStorage<1, 1>  mUnkcb4a1a;
        ::ll::UntypedStorage<8, 8>  mUnkd2d5e8;
        ::ll::UntypedStorage<8, 16> mUnkfaab22;
        ::ll::UntypedStorage<8, 24> mUnk2a1330;
        ::ll::UntypedStorage<8, 24> mUnk64300b;
        ::ll::UntypedStorage<8, 8>  mUnk225d95;
        ::ll::UntypedStorage<8, 16> mUnkbc6165;
        ::ll::UntypedStorage<8, 16> mUnkbf27dc;
        ::ll::UntypedStorage<8, 16> mUnkbe853f;
        ::ll::UntypedStorage<8, 16> mUnka900dc;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLevelArguments& operator=(CreateLevelArguments const&);
        CreateLevelArguments(CreateLevelArguments const&);
        CreateLevelArguments();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CreateMinecraftArguments {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~CreateLevelArguments();
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk8a233a;
        ::ll::UntypedStorage<8, 8> mUnk9de261;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        CreateMinecraftArguments& operator=(CreateMinecraftArguments const&);
        CreateMinecraftArguments(CreateMinecraftArguments const&);
        CreateMinecraftArguments();
#endif // @header-generator platform
    };

    struct CreateNetworkSystemArguments {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Scheduler&> mScheduler;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk5e8151;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLevel>>                    mServerLevel;
        ::ll::UntypedStorage<1, 32>                                               mLevelEntity;
        ::ll::TypedStorage<8, 40, std::unordered_map<PackIdVersion, std::string>> mPackIdToContentKey;
        ::ll::TypedStorage<8, 8, ::ConnectionDefinition const&>                   mConnectionDefinition;
        ::ll::TypedStorage<8, 8, ::TextFilteringProcessor&>                       mTextFilteringProcessor;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPackSettingsCache>>       mPackSettingsCache;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk198cfd;
        ::ll::UntypedStorage<8, 32> mUnk655c0d;
        ::ll::UntypedStorage<8, 64> mUnkb0b241;
        ::ll::UntypedStorage<8, 8>  mUnkb9bcec;
        ::ll::UntypedStorage<8, 8>  mUnka2bd24;
        ::ll::UntypedStorage<8, 16> mUnk4eb9ee;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerArguments& operator=(HostMultiplayerArguments const&);
        HostMultiplayerArguments(HostMultiplayerArguments const&);
        HostMultiplayerArguments();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkad6698;
    ::ll::UntypedStorage<8, 32>  mUnk5df3b1;
    ::ll::UntypedStorage<8, 32>  mUnkd20537;
    ::ll::UntypedStorage<8, 8>   mUnkedee79;
    ::ll::UntypedStorage<8, 376> mUnkd99218;
    ::ll::UntypedStorage<8, 128> mUnke58fc0;
    ::ll::UntypedStorage<4, 20>  mUnk431c02;
    ::ll::UntypedStorage<8, 8>   mUnkb4db5c;
    ::ll::UntypedStorage<8, 8>   mUnk6e5cf9;
    ::ll::UntypedStorage<8, 8>   mUnkec12de;
    ::ll::UntypedStorage<8, 64>  mUnk563341;
    ::ll::UntypedStorage<8, 8>   mUnke8507a;
    ::ll::UntypedStorage<8, 24>  mUnk7a0375;
    ::ll::UntypedStorage<8, 8>   mUnk7d1a2b;
    ::ll::UntypedStorage<8, 8>   mUnk4237f6;
    ::ll::UntypedStorage<8, 64>  mUnk820d04;
    ::ll::UntypedStorage<8, 64>  mUnk2668ac;
    ::ll::UntypedStorage<8, 8>   mUnke8d5d3;
    ::ll::UntypedStorage<1, 1>   mUnk709b15;
    ::ll::UntypedStorage<8, 16>  mUnk6d5a4d;
    ::ll::UntypedStorage<1, 1>   mUnk8529b8;
    ::ll::UntypedStorage<1, 1>   mUnk752598;
    ::ll::UntypedStorage<1, 1>   mUnke48055;
    ::ll::UntypedStorage<8, 8>   mUnk49d5a0;
    ::ll::UntypedStorage<8, 8>   mUnk67897e;
    ::ll::UntypedStorage<8, 8>   mUnk4cf62f;
    ::ll::UntypedStorage<4, 4>   mUnk9eab06;
    ::ll::UntypedStorage<1, 2>   mUnk1c2f38;
    ::ll::UntypedStorage<1, 1>   mUnkf7d817;
    ::ll::UntypedStorage<8, 24>  mUnk7743ce;
    ::ll::UntypedStorage<8, 24>  mUnk3f0ab2;
    ::ll::UntypedStorage<8, 272> mUnk1abde8;
    ::ll::UntypedStorage<1, 2>   mUnk930f2b;
    ::ll::UntypedStorage<8, 64>  mUnk88818e;
    ::ll::UntypedStorage<1, 1>   mUnkf0f0b6;
    ::ll::UntypedStorage<8, 16>  mUnk698fc4;
    ::ll::UntypedStorage<8, 16>  mUnk8b2973;
    ::ll::UntypedStorage<8, 16>  mUnk87b043;
    ::ll::UntypedStorage<8, 16>  mUnk639ef4;
    ::ll::UntypedStorage<8, 16>  mUnkae7244;
    ::ll::UntypedStorage<8, 16>  mUnk767c88;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceInitArguments& operator=(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
