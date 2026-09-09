#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/CatalogueBehavior.h"
#include "mc/deps/core/resource/ServicePacksConfig.h"
#include "mc/options/ChatRestrictions.h"
#include "mc/options/DedicatedServerConfig.h"
#include "mc/options/DemoConfig.h"
#include "mc/options/DiscoveryConfig.h"
#include "mc/options/EduAIConfig.h"
#include "mc/options/EduConfigPreset.h"
#include "mc/options/LevelExternalLinkConfig.h"
#include "mc/options/MaelstromConfig.h"
#include "mc/options/SaveToCloudConfig.h"
#include "mc/options/ShareToTeams.h"
#include "mc/options/UrlOverride.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct EDUConfigData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, std::optional<ShareToTeams>>           shareToTeams;
    ::ll::TypedStorage<4, 20, std::optional<DiscoveryConfig>>        discovery;
    ::ll::TypedStorage<1, 1, ::EduConfigPreset>                      preset;
    ::ll::TypedStorage<8, 48, std::optional<DemoConfig>>             demo;
    ::ll::TypedStorage<1, 2, std::optional<ChatRestrictions>>        chatRestrictions;
    ::ll::TypedStorage<8, 32, std::optional<ServicePacksConfig>>     servicePacks;
    ::ll::TypedStorage<1, 2, std::optional<LevelExternalLinkConfig>> externalLink;
    ::ll::TypedStorage<8, 80, std::optional<UrlOverride>>            urlOverride;
    ::ll::TypedStorage<1, 2, std::optional<MaelstromConfig>>         maelstrom;
    ::ll::TypedStorage<1, 2, std::optional<SaveToCloudConfig>>       saveToCloud;
    ::ll::TypedStorage<1, 2, std::optional<EduAIConfig>>             eduAIConfig;
    ::ll::TypedStorage<8, 24, std::optional<DedicatedServerConfig>>  dedicatedServerConfig;
    ::ll::TypedStorage<8, 32, std::optional<CatalogueBehavior>>      catalogueBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUConfigData& operator=(EDUConfigData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EDUConfigData(::Json::Value const&);

    MCNAPI EDUConfigData(::EDUConfigData const&);

    MCNAPI ~EDUConfigData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<ServicePacksConfig> parseServicePacks(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(::EDUConfigData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
