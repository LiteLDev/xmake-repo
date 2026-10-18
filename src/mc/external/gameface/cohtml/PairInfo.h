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
struct PairInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cohtml::ElementType[2]> Types;
    ::ll::TypedStorage<8, 16, ::cohtml::TypeInfo* [2]> TypeInfos;
    ::ll::TypedStorage<8, 16, void* [2]>               Member;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PairInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk643386;
    ::ll::UntypedStorage<8, 16> mUnkf32851;
    ::ll::UntypedStorage<8, 16> mUnk7e3088;
    // NOLINTEND

public:
    // prevent constructor by default
    PairInfo& operator=(PairInfo const&);
    PairInfo(PairInfo const&);
    PairInfo();
};
#else // @header-generator platform
struct PairInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
