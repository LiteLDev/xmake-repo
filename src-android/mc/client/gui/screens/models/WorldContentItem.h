#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct WorldContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mWorldId;
    ::ll::UntypedStorage<8, 24>            mIconPath;
    ::ll::TypedStorage<8, 24, std::string> mDate;
    ::ll::TypedStorage<8, 8, long>         mLastUsed;
    ::ll::TypedStorage<4, 4, ::GameType>   mGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
