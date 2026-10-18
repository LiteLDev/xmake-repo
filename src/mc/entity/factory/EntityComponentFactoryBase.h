#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class EntityContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class EntityComponentFactoryBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EntityComponentFactoryBase() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addComponents(::EntityContext&, ::DefinitionInstanceGroup const&);

    MCNAPI static void removeComponents(::EntityContext&, ::DefinitionInstanceGroup const&);
#else // @header-generator platform
    virtual ~EntityComponentFactoryBase() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};
