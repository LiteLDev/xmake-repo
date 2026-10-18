#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/entity/components/ClientInputLockType.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct ClientInputLockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2> mActiveCategories;
    ::ll::UntypedStorage<2, 2> mClientInputLocks;
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ClientInputLockCategory, 13>> mActiveCategories;
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ClientInputLockType, 11>>     mClientInputLocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _applyActiveCategoryLocks();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void deserialize(uint data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserialize(uint);

    MCNAPI bool hasLockCategory(::ClientInputLockCategory) const;

    MCNAPI bool hasLockType(::ClientInputLockType) const;

    MCNAPI uint serialize() const;

    MCNAPI void setLockCategory(::ClientInputLockCategory, bool);
#else // @header-generator platform
    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);
#endif // @header-generator platform
    // NOLINTEND
};
