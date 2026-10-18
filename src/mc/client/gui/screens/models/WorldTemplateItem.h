#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct WorldTemplateItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mWorldId;
    ::ll::TypedStorage<8, 24, std::string> mDate;
    ::ll::TypedStorage<4, 4, ::GameType>   mGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateItem();
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/world/level/GameType.h"

struct WorldTemplateItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mWorldId;
    ::ll::TypedStorage<8, 32, ::std::string> mDate;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateItem() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldTemplateItem {};
#endif // @header-generator platform
#endif // @header-generator platform
