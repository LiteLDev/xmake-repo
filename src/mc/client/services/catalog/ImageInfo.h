#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/ImageId.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct StyleData;
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
struct ImageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::catalog::ImageId>                    mId;
    ::ll::TypedStorage<8, 24, std::string>                          mUrl;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>> mDimensions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourceLocation>>    mResourceLocation;
    ::ll::TypedStorage<8, 8, ulong>                                 mFileSize;
    ::ll::TypedStorage<1, 1, bool>                                  mFetching;
    ::ll::TypedStorage<1, 1, uchar>                                 mSlotIndex;
    ::ll::UntypedStorage<8, 192>                                    mStyleData;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool hasValidResourceLocation() const;

    MCNAPI bool parseData(::Json::Value const&);

    MCNAPI ~ImageInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ImageInfo {};
#endif // @header-generator platform

} // namespace catalog
