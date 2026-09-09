#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       mIconName;
    ::ll::TypedStorage<4, 4, int>                mIconFrame;
    ::ll::TypedStorage<4, 4, ::ItemIconInfoType> mIconType;
    ::ll::TypedStorage<4, 4, uint>               mRuntimeBlockID;
    ::ll::TypedStorage<4, 4, float>              mU0;
    ::ll::TypedStorage<4, 4, float>              mV0;
    ::ll::TypedStorage<4, 4, float>              mU1;
    ::ll::TypedStorage<4, 4, float>              mV1;
    ::ll::TypedStorage<2, 2, ushort>             mTexSizeW;
    ::ll::TypedStorage<2, 2, ushort>             mTexSizeH;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResolvedItemIconInfo(uint, int);

    MCNAPI ResolvedItemIconInfo(std::string const&, float, float, float, float, ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, int);

    MCNAPI void* $ctor(std::string const&, float, float, float, float, ushort, ushort);
    // NOLINTEND
};
