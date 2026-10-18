#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class ILocalPlayerEntityGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalPlayerEntityGetter() = default;

    virtual ::EntityContext* getLocalPlayerEntityContext() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class ILocalPlayerEntityGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalPlayerEntityGetter() = default;

    virtual ::EntityContext* getLocalPlayerEntityContext() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILocalPlayerEntityGetter {};
#endif // @header-generator platform
#endif // @header-generator platform
