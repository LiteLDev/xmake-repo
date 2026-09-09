#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/UploadToRealmsError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Realms { class RealmsList; }
namespace Realms { struct World; }
// clang-format on

namespace Realms {

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

} // namespace Realms
