#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
namespace Util::CodeBuilder { struct Event; }
#endif // @header-generator platform
// clang-format on

namespace CodeBuilder {

struct EventMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::UntypedStorage<8, 16>            body;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk7f2f12;
    ::ll::UntypedStorage<8, 16> mUnke430fe;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EventMessage(::Util::CodeBuilder::Event const& event);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Util::CodeBuilder::Event const& event);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
