#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/util/cereal_helpers/FileReference.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

struct InheritedReference {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CerealHelpers::FileReference> mParent;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>         mOverrides;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6c4299;
    ::ll::UntypedStorage<8, 72> mUnk50693a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference(InheritedReference const&);
    InheritedReference();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI InheritedReference(::CerealHelpers::InheritedReference const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::CerealHelpers::InheritedReference const&);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CerealHelpers
