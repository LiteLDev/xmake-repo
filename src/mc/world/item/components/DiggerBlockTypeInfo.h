#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct DiggerBlockTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>   filter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor>   filter;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                       destroySpeed;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger> onDig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiggerBlockTypeInfo(::DiggerBlockTypeInfo const&);

    MCNAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DiggerBlockTypeInfo const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> onDig;
#endif // @header-generator platform
    // NOLINTEND
};
