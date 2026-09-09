#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadDataRefVariant.h"
#include "mc/deps/puv/LoadResultBetaVariant.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class ActorComponentFactory;
class ActorDefinition;
class ActorDefinitionPtr;
class ActorMigratedDefinitionFactory;
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class PackInstance;
class PackLoadContext;
class PropertyGroupManager;
class ResourcePackManager;
class SemVersion;
class SemVersionView;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Puv { class Input; }
namespace SharedTypes::Beta { struct ActorDocument; }
namespace SharedTypes::v1_26_40 { struct ActorDocument; }
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
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ActorDefinition>>> mList;
        // NOLINTEND
    };

    struct LoadActorResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorDefinitionGroup::LoadStatus>   mLoadStatus;
        ::ll::TypedStorage<8, 24, std::string>                         mActorId;
        ::ll::TypedStorage<1, 1, bool>                                 mIsVanillaOverride;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorDefinitionPtr*>>                           mRegisteredPtrs;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ActorDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorDefinitionGroup::EDLWrapper>> mTemplateMap;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                             mResourcePackManager;
    ::ll::UntypedStorage<8, 24>                                                                  mLinkedAssetValidator;
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mReferenceMutex;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                              mEventing;
    ::ll::TypedStorage<8, 8, ::ActorComponentFactory*>                                           mComponentFactory;
    ::ll::TypedStorage<8, 56, ::Experiments>                                                     mExperiments;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionGroup& operator=(ActorDefinitionGroup const&);
    ActorDefinitionGroup(ActorDefinitionGroup const&);
    ActorDefinitionGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorDefinitionGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionGroup(
        ::Level&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
    );

    MCNAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&,
        ::PackLoadContext&,
        std::string const&,
        ::Json::Value&,
        std::unordered_set<std::string>&,
        ::LogArea
    );

    MCNAPI void _setupCommonResourceDefinitionMap(::ActorDefinition&, ::Level&);

    MCNAPI std::vector<std::string> buildActorEventList() const;

    MCNAPI ::ActorComponentFactory* getComponentFactory();

    MCNAPI ::ActorDefinitionPtr tryGetDefinition(std::string const&);

    MCNAPI ::ActorDefinitionPtr tryGetDefinitionGroup(std::string const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void loadActorDefinitionFormatVersion(::Json::Value&, ::SemVersion&);

    MCNAPI static bool loadActorDefinitionIdentifier(::Json::Value const&, ::SemVersion const&, std::string&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Level&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
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
