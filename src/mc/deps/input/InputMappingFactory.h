#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct InputMapping;
// clang-format on

class InputMappingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactory() = default;

    virtual ::InputMapping const* getMapping(std::string const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct InputMapping;
// clang-format on

class InputMappingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactory() = default;

    virtual ::InputMapping const* getMapping(::std::string const& mappingName) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class InputMappingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
