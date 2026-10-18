#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/ticking/ITickingArea.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"
#include "mc/world/level/ticking/TickingAreaView.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Dimension;
class ITickingAreaView;
class LevelStorage;
class Random;
struct Bounds;
struct Tick;
struct TickingAreaDescription;
// clang-format on

class TickingArea : public ::ITickingArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>          mUID;
    ::ll::TypedStorage<8, 24, std::string>          mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mEntityId;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mScope;
    ::ll::TypedStorage<4, 4, float>                 mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                  mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                  mEntityFound;
    ::ll::TypedStorage<1, 1, bool>                  mSizeChanged;
    ::ll::TypedStorage<1, 1, bool>                  mRemoved;
    ::ll::TypedStorage<1, 1, bool>                  mIsDoneLoadingScoped;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    ::ll::TypedStorage<4, 12, ::Vec3>               mLastChunkUpdatePos;
    ::ll::TypedStorage<4, 12, ::Vec3>               mLastPos;
    ::ll::TypedStorage<4, 4, uint>                  mLastRadius;
    ::ll::UntypedStorage<8, 544>                    mChunkSource;
    ::ll::UntypedStorage<1, 16>                     mBlockSource;
    ::ll::TypedStorage<8, 32, ::TickingAreaView>    mView;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>              mUID;
    ::ll::TypedStorage<8, 32, ::std::string>            mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mEntityId;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>  mScope;
    ::ll::TypedStorage<4, 4, float>                     mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                      mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                      mEntityFound;
    ::ll::TypedStorage<1, 1, bool>                      mSizeChanged;
    ::ll::TypedStorage<1, 1, bool>                      mRemoved;
    ::ll::TypedStorage<1, 1, bool>                      mIsDoneLoadingScoped;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode>     mLoadMode;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastChunkUpdatePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastPos;
    ::ll::TypedStorage<4, 4, uint>                      mLastRadius;
    ::ll::TypedStorage<8, 432, ::ChunkViewSource>       mChunkSource;
    ::ll::TypedStorage<8, 16, ::WeakRef<::BlockSource>> mBlockSource;
    ::ll::TypedStorage<8, 32, ::TickingAreaView>        mView;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TickingArea();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TickingArea();
#else // @header-generator platform
    virtual ~TickingArea() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::UUID const& getId() const;
#else // @header-generator platform
    virtual ::mce::UUID const& getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID const& getEntityId() const;
#else // @header-generator platform
    virtual ::ActorUniqueID const& getEntityId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEntityOwned() const;
#else // @header-generator platform
    virtual ::Bounds const getBoundsCopy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<BlockSource> getBlockSource();
#else // @header-generator platform
    virtual bool isEntityOwned() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<BlockSource> const getBlockSource() const;
#else // @header-generator platform
    virtual bool isAlwaysActive() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bounds const getBoundsCopy() const;
#else // @header-generator platform
    virtual float getMaxDistToPlayers() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAlwaysActive() const;
#else // @header-generator platform
    virtual ::ITickingAreaView const& getView() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getMaxDistToPlayers() const;
#else // @header-generator platform
    virtual ::ITickingAreaView& getView() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ITickingAreaView& getView();
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> const getBlockSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ITickingAreaView const& getView() const;
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> getBlockSource() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TickingAreaDescription getDescription() const;
#else // @header-generator platform
    virtual ::TickingAreaDescription getDescription() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TickingAreaLoadMode getLoadMode() const;
#else // @header-generator platform
    virtual ::TickingAreaLoadMode getLoadMode() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&);
#else // @header-generator platform
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPreloadDone() const;
#else // @header-generator platform
    virtual bool isPreloadDone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::Tick const&, bool);
