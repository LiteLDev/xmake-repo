#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentItemType.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct ContentItem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>             mId;
    ::ll::TypedStorage<8, 24, std::string>      mName;
    ::ll::TypedStorage<8, 24, std::string>      mDescription;
    ::ll::TypedStorage<8, 8, ulong>             mSize;
    ::ll::TypedStorage<1, 1, bool>              mIsDescriptionExpanded;
    ::ll::TypedStorage<8, 8, ::ContentType>     mType;
    ::ll::TypedStorage<8, 8, ::ContentItemType> mItemType;
    ::ll::TypedStorage<8, 8, ::ContentFlags>    mFlags;
    ::ll::TypedStorage<8, 8, ::ContentSource*>  mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentItem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void toggleIsDescriptionExpanded();
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
