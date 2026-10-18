#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/SaveContainer.h"

// auto generated forward declare list
// clang-format off
class GameSaveSystem;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class WorldsContainerMonitor : public ::SaveContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mRootPathPartCount;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsContainerMonitor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldsContainerMonitor();

    virtual void _onEndWrites();

    virtual void _onWriteFile(::Core::PathView);

    virtual void _onDeleteFile(::Core::PathView);

    virtual bool isWorldMonitorContainer() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldsContainerMonitor(::Core::Path const&, ::GameSaveSystem&);

    MCNAPI void _mountNewStorageAreaIfNecessary(::Core::PathView);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&, ::GameSaveSystem&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEndWrites();

    MCNAPI void $_onWriteFile(::Core::PathView);

    MCNAPI void $_onDeleteFile(::Core::PathView);

    MCNAPI bool $isWorldMonitorContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldsContainerMonitor {};
#endif // @header-generator platform
