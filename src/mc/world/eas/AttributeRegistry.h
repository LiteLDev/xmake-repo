#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/eas/AttributeHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::EAS::AttributeHandle> mHandle;
        ::ll::UntypedStorage<2, 2>                       mTypeId;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk95e23b;
        ::ll::UntypedStorage<2, 2> mUnk948cf6;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        RegisteredAttributeEntryBase& operator=(RegisteredAttributeEntryBase const&);
        RegisteredAttributeEntryBase(RegisteredAttributeEntryBase const&);
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mAttrKeyMap;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkdb3af7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeRegistry& operator=(AttributeRegistry const&);
    AttributeRegistry(AttributeRegistry const&);
    AttributeRegistry();
#endif // @header-generator platform
};

} // namespace EAS
