#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/item/ComponentItemData.h"
#include "mc/world/item/components/ComponentItemData_v1_26_0.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 2072, ::ComponentItemData_v1_26_0>             mCerealData;
    ::ll::TypedStorage<8, 240, ::SharedTypes::Legacy::ComponentItemData> mLegacyData;
    ::ll::UntypedStorage<8, 24>                                          mEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 2304, ::ComponentItemData_v1_26_0>             mCerealData;
    ::ll::TypedStorage<8, 264, ::SharedTypes::Legacy::ComponentItemData> mLegacyData;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>            mEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComponentItemDataAll_Latest(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);
#else // @header-generator platform
    MCAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ComponentItemDataAll_Latest();
#else // @header-generator platform
    MCAPI ::ComponentItemDataAll_Latest& operator=(::ComponentItemDataAll_Latest const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ComponentItemDataAll_Latest&&);
#endif // @header-generator platform
    // NOLINTEND
};
