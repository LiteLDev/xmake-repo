#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionHeightRange;
class IDimensionManagerConnector;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class LevelChunkMetaData;
class LevelChunkMetaDataBaseGameVersionWrapper;
class LevelChunkMetaDataDictionary;
class LevelSeed64;
struct DimensionType;
// clang-format on

class LevelChunkMetaDataManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnNewDimensionCreatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnChunkLoadedSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnNewDimensionCreatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnChunkLoadedSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _consolidateLevelChunkMetaData(::LevelChunk&);
#else // @header-generator platform
    MCAPI void _consolidateLevelChunkMetaData(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onNewDimensionCreated(::Dimension&);
#else // @header-generator platform
    MCAPI void _onNewDimensionCreated(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
#else // @header-generator platform
    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
#else // @header-generator platform
    MCAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector& dimensionManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector&);
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();

    MCNAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&,
        ::DimensionHeightRange const&
#else // @header-generator platform
    MCAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&                                     lc,
        ::LevelChunkMetaDataBaseGameVersionWrapper const& levelChunkMetaDataBaseGameVersionWrapper,
        ::DimensionHeightRange const&                     dimensionHeightRange
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~LevelChunkMetaDataManager();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&,
        ::LevelSeed64,
        ::GeneratorType,
        std::string const&,
        ::DimensionType,
        ::DimensionHeightRange const&,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&,
        ::LevelChunkMetaData&
#else // @header-generator platform
    MCAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&                                     lc,
        ::LevelSeed64                                     generationSeed,
        ::GeneratorType                                   generatorType,
        ::std::string const&                              dimensionName,
        ::DimensionType                                   dimensionId,
        ::DimensionHeightRange const&                     dimensionHeightRange,
        ::LevelChunkMetaDataBaseGameVersionWrapper const& levelChunkMetaDataBaseGameVersionWrapper,
        ::LevelChunkMetaData&                             metaData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    inferTargetMetaData(::LevelChunkMetaDataBaseGameVersionWrapper const&, ::DimensionType, ::LevelChunkMetaData&);
#else // @header-generator platform
    MCAPI static void inferTargetMetaData(
        ::LevelChunkMetaDataBaseGameVersionWrapper const& levelChunkMetaDataBaseGameVersionWrapper,
        ::DimensionType                                   dimensionID,
        ::LevelChunkMetaData&                             metaData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<LevelChunkMetaData> initializeLevelChunkMetaData(
        ::DimensionType,
        std::string const&,
        ::DimensionHeightRange const&,
        bool const,
        ::LevelSeed64 const,
        ::GeneratorType const,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::LevelChunkMetaData> initializeLevelChunkMetaData(
        ::DimensionType                                   dimensionId,
        ::std::string const&                              dimensionName,
        ::DimensionHeightRange const&                     dimensionHeightRange,
        bool                                              use3DBiomeMaps,
        ::LevelSeed64                                     levelSeed,
        ::GeneratorType                                   generatorType,
        ::LevelChunkMetaDataBaseGameVersionWrapper const& levelChunkMetaDataBaseGameVersionWrapper
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
