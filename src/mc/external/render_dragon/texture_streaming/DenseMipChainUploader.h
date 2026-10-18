#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct DenseMipChainStagingUploads; }
namespace dragon::texturestreaming { struct MipModificationRequest; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::texturestreaming {

struct DenseMipChainUploader {
public:
    // DenseMipChainUploader inner types declare
    // clang-format off
    struct UploadComplete;
#if defined(LL_PLAT_A) // @header-generator platform
    struct UploadInProgress;
#else // @header-generator platform
#endif // @header-generator platform
    struct UploadFailed;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UploadInProgress;
#endif // @header-generator platform
    // clang-format on

    // DenseMipChainUploader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct UploadComplete : public ::type_safe::strong_typedef<
                                dragon::texturestreaming::DenseMipChainUploader::UploadComplete,
                                dragon::ResolvedTextureResource*> {};
#else // @header-generator platform
    struct UploadComplete {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UploadInProgress : public ::type_safe::strong_typedef<
                                  dragon::texturestreaming::DenseMipChainUploader::UploadInProgress,
                                  dragon::ResolvedTextureResource*> {};
#else // @header-generator platform
    struct UploadFailed {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UploadFailed : public ::type_safe::strong_typedef<
                              dragon::texturestreaming::DenseMipChainUploader::UploadFailed,
                              dragon::ResolvedTextureResource*> {};

    using UploadResult = std::variant<
        dragon::texturestreaming::DenseMipChainUploader::UploadComplete,
        dragon::texturestreaming::DenseMipChainUploader::UploadInProgress,
        dragon::texturestreaming::DenseMipChainUploader::UploadFailed>;

    using UploadHandle = ::dragon::ResolvedTextureResource*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::texturestreaming::DenseMipChainStagingUploads>> mStagingUploads;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DenseMipChainUploader();

    MCNAPI std::variant<
        dragon::texturestreaming::DenseMipChainUploader::UploadComplete,
        dragon::texturestreaming::DenseMipChainUploader::UploadInProgress,
        dragon::texturestreaming::DenseMipChainUploader::UploadFailed>
    beginUpload(
        ::dragon::ResolvedTextureResource*,
        std::vector<dragon::texturestreaming::MipModificationRequest> const&,
        ulong&
    );

    MCNAPI void cancelUpload(::dragon::texturestreaming::DenseMipChainUploader::UploadInProgress&&);

    MCNAPI std::variant<
        dragon::texturestreaming::DenseMipChainUploader::UploadComplete,
        dragon::texturestreaming::DenseMipChainUploader::UploadInProgress,
        dragon::texturestreaming::DenseMipChainUploader::UploadFailed>
    continueUpload(::dragon::texturestreaming::DenseMipChainUploader::UploadInProgress&&, ulong&);

    MCNAPI void finalizeUpload(::dragon::texturestreaming::DenseMipChainUploader::UploadComplete&&);

    MCNAPI ~DenseMipChainUploader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct UploadInProgress {};
#endif // @header-generator platform
};

} // namespace dragon::texturestreaming
