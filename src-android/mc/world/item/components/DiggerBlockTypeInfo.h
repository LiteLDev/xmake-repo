#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerBlockTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>   filter;
    ::ll::TypedStorage<4, 4, int>                                       destroySpeed;
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
    // NOLINTEND
};
