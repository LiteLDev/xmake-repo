#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/IAtlasRenderOperations.h"
#include "mc/external/render_dragon/endstone/Guarded.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct Data; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
class AtlasRenderOperationsImpl : public ::dragon::atlas::IAtlasRenderOperations {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<dragon::guarded::Guarded<dragon::atlas::Data, std::shared_timed_mutex>>>> mData;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class AtlasRenderOperationsImpl {};
#endif // @header-generator platform

} // namespace dragon::atlas
