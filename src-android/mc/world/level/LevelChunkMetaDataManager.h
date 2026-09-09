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
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnNewDimensionCreatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnChunkLoadedSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _consolidateLevelChunkMetaData(::LevelChunk&);

    MCNAPI void _onNewDimensionCreated(::Dimension&);

    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);

    MCNAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector&);

    MCNAPI void tick();

    MCNAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&,
        ::DimensionHeightRange const&
    );

    MCNAPI ~LevelChunkMetaDataManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&,
        ::LevelSeed64,
        ::GeneratorType,
        std::string const&,
        ::DimensionType,
        ::DimensionHeightRange const&,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&,
        ::LevelChunkMetaData&
    );

    MCNAPI static void
    inferTargetMetaData(::LevelChunkMetaDataBaseGameVersionWrapper const&, ::DimensionType, ::LevelChunkMetaData&);

    MCNAPI static std::shared_ptr<LevelChunkMetaData> initializeLevelChunkMetaData(
        ::DimensionType,
        std::string const&,
        ::DimensionHeightRange const&,
        bool const,
        ::LevelSeed64 const,
        ::GeneratorType const,
        ::LevelChunkMetaDataBaseGameVersionWrapper const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
