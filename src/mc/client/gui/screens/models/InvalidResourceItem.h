#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct InvalidResourceItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>        mLocation;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidResourceItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceItem();
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
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

struct InvalidResourceItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>        mLocation;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mFilter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceItem() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct InvalidResourceItem {};
#endif // @header-generator platform
#endif // @header-generator platform
