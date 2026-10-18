#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ImagePickingCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImagePickingCallback() = default;

    virtual void onImagePickingSuccess(std::string const&) = 0;

    virtual void onImagePickingCanceled() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ImagePickingCallback {};
#endif // @header-generator platform
