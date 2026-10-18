#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ElementType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
namespace cohtml { class TypeInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct ArrayInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cohtml::ElementType>                     Type;
    ::ll::TypedStorage<8, 8, ulong (*)(void*)>                          GetLength;
    ::ll::TypedStorage<8, 8, void* (*)(void*, ulong)>                   GetElement;
    ::ll::TypedStorage<8, 8, void (*)(::cohtml::Binder*, void*, ulong)> BindElement;
    ::ll::TypedStorage<8, 8, ::cohtml::TypeInfo*>                       ArrayTypeInfo;
    ::ll::TypedStorage<8, 8, void*>                                     UserData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ArrayInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf5e92a;
    ::ll::UntypedStorage<8, 8> mUnk27f00e;
    ::ll::UntypedStorage<8, 8> mUnk14b956;
    ::ll::UntypedStorage<8, 8> mUnk580388;
    ::ll::UntypedStorage<8, 8> mUnk35bee8;
    ::ll::UntypedStorage<8, 8> mUnk160749;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrayInfo& operator=(ArrayInfo const&);
    ArrayInfo(ArrayInfo const&);
    ArrayInfo();
};
#else // @header-generator platform
struct ArrayInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
