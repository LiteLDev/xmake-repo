#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class ServiceDrivenImageRepository;
// clang-format on

namespace SDL {

class SessionBinaries : public ::Bedrock::EnableNonOwnerReferences,
                        public ::std::enable_shared_from_this<SDL::SessionBinaries> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mCatalogService;
    ::ll::UntypedStorage<8, 8>             mImageRepository;
    ::ll::TypedStorage<8, 24, std::string> mImageUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionBinaries& operator=(SessionBinaries const&);
    SessionBinaries(SessionBinaries const&);
    SessionBinaries();
};

} // namespace SDL
