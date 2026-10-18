#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/world/NetworkWorldType.h"

// auto generated forward declare list
// clang-format off
class LevelSettings;
struct LocalWorldInfo;
// clang-format on

class IWorldsProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldsProvider() = default;

    virtual int getWorldCount(::WorldType, ::NetworkWorldType) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldById(std::string const&) const = 0;

    virtual bool refresh(::WorldType) = 0;

    virtual void startLocalWorld(::LocalWorldInfo, ::LevelSettings const*) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/world/NetworkWorldType.h"

// auto generated forward declare list
// clang-format off
class LevelSettings;
struct LocalWorldInfo;
// clang-format on

class IWorldsProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldsProvider() = default;

    virtual int getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const index) const = 0;

    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const& id) const = 0;

    virtual bool refresh(::WorldType tabType) = 0;

    virtual void startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IWorldsProvider {};
#endif // @header-generator platform
#endif // @header-generator platform
