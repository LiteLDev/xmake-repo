#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackManifest;
class PackReport;
class ResourcePack;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ImportCompleteStep {

#if defined(LL_PLAT_A) // @header-generator platform
struct AddPackResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<ImportFailure>>                   mFailureReason;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PackManifest>>> mMovedManifest;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PackReport>>>   mMovedPackReport;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>>                         mPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>>                 mResourcePack;
    ::ll::UntypedStorage<1, 24>                                              mPackOutputFolder;
    ::ll::TypedStorage<1, 1, bool>                                           mHasWarnings;
    ::ll::TypedStorage<1, 1, bool>                                           mSuccess;
    // NOLINTEND
};
#else // @header-generator platform
struct AddPackResult {};
#endif // @header-generator platform

} // namespace ImportCompleteStep
