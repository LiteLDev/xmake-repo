#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

struct WorldHistoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::UntypedStorage<1, 1>                    mType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSourceOptions& operator=(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldHistoryPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
