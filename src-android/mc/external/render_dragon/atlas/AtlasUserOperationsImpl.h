#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/IAtlasUserOperations.h"
#include "mc/external/render_dragon/endstone/Guarded.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct Data; }
// clang-format on

namespace dragon::atlas {

class AtlasUserOperationsImpl : public ::dragon::atlas::IAtlasUserOperations {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<dragon::guarded::Guarded<dragon::atlas::Data, std::shared_timed_mutex>>>> mData;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::atlas
