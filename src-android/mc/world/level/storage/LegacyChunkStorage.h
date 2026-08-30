#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Biome;
class LevelChunk;
class LevelStorage;
class RegionFile;
struct LevelChunkFinalDeleter;
// clang-format on

class LegacyChunkStorage : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                       mDone;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>                mGrassNoise;
    ::ll::UntypedStorage<8, 24>                                          mLevelPath;
    ::ll::UntypedStorage<8, 24>                                          mImportedChunksPath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RegionFile>>                mRegionFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RegionFile>>                mEntitiesFile;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                           mLoadedStorageVersion;
    ::ll::TypedStorage<8, 8, ::Biome&>                                   mDefaultBiome;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::string>> mChunkEntities;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::string>> mChunkBlockEntities;
    ::ll::TypedStorage<4, 40, std::mutex>                                mRegionFileMutex;
    ::ll::TypedStorage<4, 40, std::mutex>                                mChunkMapMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&);
    LegacyChunkStorage(LegacyChunkStorage const&);
    LegacyChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyChunkStorage();

    virtual void loadChunk(::LevelChunk&, bool);

    virtual bool saveLiveChunk(::LevelChunk&);

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyChunkStorage(std::unique_ptr<ChunkSource>, ::LevelStorage&, ::StorageVersion, ::Biome&);

    MCNAPI void _markChunkAsImported(::ChunkPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>, ::LevelStorage&, ::StorageVersion, ::Biome&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadChunk(::LevelChunk&, bool);

    MCNAPI bool $saveLiveChunk(::LevelChunk&);

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
