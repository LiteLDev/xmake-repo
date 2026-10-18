#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"

struct SkinPackCollectionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPackId;
    ::ll::UntypedStorage<8, 48>            mOnSkinPackCollectedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackCollectionListener& operator=(SkinPackCollectionListener const&);
    SkinPackCollectionListener();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"

struct SkinPackCollectionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                               mPackId;
    ::ll::TypedStorage<8, 64, ::std::function<void(::mce::UUID const&)>> mOnSkinPackCollectedCallback;
    // NOLINTEND
};
#else // @header-generator platform
struct SkinPackCollectionListener {};
#endif // @header-generator platform
#endif // @header-generator platform
