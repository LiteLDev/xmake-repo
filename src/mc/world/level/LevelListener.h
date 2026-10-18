#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ChunkSource;
class CompoundTag;
class HashedString;
class LevelChunk;
class MolangVariableMap;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
// clang-format on

class LevelListener : public ::BlockSourceListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelListener();
#else // @header-generator platform
    virtual ~LevelListener() /*override*/ = default;
#endif // @header-generator platform

    virtual void allChanged();

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addParticleEffect(::HashedString const&, ::Actor const&, ::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    virtual void addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    virtual void playMusic(std::string const&, ::Vec3 const&, float, float);

    virtual void playStreamingMusic(std::string const&, int, int, int);

    virtual void onEntityAdded(::Actor&);

    virtual void onEntityRemoved(::Actor&);

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    virtual void onChunkUnloaded(::LevelChunk&);

    virtual void onLevelDestruction(std::string const&);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>);

    virtual void playerListChanged();

    virtual void onLevelDataCommandsChanged(bool);

    virtual void onLevelDataWorldTemplateOptionsUnlocked();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $allChanged();

    MCNAPI void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCNAPI void $addParticleEffect(
#else // @header-generator platform
    virtual void addParticleEffect(
#endif // @header-generator platform
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);
#else // LL_PLAT_C
    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    );
#else // LL_PLAT_C
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playMusic(std::string const&, ::Vec3 const&, float, float);
#else // @header-generator platform
    virtual void playMusic(::std::string const&, ::Vec3 const&, float, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playStreamingMusic(std::string const&, int, int, int);
#else // @header-generator platform
    virtual void playStreamingMusic(::std::string const&, int, int, int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEntityAdded(::Actor&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onEntityAdded(::Actor& entity);
#else // LL_PLAT_C
    virtual void onEntityAdded(::Actor&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEntityRemoved(::Actor&);
#else // @header-generator platform
    virtual void onEntityRemoved(::Actor& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
#else // LL_PLAT_C
    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkUnloaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDestruction(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onLevelDestruction(::std::string const&);
#else // LL_PLAT_C
    virtual void onLevelDestruction(::std::string const& levelId);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // LL_PLAT_C
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // LL_PLAT_C
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    );
#else // LL_PLAT_C
    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );
#endif

    virtual void playerListChanged();

#ifdef LL_PLAT_S
    virtual void onLevelDataCommandsChanged(bool);
#else // LL_PLAT_C
    virtual void onLevelDataCommandsChanged(bool commandsEnabeld);
#endif

    virtual void onLevelDataWorldTemplateOptionsUnlocked();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $allChanged();

    MCFOLD void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCFOLD void $addParticleEffect(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerListChanged();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    MCFOLD void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDataCommandsChanged(bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);
#else // LL_PLAT_C
    MCFOLD void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDataWorldTemplateOptionsUnlocked();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);
#else // LL_PLAT_C
    MCFOLD void $addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );
#endif

#ifdef LL_PLAT_S
    MCFOLD void $addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    );
#else // LL_PLAT_C
    MCFOLD void $addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );
#endif

    MCFOLD void $playMusic(::std::string const&, ::Vec3 const&, float, float);

    MCFOLD void $playStreamingMusic(::std::string const&, int, int, int);

#ifdef LL_PLAT_S
    MCFOLD void $onEntityAdded(::Actor& entity);
#else // LL_PLAT_C
    MCFOLD void $onEntityAdded(::Actor&);
#endif

    MCFOLD void $onEntityRemoved(::Actor& entity);

    MCFOLD void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

#ifdef LL_PLAT_S
    MCFOLD void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
#else // LL_PLAT_C
    MCFOLD void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );
#endif

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);

#ifdef LL_PLAT_S
    MCFOLD void $onLevelDestruction(::std::string const&);
#else // LL_PLAT_C
    MCFOLD void $onLevelDestruction(::std::string const& levelId);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // LL_PLAT_C
    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // LL_PLAT_C
    MCFOLD void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);
#endif

#ifdef LL_PLAT_S
    MCAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    );
#else // LL_PLAT_C
    MCAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );
#endif

    MCFOLD void $playerListChanged();

#ifdef LL_PLAT_S
    MCFOLD void $onLevelDataCommandsChanged(bool);
#else // LL_PLAT_C
    MCFOLD void $onLevelDataCommandsChanged(bool commandsEnabeld);
#endif

    MCFOLD void $onLevelDataWorldTemplateOptionsUnlocked();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
