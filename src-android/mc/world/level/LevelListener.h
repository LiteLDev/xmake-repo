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
    // clang-format off
    virtual ~LevelListener();

    virtual void allChanged();

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

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
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap const&
    );

    MCNAPI void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCNAPI void
    $addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    MCNAPI void $playMusic(std::string const&, ::Vec3 const&, float, float);

    MCNAPI void $playStreamingMusic(std::string const&, int, int, int);

    MCNAPI void $onEntityAdded(::Actor&);

    MCNAPI void $onEntityRemoved(::Actor&);

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCNAPI void $onChunkUnloaded(::LevelChunk&);

    MCNAPI void $onLevelDestruction(std::string const&);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
    );

    MCNAPI void $playerListChanged();

    MCNAPI void $onLevelDataCommandsChanged(bool);

    MCNAPI void $onLevelDataWorldTemplateOptionsUnlocked();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
