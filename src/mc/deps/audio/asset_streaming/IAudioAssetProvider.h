#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Audio {

#if defined(LL_PLAT_A) // @header-generator platform
class IAudioAssetProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IAudioAssetProvider() = default;

    virtual std::unique_ptr<Audio::IStreamableAudioAsset> openStreamableAudioAsset(::ResourceLocation const&, ::gsl::span<const std::string>, std::optional<Core::PathView>) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IAudioAssetProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAudioAssetProvider() = default;

    virtual ::std::unique_ptr<::Audio::IStreamableAudioAsset> openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IAudioAssetProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Audio
