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
    // NOLINTEND

public:
    // prevent constructor by default
    TickingArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingArea();

    virtual ::mce::UUID const& getId() const;

    virtual std::string const& getName() const;

    virtual ::ActorUniqueID const& getEntityId() const;

    virtual bool isEntityOwned() const;

    virtual ::WeakRef<BlockSource> getBlockSource();

    virtual ::WeakRef<BlockSource> const getBlockSource() const;

    virtual ::Bounds const getBoundsCopy() const;

    virtual bool isAlwaysActive() const;

    virtual float getMaxDistToPlayers() const;

    virtual ::ITickingAreaView& getView();

    virtual ::ITickingAreaView const& getView() const;

    virtual ::TickingAreaDescription getDescription() const;

    virtual ::TickingAreaLoadMode getLoadMode() const;

    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&);

    virtual bool isPreloadDone() const;

    virtual void tick(::Tick const&, bool);

    virtual void tickSeasons(::Random&);

    virtual void updatePosition(::Vec3 const&);

    virtual void updateAndCenter(::LevelStorage&, ::Tick);

    virtual ::Actor* findOwner(uchar&);

    virtual bool entityHasBeenFound() const;

    virtual void setEntityFound();

    virtual bool isRemoved();

    virtual void remove(::LevelStorage&);

    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&);

    virtual bool isScoped() const;

    virtual std::optional<ulong> const& getScope() const;

    virtual bool isDoneLoadingScoped() const;

    virtual bool isStandalone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCNAPI void _save(::LevelStorage&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::UUID const& $getId() const;

    MCNAPI std::string const& $getName() const;

    MCNAPI ::ActorUniqueID const& $getEntityId() const;

    MCNAPI bool $isEntityOwned() const;

    MCNAPI ::WeakRef<BlockSource> $getBlockSource();

    MCNAPI ::WeakRef<BlockSource> const $getBlockSource() const;

    MCNAPI ::Bounds const $getBoundsCopy() const;

    MCNAPI bool $isAlwaysActive() const;

    MCNAPI float $getMaxDistToPlayers() const;

    MCNAPI ::ITickingAreaView& $getView();

    MCNAPI ::ITickingAreaView const& $getView() const;

    MCNAPI ::TickingAreaDescription $getDescription() const;

    MCNAPI ::TickingAreaLoadMode $getLoadMode() const;

    MCNAPI void $setLoadMode(::TickingAreaLoadMode, ::LevelStorage&);

    MCNAPI bool $isPreloadDone() const;

    MCNAPI void $tick(::Tick const&, bool);

    MCNAPI void $tickSeasons(::Random&);

    MCNAPI void $updatePosition(::Vec3 const&);

    MCNAPI void $updateAndCenter(::LevelStorage&, ::Tick);

    MCNAPI ::Actor* $findOwner(uchar&);

    MCNAPI bool $entityHasBeenFound() const;

    MCNAPI void $setEntityFound();

    MCNAPI bool $isRemoved();

    MCNAPI void $remove(::LevelStorage&);

    MCNAPI void $onComponentChanged(uint, float, bool, ::LevelStorage&);

    MCNAPI bool $isScoped() const;

    MCNAPI std::optional<ulong> const& $getScope() const;

    MCNAPI bool $isDoneLoadingScoped() const;

    MCNAPI bool $isStandalone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
