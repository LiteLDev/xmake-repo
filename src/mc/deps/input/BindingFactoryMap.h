#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BindingFactory;
// clang-format on

class BindingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactoryMap() = default;

    virtual ::BindingFactory const& getBindingFactory(int) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BindingFactory;
// clang-format on

class BindingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactoryMap() = default;

    virtual ::BindingFactory const& getBindingFactory(int controllerId) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class BindingFactoryMap {};
#endif // @header-generator platform
#endif // @header-generator platform
