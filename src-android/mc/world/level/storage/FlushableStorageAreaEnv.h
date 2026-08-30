#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

class FlushableStorageAreaEnv : public ::FlushableEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mStorageArea;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushableStorageAreaEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlushableStorageAreaEnv();

    virtual void flushToPermanentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushToPermanentStorage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
