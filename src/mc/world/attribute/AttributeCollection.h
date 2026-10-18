#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Attribute;
// clang-format on

class AttributeCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, Attribute*>> mAttributesMap;
    ::ll::TypedStorage<4, 4, uint>                                          mIDValueIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::Attribute*>> mAttributesMap;
    ::ll::TypedStorage<4, 4, uint>                                                mIDValueIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AttributeCollection();
#else // @header-generator platform
    MCAPI ::Attribute& getAttribute(::HashedString const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasAttribute(::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool hasAttribute(::HashedString const& name);
#endif // @header-generator platform
    // NOLINTEND
};
