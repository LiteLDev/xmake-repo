#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ElementType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
namespace cohtml { class TypeInfo; }
// clang-format on

namespace cohtml {

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

} // namespace cohtml
