#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/beta/clientbiome/ClientBiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_21_130/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BiomeRegistry;
class ClientBiomeMusicUpgradeHelper;
class FogDefinitionRegistry;
class LinkedAssetValidator;
struct ClientBiomeJsonDocumentGlue;
struct DeferredRenderingBiomeRegistry;
namespace Core { class Path; }
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ClientBiomeJsonDocumentLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mPuvClientBiomeLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocumentLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientBiomeJsonDocumentLoader(
        ::cereal::ReflectionCtx&,
        ::Core::Path const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeRegistry&,
        ::DeferredRenderingBiomeRegistry const&,
        ::ClientBiomeMusicUpgradeHelper const&,
        std::unordered_set<std::string>&,
        ::ClientBiomeJsonDocumentGlue const&,
        ::FogDefinitionRegistry const&,
        bool,
        bool
    );

    MCNAPI ::PuvLoadData::LoadResultWithTiming load(::Puv::Input const&, bool const) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx&,
        ::Core::Path const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BiomeRegistry&,
        ::DeferredRenderingBiomeRegistry const&,
        ::ClientBiomeMusicUpgradeHelper const&,
        std::unordered_set<std::string>&,
        ::ClientBiomeJsonDocumentGlue const&,
        ::FogDefinitionRegistry const&,
        bool,
        bool
    );
    // NOLINTEND
};
