#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITickingArea;
class LevelStorage;
class Random;
class Vec3;
struct ActorUniqueID;
struct Tick;
struct TickingAreaDescription;
// clang-format on

class TickingAreaListBase {
public:
    // TickingAreaListBase inner types define
    using RequeueAreaFunc = std::function<void(const ITickingArea&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ITickingArea>>> mTickingAreas;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TickingAreaListBase();

    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<Vec3> const&, std::function<void (const ITickingArea&)>, ::LevelStorage&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint countEntityTickingAreas() const;

    MCNAPI void destroyAreas();

    MCNAPI std::vector<std::shared_ptr<ITickingArea>> findStandaloneAreasContaining(::BlockPos const&);

    MCNAPI std::vector<std::shared_ptr<ITickingArea>> findStandaloneAreasNamed(std::string const&) const;

    MCNAPI std::shared_ptr<ITickingArea> getAreaFor(::ActorUniqueID const&) const;

    MCNAPI std::vector<std::shared_ptr<ITickingArea>> const& getAreas() const;

    MCNAPI std::vector<TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;

    MCNAPI std::vector<TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage&);

    MCNAPI std::vector<TickingAreaDescription>
           removeAreas(std::vector<std::shared_ptr<ITickingArea>> const&, ::LevelStorage&);

    MCNAPI void tickSeasons(::Random&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        std::vector<Vec3> const&,
        std::function<void(const ITickingArea&)>,
        ::LevelStorage&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
