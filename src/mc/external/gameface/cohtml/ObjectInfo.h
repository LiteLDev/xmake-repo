#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ElementType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class TypeInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct ObjectInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cohtml::ElementType> Type;
    ::ll::TypedStorage<8, 8, ::cohtml::TypeInfo*>   Info;
    ::ll::TypedStorage<8, 8, void*>                 UserData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ObjectInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc46fa2;
    ::ll::UntypedStorage<8, 8> mUnkf31fe8;
    ::ll::UntypedStorage<8, 8> mUnk536ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectInfo& operator=(ObjectInfo const&);
    ObjectInfo(ObjectInfo const&);
    ObjectInfo();
};
#else // @header-generator platform
struct ObjectInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
