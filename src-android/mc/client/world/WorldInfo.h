#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceLoadOptions.h"

struct WorldInfo {
public:
    // WorldInfo inner types define
    enum class Status : int {
        Online      = 0,
        Offline     = 1,
        Unavailable = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                        mData;
    ::ll::UntypedStorage<8, 24>                        mWorldPath;
    ::ll::TypedStorage<8, 40, ::PackSourceLoadOptions> mOptions;
    ::ll::TypedStorage<1, 1, bool>                     mIsVirtual;
    ::ll::TypedStorage<1, 1, bool>                     mExists;
    ::ll::TypedStorage<1, 1, bool>                     mReturnOriginalPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldInfo& operator=(WorldInfo const&);
    WorldInfo(WorldInfo const&);
    WorldInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
