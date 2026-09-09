#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/eas/AttributeHandle.h"

namespace EAS {

class AttributeRegistry {
public:
    // AttributeRegistry inner types declare
    // clang-format off
    class RegisteredAttributeEntryBase;
    // clang-format on

    // AttributeRegistry inner types define
    class RegisteredAttributeEntryBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::EAS::AttributeHandle> mHandle;
        ::ll::UntypedStorage<2, 2>                       mTypeId;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegisteredAttributeEntryBase();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RegisteredAttributeEntryBase() = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mAttrKeyMap;
    // NOLINTEND
};

} // namespace EAS
