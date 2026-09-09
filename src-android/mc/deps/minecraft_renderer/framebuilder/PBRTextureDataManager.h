#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/minecraft_renderer/framebuilder/PBRTextureData.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct PBRTextureData; }
// clang-format on

namespace mce::framebuilder {

class PBRTextureDataManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mEnabled;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<bgfx::PBRTextureData>>> mBgfxPBRTextureData;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::PBRTextureData>>     mPBRTextureData;
    ::ll::UntypedStorage<8, 616>                                                  mFreeList;
    ::ll::TypedStorage<4, 40, std::mutex>                                         mMutex;
    ::ll::TypedStorage<1, 1, bool>                                                mHasPendingDataToUpdate;
    // NOLINTEND
};

} // namespace mce::framebuilder
