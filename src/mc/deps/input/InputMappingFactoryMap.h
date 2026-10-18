#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class InputMappingFactory;
// clang-format on

class InputMappingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactoryMap() = default;

    virtual ::InputMappingFactory& getInputMappingFactory(int) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class InputMappingFactory;
// clang-format on

class InputMappingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactoryMap() = default;

    virtual ::InputMappingFactory& getInputMappingFactory(int controllerId) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class InputMappingFactoryMap {};
#endif // @header-generator platform
#endif // @header-generator platform
