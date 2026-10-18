#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                             mDone;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>                      mGrassNoise;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>         mLevelPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>         mImportedChunksPath;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RegionFile>>                  mRegionFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RegionFile>>                  mEntitiesFile;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                                 mLoadedStorageVersion;
    ::ll::TypedStorage<8, 8, ::Biome&>                                         mDefaultBiome;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::string>> mChunkEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::string>> mChunkBlockEntities;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mRegionFileMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mChunkMapMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&);
    LegacyChunkStorage(LegacyChunkStorage const&);
    LegacyChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyChunkStorage();
#else // @header-generator platform
    virtual ~LegacyChunkStorage() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyChunkStorage(std::unique_ptr<ChunkSource>, ::LevelStorage&, ::StorageVersion, ::Biome&);
#else // @header-generator platform
    MCNAPI LegacyChunkStorage(
        ::std::unique_ptr<::ChunkSource> parent,
        ::LevelStorage&                  levelStorage,
        ::StorageVersion                 v,
        ::Biome&                         defaultBiome
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _markChunkAsImported(::ChunkPos const&);
#else // @header-generator platform
    MCNAPI void _markChunkAsImported(::ChunkPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>, ::LevelStorage&, ::StorageVersion, ::Biome&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ChunkSource> parent,
        ::LevelStorage&                  levelStorage,
        ::StorageVersion                 v,
        ::Biome&                         defaultBiome
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    MCNAPI bool $saveLiveChunk(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
