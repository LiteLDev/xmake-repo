#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Util::CodeBuilder {

struct Event {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::UntypedStorage<8, 16>            properties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk69bce5;
    ::ll::UntypedStorage<8, 16> mUnkd987ee;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Event(::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util::CodeBuilder
