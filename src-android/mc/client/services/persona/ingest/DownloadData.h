#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcId.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/shared_types/ArmSizeType.h"

namespace persona::ingest {

struct DownloadData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::DlcId>                           mDlcId;
    ::ll::UntypedStorage<8, 48>                                   mPackIdentity;
    ::ll::TypedStorage<8, 24, std::string>                        mSkinId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType> mCustomSkinArmSize;
    // NOLINTEND
};

} // namespace persona::ingest
