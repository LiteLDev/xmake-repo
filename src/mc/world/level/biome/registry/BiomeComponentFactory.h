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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeTagIDType;
struct BiomeTagSetIDType;
#endif // @header-generator platform
// clang-format on

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SerializeToDataFunc = std::function<void(
        const Biome&,
        BiomeDefinitionData&,
        bool,
        const TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const FeatureRegistry&,
        BiomeStringList&
#else // @header-generator platform
    using ApplySerializedDataFunc = ::std::function<void(
        ::BiomeDefinitionData const&,
        ::Biome&,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&,
        ::BlockPalette const&,
        ::BiomeRegistry const&,
        ::FeatureRegistry&,
        ::BiomeStringList const&
#endif // @header-generator platform
    )>;

#if defined(LL_PLAT_A) // @header-generator platform
    using ApplySerializedDataFunc = std::function<void(
        const BiomeDefinitionData&,
        Biome&,
        TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>&,
        const BlockPalette&,
        const BiomeRegistry&,
        FeatureRegistry&,
        const BiomeStringList&
#else // @header-generator platform
    using SerializeToDataFunc = ::std::function<void(
        ::Biome const&,
        ::BiomeDefinitionData&,
        bool,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&,
        ::FeatureRegistry const&,
        ::BiomeStringList&
#endif // @header-generator platform
    )>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::BiomeJsonDocumentGlue> mBiomeJsonDocumentGlue;
    ::ll::UntypedStorage<8, 48>                        mSerializeToDataFunc;
    ::ll::UntypedStorage<8, 48>                        mApplyFromDataFunc;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BiomeJsonDocumentGlue> mBiomeJsonDocumentGlue;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::Biome const&,
            ::BiomeDefinitionData&,
            bool,
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&,
            ::FeatureRegistry const&,
            ::BiomeStringList&
        )>>
        mSerializeToDataFunc;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::BiomeDefinitionData const&,
            ::Biome&,
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&,
            ::BlockPalette const&,
            ::BiomeRegistry const&,
            ::FeatureRegistry&,
            ::BiomeStringList const&
        )>>
        mApplyFromDataFunc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeComponentFactory();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI BiomeComponentFactory();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void registerBiomeDefinitionSerializers(
        ::std::function<void(
            ::Biome const&,
            ::BiomeDefinitionData&,
#endif // @header-generator platform
            bool,
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&,
            ::FeatureRegistry const&,
            ::BiomeStringList&
        )> serializeToData,
        ::std::function<void(
            ::BiomeDefinitionData const&,
            ::Biome&,
            ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&,
            ::BlockPalette const&,
            ::BiomeRegistry const&,
            ::FeatureRegistry&,
            ::BiomeStringList const&
        )> applyFromData
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
