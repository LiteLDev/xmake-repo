#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class TypeDescription {
public:
    // TypeDescription inner types define
    using SafeBoolType = ::cohtml::Binder* cohtml::TypeDescription::*;
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TypeDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1fd220;
    ::ll::UntypedStorage<8, 8> mUnkeecabf;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeDescription& operator=(TypeDescription const&);
    TypeDescription(TypeDescription const&);
    TypeDescription();
};
#else // @header-generator platform
class TypeDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
