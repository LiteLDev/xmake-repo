#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Parties { class PartySystem; }
namespace Social { class PartyChatGuiDataProxy; }
// clang-format on

struct PartySystemDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Parties::PartySystem>>>          mPartySystem;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Social::PartyChatGuiDataProxy>>> mPartyChatGuiDataProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    PartySystemDependencies();
};
#else // @header-generator platform
struct PartySystemDependencies {};
#endif // @header-generator platform
