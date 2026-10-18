#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>       mIconName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>     mIconName;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);
#else // @header-generator platform
    ResolvedItemIconInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResolvedItemIconInfo(uint, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResolvedItemIconInfo(::std::string const& name, int frame, ::ItemIconInfoType type);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResolvedItemIconInfo(std::string const&, float, float, float, float, ushort, ushort);
#else // @header-generator platform
    MCAPI ResolvedItemIconInfo(
        ::std::string const& name,
        float                u0,
        float                u1,
        float                v0,
        float                v1,
        ushort               texSizeW,
        ushort               texSizeH
    );

    MCAPI ~ResolvedItemIconInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& name, int frame, ::ItemIconInfoType type);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, float, float, float, float, ushort, ushort);
#else // @header-generator platform
    MCAPI void*
    $ctor(::std::string const& name, float u0, float u1, float v0, float v1, ushort texSizeW, ushort texSizeH);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
