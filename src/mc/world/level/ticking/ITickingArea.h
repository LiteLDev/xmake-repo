#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class ITickingAreaView;
class LevelStorage;
class Random;
class Vec3;
struct ActorUniqueID;
struct Bounds;
struct Tick;
struct TickingAreaDescription;
namespace mce { class UUID; }
// clang-format on

class ITickingArea {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickingArea() = default;

    virtual ::mce::UUID const& getId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getName() const = 0;
#endif // @header-generator platform

    virtual ::ActorUniqueID const& getEntityId() const = 0;

    virtual bool isEntityOwned() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<BlockSource> getBlockSource() = 0;
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> const getBlockSource() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<BlockSource> const getBlockSource() const = 0;
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> getBlockSource() = 0;
#endif // @header-generator platform

    virtual ::Bounds const getBoundsCopy() const = 0;

    virtual bool isAlwaysActive() const = 0;

    virtual float getMaxDistToPlayers() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ITickingAreaView& getView() = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::ITickingAreaView const& getView() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::ITickingAreaView& getView() = 0;
#endif // @header-generator platform

    virtual ::TickingAreaDescription getDescription() const = 0;

    virtual ::TickingAreaLoadMode getLoadMode() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&) = 0;
#else // @header-generator platform
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage) = 0;
#endif // @header-generator platform

    virtual bool isPreloadDone() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::Tick const&, bool) = 0;
#else // @header-generator platform
    virtual void tick(::Tick const& currentTick, bool randomize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickSeasons(::Random&) = 0;
#else // @header-generator platform
    virtual void tickSeasons(::Random& random) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePosition(::Vec3 const&) = 0;
#else // @header-generator platform
    virtual void updatePosition(::Vec3 const& pos) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateAndCenter(::LevelStorage&, ::Tick) = 0;
#else // @header-generator platform
    virtual void updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* findOwner(uchar&) = 0;
#else // @header-generator platform
    virtual ::Actor* findOwner(uchar& pendingChunks) = 0;
#endif // @header-generator platform

    virtual bool entityHasBeenFound() const = 0;

    virtual void setEntityFound() = 0;

    virtual bool isRemoved() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove(::LevelStorage&) = 0;
#else // @header-generator platform
    virtual void remove(::LevelStorage& levelStorage) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&) = 0;
#else // @header-generator platform
    virtual void
    onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, ::LevelStorage& levelStorage) = 0;
#endif // @header-generator platform

    virtual bool isScoped() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ulong> const& getScope() const = 0;
#else // @header-generator platform
    virtual ::std::optional<uint64> const& getScope() const = 0;
#endif // @header-generator platform

    virtual bool isDoneLoadingScoped() const = 0;

    virtual bool isStandalone() const = 0;
    // NOLINTEND
};
