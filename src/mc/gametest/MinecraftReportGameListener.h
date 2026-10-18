#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftGameTestInstance;
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestTicker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftReportGameListener : public ::gametest::IGameTestListener,
#if defined(LL_PLAT_A) // @header-generator platform
                                    public ::std::enable_shared_from_this<MinecraftReportGameListener> {
#else // @header-generator platform
                                    public ::std::enable_shared_from_this<::MinecraftReportGameListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftGameTestInstance&> mOriginalTestInstance;
    ::ll::TypedStorage<8, 8, ::gametest::GameTestTicker&>  mTestTicker;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk80c891;
    ::ll::UntypedStorage<8, 8> mUnk479f87;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftReportGameListener();
#else // @header-generator platform
    virtual ~MinecraftReportGameListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _reportFailure(::gametest::GameTestError const&, ::BlockSource&);
#else // @header-generator platform
    MCNAPI void _reportFailure(::gametest::GameTestError const& error, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _say(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI void _say(::std::string const& chatColor, ::std::string const& text);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnBeacon(::Block const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void _spawnBeacon(::Block const& glassType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
