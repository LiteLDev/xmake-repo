#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPalette;
class FeatureRegistry;
struct BiomeDefinitionData;
struct BiomeStringList;
// clang-format on

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types define
    using SerializeToDataFunc = std::function<void(
        const Biome&,
        BiomeDefinitionData&,
        bool,
        const TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const FeatureRegistry&,
        BiomeStringList&
    )>;

    using ApplySerializedDataFunc = std::function<void(
        const BiomeDefinitionData&,
        Biome&,
        TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const BlockPalette&,
        const BiomeRegistry&,
        FeatureRegistry&,
        const BiomeStringList&
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::BiomeJsonDocumentGlue> mBiomeJsonDocumentGlue;
    ::ll::UntypedStorage<8, 48>                        mSerializeToDataFunc;
    ::ll::UntypedStorage<8, 48>                        mApplyFromDataFunc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeComponentFactory();

    MCNAPI std::function<void(
        const BiomeDefinitionData&,
        Biome&,
        TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const BlockPalette&,
        const BiomeRegistry&,
        FeatureRegistry&,
        const BiomeStringList&
    )> const&
           getApplyDataToBiomeFunc() const;

    MCNAPI std::function<void(
        const Biome&,
        BiomeDefinitionData&,
        bool,
        const TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const FeatureRegistry&,
        BiomeStringList&
    )> const&
           getSerializeBiomeToDataFunc() const;

    MCNAPI void registerBiomeDefinitionSerializers(
        std::function<void(
            const Biome&,
            BiomeDefinitionData&,
            bool,
            const TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
            const FeatureRegistry&,
            BiomeStringList&
        )>,
        std::function<void(
            const BiomeDefinitionData&,
            Biome&,
            TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
            const BlockPalette&,
            const BiomeRegistry&,
            FeatureRegistry&,
            const BiomeStringList&
        )>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
