#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadDataRefVariant.h"
#include "mc/deps/puv/LoadResultBetaVariant.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#endif // @header-generator platform
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class ActorComponentFactory;
class ActorDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionPtr;
class ActorMigratedDefinitionFactory;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
#if defined(LL_PLAT_A) // @header-generator platform
class PackInstance;
#else // @header-generator platform
#endif // @header-generator platform
class PackLoadContext;
#if defined(LL_PLAT_A) // @header-generator platform
class PropertyGroupManager;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersionView;
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Input; }
namespace SharedTypes::Beta { struct ActorDocument; }
namespace SharedTypes::v1_26_40 { struct ActorDocument; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ActorDefinitionGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ActorDefinitionGroup inner types declare
    // clang-format off
    struct EDLWrapper;
    struct LoadActorResult;
    // clang-format on

    // ActorDefinitionGroup inner types define
    enum class LoadStatus : int {
        Success                      = 0,
        FailedToParseIdentifier      = 1,
        InvalidNamespaceInIdentifier = 2,
        DefinitionAlreadyDefined     = 3,
        FailedToLoadFromJSON         = 4,
        InvalidIdentifier            = 5,
    };

    struct EDLWrapper {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ActorDefinition>>> mList;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>>> mList;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct LoadActorResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorDefinitionGroup::LoadStatus>   mLoadStatus;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                         mActorId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                       mActorId;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                 mIsVanillaOverride;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorDefinitionPtr*>>                           mRegisteredPtrs;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ActorDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorDefinitionGroup::EDLWrapper>> mTemplateMap;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                             mResourcePackManager;
    ::ll::UntypedStorage<8, 24>                                                                  mLinkedAssetValidator;
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mReferenceMutex;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                              mEventing;
    ::ll::TypedStorage<8, 8, ::ActorComponentFactory*>                                           mComponentFactory;
    ::ll::TypedStorage<8, 56, ::Experiments>                                                     mExperiments;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorDefinitionPtr*>> mRegisteredPtrs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionGroup::EDLWrapper>>   mTemplateMap;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                              mResourcePackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                        mReferenceMutex;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                               mEventing;
    ::ll::TypedStorage<8, 8, ::ActorComponentFactory*>                            mComponentFactory;
    ::ll::TypedStorage<8, 72, ::Experiments>                                      mExperiments;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionGroup& operator=(ActorDefinitionGroup const&);
    ActorDefinitionGroup(ActorDefinitionGroup const&);
    ActorDefinitionGroup();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorDefinitionGroup();
#else // @header-generator platform
    virtual ~ActorDefinitionGroup() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionGroup(
        ::Level&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
#else // @header-generator platform
    MCAPI ActorDefinitionGroup(
        ::Level&                                           level,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&,
        ::PackLoadContext&,
        std::string const&,
        ::Json::Value&,
        std::unordered_set<std::string>&,
        ::LogArea
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _addRef(::ActorDefinitionPtr& ptr);
#endif

    MCAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&                             level,
        ::PackLoadContext&                   packLoadContext,
        ::std::string const&                 relativeResourceFilepath,
        ::Json::Value&                       root,
        ::std::unordered_set<::std::string>& definitions,
        ::LogArea                            logArea
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setupCommonResourceDefinitionMap(::ActorDefinition&, ::Level&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> buildActorEventList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> buildActorEventList() const;
#else // @header-generator platform
    MCAPI ::ActorDefinitionPtr tryGetDefinition(::std::string const& definitionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorComponentFactory* getComponentFactory();

    MCNAPI ::ActorDefinitionPtr tryGetDefinition(std::string const&);

    MCNAPI ::ActorDefinitionPtr tryGetDefinitionGroup(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI ::ActorDefinitionPtr tryGetDefinitionGroup(::std::string const& base, ::std::string const& definitionId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void loadActorDefinitionFormatVersion(::Json::Value&, ::SemVersion&);
#else // @header-generator platform
    MCAPI static void _setupCommonResourceDefinitionMap(::ActorDefinition& def, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool loadActorDefinitionIdentifier(::Json::Value const&, ::SemVersion const&, std::string&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void loadActorDefinitionFormatVersion(::Json::Value& root, ::SemVersion& formatVersion);

    MCAPI static bool loadActorDefinitionIdentifier(
        ::Json::Value const& root,
        ::SemVersion const&  formatVersion,
        ::std::string&       identifier
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Level&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
