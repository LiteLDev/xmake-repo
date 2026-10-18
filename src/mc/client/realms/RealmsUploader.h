#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/UploadToRealmsError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Realms { class RealmsList; }
namespace Realms { struct World; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsUploader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                    mClient;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsList>> mRealmList;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUploader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void uploadRealm(
        ::Realms::World const&,
        std::string const&,
        std::function<void(std::optional<Realms::UploadToRealmsError>)>
    );
    // NOLINTEND
};
#else // @header-generator platform
class RealmsUploader {};
#endif // @header-generator platform

} // namespace Realms