#else // @header-generator platform
    virtual void tick(::Tick const& currentTick, bool randomize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickSeasons(::Random&);
#else // @header-generator platform
    virtual void tickSeasons(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePosition(::Vec3 const&);
#else // @header-generator platform
    virtual void updatePosition(::Vec3 const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateAndCenter(::LevelStorage&, ::Tick);
#else // @header-generator platform
    virtual void updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* findOwner(uchar&);
#else // @header-generator platform
    virtual ::Actor* findOwner(uchar& pendingChunks) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool entityHasBeenFound() const;
#else // @header-generator platform
    virtual bool entityHasBeenFound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEntityFound();
#else // @header-generator platform
    virtual void setEntityFound() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRemoved();
#else // @header-generator platform
    virtual bool isRemoved() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove(::LevelStorage&);
#else // @header-generator platform
    virtual void remove(::LevelStorage& levelStorage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&);
#else // @header-generator platform
    virtual void onComponentChanged(
        uint            radius,
        float           maxDistToPlayers,
        bool            alwaysActive,
        ::LevelStorage& levelStorage
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isScoped() const;
#else // @header-generator platform
    virtual bool isScoped() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ulong> const& getScope() const;
#else // @header-generator platform
    virtual ::std::optional<uint64> const& getScope() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDoneLoadingScoped() const;
#else // @header-generator platform
    virtual bool isDoneLoadingScoped() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isStandalone() const;
#else // @header-generator platform
    virtual bool isStandalone() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TickingArea(
        ::Dimension&,
        ::mce::UUID,
        std::string const&,
        ::ActorUniqueID,
        ::Bounds const&,
        bool,
        float,
        bool,
        ::TickingAreaLoadMode
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI TickingArea(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _save(::LevelStorage&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI TickingArea(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );
#endif

    MCAPI void _save(::LevelStorage& levelStorage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Dimension&,
        ::mce::UUID,
        std::string const&,
        ::ActorUniqueID,
        ::Bounds const&,
        bool,
        float,
        bool,
        ::TickingAreaLoadMode
    );
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID const& $getId() const;
#else // @header-generator platform
    MCFOLD ::mce::UUID const& $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID const& $getEntityId() const;
#else // @header-generator platform
    MCFOLD ::ActorUniqueID const& $getEntityId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEntityOwned() const;
#else // @header-generator platform
    MCAPI ::Bounds const $getBoundsCopy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<BlockSource> $getBlockSource();
#else // @header-generator platform
    MCAPI bool $isEntityOwned() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<BlockSource> const $getBlockSource() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $isAlwaysActive() const;
#else // LL_PLAT_C
    MCFOLD bool $isAlwaysActive() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bounds const $getBoundsCopy() const;
#else // @header-generator platform
    MCAPI float $getMaxDistToPlayers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlwaysActive() const;
#else // @header-generator platform
    MCAPI ::ITickingAreaView const& $getView() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMaxDistToPlayers() const;
#else // @header-generator platform
    MCAPI ::ITickingAreaView& $getView();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ITickingAreaView& $getView();
#else // @header-generator platform
    MCAPI ::WeakRef<::BlockSource> const $getBlockSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ITickingAreaView const& $getView() const;
#else // @header-generator platform
    MCAPI ::WeakRef<::BlockSource> $getBlockSource();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TickingAreaDescription $getDescription() const;
#else // @header-generator platform
    MCAPI ::TickingAreaDescription $getDescription() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TickingAreaLoadMode $getLoadMode() const;
#else // @header-generator platform
    MCAPI ::TickingAreaLoadMode $getLoadMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLoadMode(::TickingAreaLoadMode, ::LevelStorage&);
#else // @header-generator platform
    MCAPI void $setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPreloadDone() const;
#else // @header-generator platform
    MCAPI bool $isPreloadDone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::Tick const&, bool);
#else // @header-generator platform
    MCAPI void $tick(::Tick const& currentTick, bool randomize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tickSeasons(::Random&);
#else // @header-generator platform
    MCAPI void $tickSeasons(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePosition(::Vec3 const&);
#else // @header-generator platform
    MCAPI void $updatePosition(::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateAndCenter(::LevelStorage&, ::Tick);
#else // @header-generator platform
    MCAPI void $updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $findOwner(uchar&);
#else // @header-generator platform
    MCAPI ::Actor* $findOwner(uchar& pendingChunks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $entityHasBeenFound() const;
#else // @header-generator platform
    MCAPI bool $entityHasBeenFound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEntityFound();
#else // @header-generator platform
    MCAPI void $setEntityFound();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRemoved();
#else // @header-generator platform
    MCAPI bool $isRemoved();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove(::LevelStorage&);
#else // @header-generator platform
    MCAPI void $remove(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onComponentChanged(uint, float, bool, ::LevelStorage&);
#else // @header-generator platform
    MCAPI void
    $onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isScoped() const;
#else // @header-generator platform
    MCFOLD bool $isScoped() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> const& $getScope() const;
#else // @header-generator platform
    MCFOLD ::std::optional<uint64> const& $getScope() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDoneLoadingScoped() const;
#else // @header-generator platform
    MCFOLD bool $isDoneLoadingScoped() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isStandalone() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $isStandalone() const;
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
