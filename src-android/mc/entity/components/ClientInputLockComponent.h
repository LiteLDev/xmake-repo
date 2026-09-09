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
    ::ll::UntypedStorage<2, 2> mActiveCategories;
    ::ll::UntypedStorage<2, 2> mClientInputLocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _applyActiveCategoryLocks();

    MCNAPI void deserialize(uint);

    MCNAPI bool hasLockCategory(::ClientInputLockCategory) const;

    MCNAPI bool hasLockType(::ClientInputLockType) const;

    MCNAPI uint serialize() const;

    MCNAPI void setLockCategory(::ClientInputLockCategory, bool);
    // NOLINTEND
};
