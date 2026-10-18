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
struct MapInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cohtml::ElementType>         Type;
    ::ll::TypedStorage<8, 8, void* (*)(void*, char const*)> GetElement;
    ::ll::TypedStorage<8, 8, ::cohtml::TypeInfo*>           MapTypeInfo;
    ::ll::TypedStorage<8, 8, void*>                         UserData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MapInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk487ad7;
    ::ll::UntypedStorage<8, 8> mUnkc3f1d5;
    ::ll::UntypedStorage<8, 8> mUnk48e14b;
    ::ll::UntypedStorage<8, 8> mUnka0c603;
    // NOLINTEND

public:
    // prevent constructor by default
    MapInfo& operator=(MapInfo const&);
    MapInfo(MapInfo const&);
    MapInfo();
};
#else // @header-generator platform
struct MapInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
