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
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeJsonDocumentLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mPuvBiomeLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocumentLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeJsonDocumentGlue&,
        ::BiomeRegistry const&,
        ::Core::Path const&,
        bool,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeJsonDocumentGlue&,
        ::BiomeRegistry const&,
        ::Core::Path const&,
        bool,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&,
        bool
    );
    // NOLINTEND
};
