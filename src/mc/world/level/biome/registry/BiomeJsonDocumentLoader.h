#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/beta/biome/BiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_26_30/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BiomeRegistry;
class LinkedAssetValidator;
struct BiomeJsonDocumentGlue;
struct BiomeJsonDocumentGlueResolvedBiomeData;
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace PuvLoadData { struct LoadResultWithTiming; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeJsonDocumentLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mPuvBiomeLoader;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_30::BiomeJsonDocument::BiomeJsonObject,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject>>
        mPuvBiomeLoader;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeJsonDocumentGlue&,
        ::BiomeRegistry const&,
        ::Core::Path const&,
        bool,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&,
        bool
#else // @header-generator platform
    MCAPI BiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::BiomeRegistry const&                             biomeRegistry,
        ::Core::Path const&                                resourceName,
        bool                                               isBaseGamePack,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
             biomeIdToResolvedData,
        bool betaApis
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeJsonDocumentGlue&,
        ::BiomeRegistry const&,
        ::Core::Path const&,
        bool,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::BiomeRegistry const&                             biomeRegistry,
        ::Core::Path const&                                resourceName,
        bool                                               isBaseGamePack,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
             biomeIdToResolvedData,
        bool betaApis
#endif // @header-generator platform
    );
    // NOLINTEND
};
