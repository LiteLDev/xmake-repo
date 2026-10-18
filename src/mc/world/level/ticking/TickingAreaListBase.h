#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITickingArea;
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct ActorUniqueID;
#if defined(LL_PLAT_A) // @header-generator platform
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingAreaDescription;
// clang-format on

class TickingAreaListBase {
public:
    // TickingAreaListBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using RequeueAreaFunc = std::function<void(const ITickingArea&)>;
#else // @header-generator platform
    using RequeueAreaFunc = ::std::function<void(::ITickingArea const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ITickingArea>>> mTickingAreas;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ITickingArea>>> mTickingAreas;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~TickingAreaListBase();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<Vec3> const&, std::function<void (const ITickingArea&)>, ::LevelStorage&);
    // clang-format on
#else // @header-generator platform
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint countEntityTickingAreas() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void add(::std::unique_ptr<::ITickingArea> area);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void destroyAreas();
#else // @header-generator platform
    MCAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasContaining(::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<ITickingArea>> findStandaloneAreasContaining(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::shared_ptr<::ITickingArea>> findStandaloneAreasNamed(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<ITickingArea>> findStandaloneAreasNamed(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ITickingArea> getAreaFor(::ActorUniqueID const& entityId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ITickingArea> getAreaFor(::ActorUniqueID const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<ITickingArea>> const& getAreas() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void processRemoves();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TickingAreaDescription> removeAllStandaloneAreas(::LevelStorage&);

    MCNAPI std::vector<TickingAreaDescription>
           removeAreas(std::vector<std::shared_ptr<ITickingArea>> const&, ::LevelStorage&);

    MCNAPI void tickSeasons(::Random&);
#else // @header-generator platform
    MCAPI ::std::vector<::TickingAreaDescription>
    removeAreas(::std::vector<::std::shared_ptr<::ITickingArea>> const& areasToRemove, ::LevelStorage& levelStorage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        std::vector<Vec3> const&,
        std::function<void(const ITickingArea&)>,
        ::LevelStorage&
#else // @header-generator platform
    MCAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
