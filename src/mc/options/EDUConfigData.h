#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ServicePacksConfig;
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct EDUConfigData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 88>  mUnkeb0597;
    ::ll::UntypedStorage<4, 20>  mUnk7fb0be;
    ::ll::UntypedStorage<1, 1>   mUnk830bbe;
    ::ll::UntypedStorage<8, 56>  mUnk4a7d55;
    ::ll::UntypedStorage<1, 2>   mUnkf928be;
    ::ll::UntypedStorage<8, 32>  mUnkea7c32;
    ::ll::UntypedStorage<1, 2>   mUnk623f9f;
    ::ll::UntypedStorage<8, 104> mUnk4c22dd;
    ::ll::UntypedStorage<1, 2>   mUnk90e375;
    ::ll::UntypedStorage<1, 2>   mUnkb00840;
    ::ll::UntypedStorage<1, 2>   mUnk847086;
    ::ll::UntypedStorage<8, 24>  mUnk2504bf;
    ::ll::UntypedStorage<8, 32>  mUnk4d1ed9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EDUConfigData& operator=(EDUConfigData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EDUConfigData(EDUConfigData const&);
    EDUConfigData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EDUConfigData(::Json::Value const&);

    MCNAPI EDUConfigData(::EDUConfigData const&);

    MCNAPI ~EDUConfigData();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit EDUConfigData(::Json::Value const& config);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<ServicePacksConfig> parseServicePacks(::Json::Value const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::ServicePacksConfig> parseServicePacks(::Json::Value const& config);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(::EDUConfigData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Json::Value const& config);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
