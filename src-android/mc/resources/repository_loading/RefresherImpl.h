#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IResourcePackRepositoryRefresher.h"

// auto generated forward declare list
// clang-format off
namespace RepositoryLoading { class IRepositoryLoader; }
// clang-format on

namespace RepositoryLoading {

class RefresherImpl : public ::IResourcePackRepositoryRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<RepositoryLoading::IRepositoryLoader>>> mLoader;
    // NOLINTEND
};

} // namespace RepositoryLoading
